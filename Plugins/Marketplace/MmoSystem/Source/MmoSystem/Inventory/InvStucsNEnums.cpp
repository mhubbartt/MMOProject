// Fill out your copyright notice in the Description page of Project Settings.


#include "InvStucsNEnums.h"
#include "MmoSystem/Inventory/InventoryComponent.h"
#include "MmoSystem/GlobalsNTags.h"
#include "InventoryManager/InventorySaveBlobStruct.h"
#include "MmoSystem/Game/MSPlayerController.h"
#include "Net/UnrealNetwork.h"


using namespace MSGlobal;



void FInventoryList::AddItem(FName ItemName, UStaticItemData* StaticItemData,
													FDynamicItemData DynamicItemData, int32 Quantity) 
{

	if (!OwningInventory->GetOwner()->HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("Add Item Does Not Have Authority:%d"), OwningInventory->GetOwner()->HasAuthority());
		return;
	}
	
	if (Inventory.Num() >= OwningInventory->GetInventorySize())
	{
		UE_LOG(LogTemp, Warning, TEXT("Inventory Full"));
		auto* PlayerController = Cast<AMSPlayerController>(OwningInventory->GetOwner());
		// UGameSystemMessages* SystemMessages = Cast<UGameSystemMessages>(PlayerController->GetGameInstance());
		// FSystemMessageStruct Message;
		//Message.Message = "Inventory Full";
		//Message.Channel = SystemMessage_Channel_ClientOnly;
		//Message.MessageId = 0;
		// SystemMessages->AddSystemMessage(Message);
		return;
	}
	
	TObjectPtr<UInvItemInstance> ItemInstance = NewObject<UInvItemInstance>(OwningInventory,UInvItemInstance::StaticClass());

	
	if (ItemInstance)
	{
		ItemInstance->DynamicItemData.ItemName = ItemName;
		ItemInstance->ItemData = StaticItemData;
		ItemInstance->DynamicItemData = DynamicItemData;	
        
		if (OwningInventory->IsUsingRegisteredSubObjectList() && OwningInventory->IsReadyForReplication() && ItemInstance)
		{
			OwningInventory->AddReplicatedSubObject(ItemInstance);		
		}
       
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AddItemToInventory ItemInstance is null"));
	
	}
	
	if (ItemInstance->ItemData->bStackable)
	{
		int32 HalfIndex = -1;
		if (AnyHalfFullStacks(ItemInstance, HalfIndex))
		{
			int32 AvailableSpace = ItemInstance->ItemData->StackSize - Inventory[HalfIndex].Quantity;
			int32 QuantityToAdd = FMath::Min(Quantity, AvailableSpace);

			Inventory[HalfIndex].Quantity += QuantityToAdd;
			Quantity -= QuantityToAdd;
			MarkItemDirty(Inventory[HalfIndex]);
			
		}		
	}

	if (Quantity > 0)
	{
		FInvEntry EmptyEntry;
		EmptyEntry.ItemObject = ItemInstance;
		EmptyEntry.Quantity = Quantity;
		EmptyEntry.SlotTag = Inventory_Slot_Main;
		Inventory.Add(EmptyEntry);
		MarkItemDirty(EmptyEntry);	
	}	

}

bool FInventoryList::RemoveItem(FInvEntry Item)
{
	return false;
}

bool FInventoryList::MoveItem(FInvEntry Item, int32 Index)
{
return false;
	
}

bool FInventoryList::LoadItemFromDatabase(FInventorySaveItem Item)
{
	
	FDynamicItemData DynamicItemData;
	AddItem(Item.ItemName, Item.StaticData.Get(), DynamicItemData , Item.Quantity);

		return true;
	
	
}


UInvItemInstance::UInvItemInstance(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
}

void UInvItemInstance::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, DynamicItemData);
	DOREPLIFETIME(ThisClass, ItemData);
	DOREPLIFETIME(ThisClass, StackID);
	DOREPLIFETIME(ThisClass, UniqueItemID);
}

FInventoryList::FInventoryList(const TObjectPtr<UInventoryComponent>& InOwningInventory)
{
	OwningInventory = InOwningInventory;	
	
}




bool FInventoryList::AnyHalfFullStacks(UInvItemInstance* ItemObjectData, int32& Index) const
{

	int32 StackSize =  ItemObjectData->ItemData->StackSize;
	for (int32 i = 0; i < Inventory.Num(); i++)
	{
		if (Inventory[i].ItemObject->DynamicItemData.ItemName == ItemObjectData->DynamicItemData.ItemName && Inventory[i].Quantity < StackSize && Inventory[i].Quantity > 0)
		{
			Index = i;
			return true;
		}
	}
	Index = -1;
	return false;
}

void FInventoryList::PreReplicatedRemove(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	
	if (!OwningInventory){return;}	
	OwningInventory->InventoryUpdateDelegate.Broadcast();
}

void FInventoryList::PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	if (!OwningInventory){return;}	
	OwningInventory->InventoryUpdateDelegate.Broadcast();
}

void FInventoryList::PostReplicatedChange(const TArrayView<int32> AddedIndices, int32 FinalSize)
{
	if (!OwningInventory){return;}	
	OwningInventory->InventoryUpdateDelegate.Broadcast();
}








