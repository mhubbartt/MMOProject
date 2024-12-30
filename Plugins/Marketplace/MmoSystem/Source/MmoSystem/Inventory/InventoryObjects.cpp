// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryObjects.h"

#include <string>
#include "MmoSystem/StrucNEnumhHeaders.h"
#include "MmoSystem/Inventory/InventoryComponent.h"
#include "MmoSystem/GlobalsNTags.h"
#include "InventoryManager/InventorySaveBlobStruct.h"
#include "MmoSystem/Game/MSPlayerController.h"
#include "Net/UnrealNetwork.h"


using namespace MSGlobal;



void FInventoryList::AddItem(FName ItemName, UBasePrimaryItem* StaticItemData,
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
		DynamicItemData.UniqueItemID = FGuid::NewGuid().ToString();
		CalculateStackId( DynamicItemData);
		
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
	
	if (ItemInstance->ItemData->StackSize > 1)
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

void FInventoryList::RemoveItem(FName UniqueItemID, int32 QuantityToRemove, bool bDestroyAll, bool bIsConsumed)
{
	for (int32 i = 0; i < Inventory.Num(); i++)
	{
		FInvEntry& Entry = Inventory[i];

		if (Entry.ItemObject && Entry.ItemObject->DynamicItemData.UniqueItemID == UniqueItemID)
		{
			// Apply consumable effects if applicable
			if (bIsConsumed && Entry.ItemObject->ItemData->ItemType == MSGlobal::ItemType_Consumable)
			{
				ApplyConsumableEffects(Entry.ItemObject->DynamicItemData);
			}

			// Deduct quantity or remove entire stack
			if (bDestroyAll || Entry.Quantity <= QuantityToRemove)
			{
				Inventory.RemoveAt(i);
				MarkArrayDirty();
			}
			else
			{
				Entry.Quantity -= QuantityToRemove;
				MarkItemDirty(Entry);
			}

			return;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Item with UniqueItemID %s not found in inventory."), *UniqueItemID.ToString());
}


void FInventoryList::ApplyConsumableEffects(FDynamicItemData ItemData)
{
	UE_LOG(LogTemp, Log, TEXT("Applying consumable effects for item: %s"), *ItemData.ItemName.ToString());

	if (AActor* Owner = OwningInventory->GetOwner())
	{
		UAbilitySystemComponent* ASC = Owner->FindComponentByClass<UAbilitySystemComponent>();
		if (ASC)
		{
			for (int32 i = 0; i < ItemData.StatsAndEffects.Num(); i++)
			{
				const FStatsAndEffects& StatEffect = ItemData.StatsAndEffects[i];
				if (!StatEffect.GameplayEffect)
				{
					UE_LOG(LogTemp, Warning, TEXT("GameplayEffect is null for item: %s"), *ItemData.ItemName.ToString());
					continue;
				}

				// Prepare the SetByCaller parameters
				FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(
					StatEffect.GameplayEffect->GetClass(),
					1.0f, // Level of the effect
					ASC->MakeEffectContext()
				);

				if (SpecHandle.IsValid())
				{
					FGameplayEffectSpec* Spec = SpecHandle.Data.Get();
					if (Spec)
					{
						
					
						Spec->SetSetByCallerMagnitude(StatEffect.StatTag, StatEffect.StatAmount);
						

						// Apply the effect to the target (self in this case)
						ASC->ApplyGameplayEffectSpecToTarget(*Spec, ASC);
					}
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("Failed to create GameplayEffectSpec for item: %s"), *ItemData.ItemName.ToString());
				}
			}
		}
	}
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


void FInventoryList::CalculateStackId(FDynamicItemData DynamicItemData)
{

	FString LocalStackID = " ";
	for ( int32 i = 0; i < DynamicItemData.StatsAndEffects.Num() ; i++)
	{
		LocalStackID += DynamicItemData.StatsAndEffects[i].StatTag.ToString();
		LocalStackID += FString::FromInt(DynamicItemData.StatsAndEffects[i].StatAmount);
		LocalStackID += DynamicItemData.StatsAndEffects[i].GameplayEffect->GetName();
	}
	DynamicItemData.StackID = LocalStackID;
}





