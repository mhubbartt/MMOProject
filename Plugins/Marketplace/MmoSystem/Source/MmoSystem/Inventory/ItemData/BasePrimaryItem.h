#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MmoSystem/StrucNEnumhHeaders.h"
#include "BasePrimaryItem.generated.h"


UENUM(BlueprintType)
enum class EHandedness : uint8
{
	Right UMETA(DisplayName = "Right"),
	Left UMETA(DisplayName = "Left"),
	Ambidextrous UMETA(DisplayName = "Ambidextrous")
};

UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	Common UMETA(DisplayName = "Common"),
	Uncommon UMETA(DisplayName = "Uncommon"),
	Rare UMETA(DisplayName = "Rare"),
	Epic UMETA(DisplayName = "Epic"),
	Legendary UMETA(DisplayName = "Legendary")
};

UENUM(BlueprintType)
enum class EItemType : uint8
{
	None UMETA(DisplayName = "None"),                 // Default or uninitialized
	Equippable UMETA(DisplayName = "Equippable"),     // Swords, bows, guns, etc.	
	Consumable UMETA(DisplayName = "Consumable"),    // Potions, food, etc.
	QuestItem UMETA(DisplayName = "Quest Item"),     // Items tied to quests, non-tradable
	Material UMETA(DisplayName = "Material"),        // Crafting resources like ores and herbs	
	SkillItem UMETA(DisplayName = "Skill Item"),     // Scrolls or books for learning skills
	Key UMETA(DisplayName = "Key"),                 // Unlocks doors, chests, or areas
	Mount UMETA(DisplayName = "Mount"),             // Items to summon mounts
	Pet UMETA(DisplayName = "Pet"),                 // Items to summon pets
	Cosmetic UMETA(DisplayName = "Cosmetic"),       // Dyes, costumes, visual-only items
	Miscellaneous UMETA(DisplayName = "Miscellaneous") // Anything that doesn’t fit into the above
};



UCLASS(Blueprintable, BlueprintType)
class UBasePrimaryItem : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	EItemType ItemType = EItemType::None;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 StackSize = 1;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bIsStackable = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float ItemWeight = 0.0f;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity ItemRarity = EItemRarity::Common;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon = nullptr;  // TODO:: Maybe 2dTextRender
	
};

UCLASS(Blueprintable, BlueprintType)
class UBaseWEquippablePrimaryItem : public UBasePrimaryItem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FGameplayTag EquipmentSlotTag = FGameplayTag();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bIsTwoHanded = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	EHandedness Handedness = EHandedness::Right;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	USkeletalMesh* EquipedMesh = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UStaticMesh* WorldMesh = nullptr;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray< FStatsAndEffects> StatsAndEffects = TArray<FStatsAndEffects>();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray< UGameplayAbility*> WeaponAbilities = TArray<UGameplayAbility*>();
	
};