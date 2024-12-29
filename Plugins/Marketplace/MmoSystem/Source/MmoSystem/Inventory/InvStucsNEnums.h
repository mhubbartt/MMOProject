// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MmoSystem/Game/MSPlayerController.h"
#include "Windows/WindowsHWrapper.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "UObject/Object.h"
#include "InvStucsNEnums.generated.h"



struct FInventorySaveItem;
class UInventoryComponent;


UENUM(Blueprintable, BlueprintType, Meta = (DisplayName = "Item Type"))
enum EItemType : uint8
{
	Unknown UMETA(DisplayName = "Unknown"),
	Consumable UMETA(DisplayName = "Consumable"),
	Equipment UMETA(DisplayName = "Equipment"),
	Container UMETA(DisplayName = "Container"),
	Weapon UMETA(DisplayName = "Weapon"),	
	Tool UMETA(DisplayName = "Tool"),
	Other UMETA(DisplayName = "Other"),
	Quest UMETA(DisplayName = "Quest"),
	
};
USTRUCT(BlueprintType)
struct FStatsAndEffects
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag StatTag = FGameplayTag();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StatAmount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UGameplayEffect> GameplayEffect = nullptr;

	// Serialization and deserialization logic
	friend FArchive& operator<<(FArchive& Ar, FStatsAndEffects& Struct)
	{
		// Serialize the StatTag and StatAmount
		Ar << Struct.StatTag;
		Ar << Struct.StatAmount;

		// Serialize the GameplayEffect class reference
		UClass* GameplayEffectClass = Struct.GameplayEffect.Get();
		Ar << GameplayEffectClass;

		// Update the TSubclassOf from the deserialized class reference
		if (Ar.IsLoading())
		{
			Struct.GameplayEffect = GameplayEffectClass;
		}

		return Ar;
	}
};



USTRUCT(BlueprintType,Blueprintable)
struct FDynamicItemData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName ItemName = "NONAMEDUDE";

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<FStatsAndEffects> StatsAndEffects = TArray<FStatsAndEffects>();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Condition = -2.0f;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor ITemColor1 = FColor();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor ITemColor2 = FColor();
	
};


UCLASS(Blueprintable, BlueprintType)
class UStaticItemData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:


	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TEnumAsByte<EItemType> ItemType = Unknown;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 StackSize = 1;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FGameplayTag EquipmentSlotTag = FGameplayTag();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bCanEquip = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bQuestItem = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bConsumable = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bStackable = false;
	
};


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
	TObjectPtr<UStaticItemData> ItemData = nullptr;

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
	void AddItem(FName ItemName, UStaticItemData* StaticItemData, FDynamicItemData DynamicItemData, int32 Quantity);
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


