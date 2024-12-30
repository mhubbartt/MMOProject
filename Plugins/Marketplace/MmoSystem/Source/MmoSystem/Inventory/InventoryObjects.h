// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MmoSystem/Game/MSPlayerController.h"
#include "Windows/WindowsHWrapper.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UObject/Object.h"
#include "MmoSystem/StrucNEnumhHeaders.h"
#include "InventoryObjects.generated.h"


struct FInventorySaveItem;
class UInventoryComponent;



UCLASS()
class UInvItemInstance : public UObject
{
	GENERATED_BODY()

public:

	UInvItemInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	//~UObject interface
	virtual bool IsSupportedForNetworking() const override { return true; }
	//~End of UObject interface
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Replicated,EditAnywhere,BlueprintReadWrite)
	FString StackID = "";

	UPROPERTY(Replicated,EditAnywhere,BlueprintReadWrite)
	FString UniqueItemID = "";

	UPROPERTY(Replicated,EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UBasePrimaryItem> ItemData = nullptr;

	UPROPERTY(Replicated,EditAnywhere,BlueprintReadWrite)
	FDynamicItemData DynamicItemData = FDynamicItemData();
	
};


USTRUCT(BlueprintType)
struct FInvEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UInvItemInstance* ItemObject = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Quantity = 0;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FGameplayTag SlotTag = FGameplayTag();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 SlotIndex = -1;
	
};




//////////////////////////////////////////////////////////////////////
// InventoryList List

USTRUCT(Blueprintable, BlueprintType, Meta = (DisplayName = "InventoryList"))
struct FInventoryList : public FFastArraySerializer
{
	GENERATED_BODY()

	FInventoryList(): OwningInventory(nullptr)
	{
	}

	FInventoryList(const TObjectPtr<UInventoryComponent>& InOwningInventory);
	



	bool AnyHalfFullStacks(UInvItemInstance* ItemObjectData, int32& Index) const;
	

	//~FFastArraySerializer contract
	void PreReplicatedRemove(TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedAdd(TArrayView<int32> AddedIndices, int32 FinalSize) ;
	void PostReplicatedChange(TArrayView<int32> AddedIndices, int32 FinalSize);
	//~End of FFastArraySerializer contract

	// The owning inventory component
	UPROPERTY()
	TObjectPtr<UInventoryComponent> OwningInventory;

	// The actual inventory
	UPROPERTY(BlueprintReadWrite)
	TArray<FInvEntry> Inventory;

   //~Main Functions
	void AddItem(FName ItemName, UBasePrimaryItem* StaticItemData, FDynamicItemData DynamicItemData, int32 Quantity);
	bool RemoveItem(FInvEntry Item);
	bool MoveItem(FInvEntry Item, int32 Index);
	bool LoadItemFromDatabase(FInventorySaveItem Item);
	

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FastArrayDeltaSerialize<FInvEntry, FInventoryList>(Inventory, DeltaParms, *this);
	}

	
};
template<>
struct TStructOpsTypeTraits<FInventoryList> : public TStructOpsTypeTraitsBase2<FInventoryList>
{
	enum { WithNetDeltaSerializer = true };
};


