// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Engine/ActorChannel.h"
#include "InventoryManager/InventorySaveBlobStruct.h"
#include "MmoSystem/SystemMessages/LoggingMacros.h"
#include "Net/UnrealNetwork.h"

using namespace MSGlobal;

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent(FObjectInitializer const& ObjectInitializer)
: Super(ObjectInitializer)
, InventoryList(this)

{
	PrimaryComponentTick.bCanEverTick = bShowDebug;
	SetIsReplicatedByDefault(true);
	
	
}
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	DebugInventory();
}


// Replication Functions
void UInventoryComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, InventoryList);

	
}

void UInventoryComponent::InitializeComponent()
{
	Super::InitializeComponent();
}


bool UInventoryComponent::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch,
                                              FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (FInvEntry& Entry : InventoryList.Inventory)
	{
		UInvItemInstance* Instance = Entry.ItemObject;

		if (Instance && IsValid(Instance))
		{
			WroteSomething |= Channel->ReplicateSubobject(Instance, *Bunch, *RepFlags);
		}
	}

	return WroteSomething;
}

void UInventoryComponent::ReadyForReplication()
{
	Super::ReadyForReplication();

	// Register existing UInvItemInstance
	if (IsUsingRegisteredSubObjectList())
	{
		for (const FInvEntry& Entry : InventoryList.Inventory)
		{
			UInvItemInstance* Instance = Entry.ItemObject;

			if (IsValid(Instance))
			{
				AddReplicatedSubObject(Instance);
			}
		}
	}
}



// Helper Functions
void UInventoryComponent::DebugInventory() 
{	
#if !UE_BUILD_SHIPPING
	if (bShowDebug && !InventoryList.Inventory.IsEmpty())
	{
		for (int32 i = 0; i < InventoryList.Inventory.Num(); i++)
		{
			const FString Name = InventoryList.Inventory[i].ItemObject->DynamicItemData.ItemName.ToString();            
			MMO_INVENTORY_DEBUG(-1, 0.0f, FColor::Emerald, "Item Name: %s, Index: %hd, Quantity:  %hd", *Name, i, InventoryList.Inventory[i].Quantity);
		}
	}
#endif
}


// Main Functions

void UInventoryComponent::AddItemToInventory_Implementation( FName ItemName, UStaticItemData* StaticItemData,
                                                    FDynamicItemData DynamicItemData, int32 Quantity) 
{	
    InventoryList.AddItem(ItemName,StaticItemData, DynamicItemData, Quantity);
}
void UInventoryComponent::RemoveItemFromInventory_Implementation(FName UniqueItemID, int32 QuantityToRemove, bool bDestroyAll, bool bIsConsumed)
{
	// TODO:
}