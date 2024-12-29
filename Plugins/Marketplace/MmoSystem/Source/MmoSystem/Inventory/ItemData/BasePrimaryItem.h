#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/AssetManager.h"
#include "MmoSystem/StrucNEnumhHeaders.h"
#include "MmoSystem/Inventory/ItemTypeTags.h"
#include "BasePrimaryItem.generated.h"



struct FItemDependency;





USTRUCT(BlueprintType)
struct FItemDependency
{
	GENERATED_BODY()

	// Reference to the asset
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency Management")
	FPrimaryAssetType Asset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency Management")
	FName AssetName;

	// Description or metadata about the dependency (optional)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency Management")
	FString Description;

	// Priority or usage context (optional)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency Management")
	int32 Priority = 0;

	// Convert to FPrimaryAssetId at runtime
	FPrimaryAssetId ResolveToAssetId() const
	{
		if (Asset.IsValid())
		{			
			return FPrimaryAssetId(Asset, AssetName); // TODO:: AssetName()
		}
		return FPrimaryAssetId();
	}
};

UCLASS(Blueprintable, BlueprintType)
class UBasePrimaryItem : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Item Management")
	FGameplayTag ItemType = FGameplayTag(MSGlobal::ItemType_None);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Management")
	UTexture2D* InventoryIcon = nullptr;  // TODO:: Maybe 2dTextRender

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Item Management")
	int32 StackSize = 0;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Item Management")
	float ItemWeight = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Management")
	FGameplayTag ItemRarity = FGameplayTag(MSGlobal::ItemRarity_Common);



	// Editable fields for Asset ID components
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Management")
	FPrimaryAssetType PrimaryAssetType ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Management")
	FName AssetName;

	// Description or metadata about the dependency (optional)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Management")
	FString AssetDescription;

	// AssetDependencies required by this item
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Management")
	TArray<FItemDependency> AssetDependencies;
	


	// Generate the Asset ID dynamically
	FPrimaryAssetId GetAssetId() const
	{
		return FPrimaryAssetId(PrimaryAssetType, AssetName);
	}

	// Resolve dependencies to FPrimaryAssetId at runtime
	TArray<FPrimaryAssetId> GetResolvedDependencies() const;
	
};



UCLASS(Blueprintable, BlueprintType)
class UBaseWEquippablePrimaryItem : public UBasePrimaryItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment Management")
	FGameplayTag EquipmentSlotTag = FGameplayTag();

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Equipment Management")
	bool bIsTwoHanded = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Equipment Management")
	FGameplayTag Handedness = FGameplayTag(MSGlobal::Handedness_Right);

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Equipment Management")
	USkeletalMesh* EquipedMesh = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Equipment Management")
	UStaticMesh* WorldMesh = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Equipment Management")
	TArray< FStatsAndEffects> StatsAndEffects = TArray<FStatsAndEffects>();

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Equipment Management")
	TArray< UGameplayAbility*> WeaponAbilities = TArray<UGameplayAbility*>();
	
};