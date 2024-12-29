// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Inventory/ItemData/BasePrimaryItem.h"
#include "MmoSystem/Inventory/ItemData/ItemDynamicData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePrimaryItem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBasePrimaryItem();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBasePrimaryItem_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBaseWEquippablePrimaryItem();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBaseWEquippablePrimaryItem_NoRegister();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_EHandedness();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_EItemRarity();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_EItemType();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemDependency();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatsAndEffects();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Enum EHandedness
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandedness;
static UEnum* EHandedness_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandedness.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandedness.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MmoSystem_EHandedness, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("EHandedness"));
	}
	return Z_Registration_Info_UEnum_EHandedness.OuterSingleton;
}
template<> MMOSYSTEM_API UEnum* StaticEnum<EHandedness>()
{
	return EHandedness_StaticEnum();
}
struct Z_Construct_UEnum_MmoSystem_EHandedness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ambidextrous.DisplayName", "Ambidextrous" },
		{ "Ambidextrous.Name", "EHandedness::Ambidextrous" },
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EHandedness::Left" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EHandedness::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandedness::Right", (int64)EHandedness::Right },
		{ "EHandedness::Left", (int64)EHandedness::Left },
		{ "EHandedness::Ambidextrous", (int64)EHandedness::Ambidextrous },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MmoSystem_EHandedness_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	"EHandedness",
	"EHandedness",
	Z_Construct_UEnum_MmoSystem_EHandedness_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EHandedness_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EHandedness_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MmoSystem_EHandedness_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MmoSystem_EHandedness()
{
	if (!Z_Registration_Info_UEnum_EHandedness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandedness.InnerSingleton, Z_Construct_UEnum_MmoSystem_EHandedness_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandedness.InnerSingleton;
}
// End Enum EHandedness

// Begin Enum EItemRarity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemRarity;
static UEnum* EItemRarity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemRarity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MmoSystem_EItemRarity, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("EItemRarity"));
	}
	return Z_Registration_Info_UEnum_EItemRarity.OuterSingleton;
}
template<> MMOSYSTEM_API UEnum* StaticEnum<EItemRarity>()
{
	return EItemRarity_StaticEnum();
}
struct Z_Construct_UEnum_MmoSystem_EItemRarity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Common.DisplayName", "Common" },
		{ "Common.Name", "EItemRarity::Common" },
		{ "Epic.DisplayName", "Epic" },
		{ "Epic.Name", "EItemRarity::Epic" },
		{ "Legendary.DisplayName", "Legendary" },
		{ "Legendary.Name", "EItemRarity::Legendary" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
		{ "Rare.DisplayName", "Rare" },
		{ "Rare.Name", "EItemRarity::Rare" },
		{ "Uncommon.DisplayName", "Uncommon" },
		{ "Uncommon.Name", "EItemRarity::Uncommon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemRarity::Common", (int64)EItemRarity::Common },
		{ "EItemRarity::Uncommon", (int64)EItemRarity::Uncommon },
		{ "EItemRarity::Rare", (int64)EItemRarity::Rare },
		{ "EItemRarity::Epic", (int64)EItemRarity::Epic },
		{ "EItemRarity::Legendary", (int64)EItemRarity::Legendary },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MmoSystem_EItemRarity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	"EItemRarity",
	"EItemRarity",
	Z_Construct_UEnum_MmoSystem_EItemRarity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EItemRarity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EItemRarity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MmoSystem_EItemRarity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MmoSystem_EItemRarity()
{
	if (!Z_Registration_Info_UEnum_EItemRarity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemRarity.InnerSingleton, Z_Construct_UEnum_MmoSystem_EItemRarity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemRarity.InnerSingleton;
}
// End Enum EItemRarity

// Begin Enum EItemType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MmoSystem_EItemType, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> MMOSYSTEM_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_MmoSystem_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Consumable.Comment", "// Swords, bows, guns, etc.\x09\n" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "Consumable.ToolTip", "Swords, bows, guns, etc." },
		{ "Cosmetic.Comment", "// Items to summon pets\n" },
		{ "Cosmetic.DisplayName", "Cosmetic" },
		{ "Cosmetic.Name", "EItemType::Cosmetic" },
		{ "Cosmetic.ToolTip", "Items to summon pets" },
		{ "Equippable.Comment", "// Default or uninitialized\n" },
		{ "Equippable.DisplayName", "Equippable" },
		{ "Equippable.Name", "EItemType::Equippable" },
		{ "Equippable.ToolTip", "Default or uninitialized" },
		{ "Key.Comment", "// Scrolls or books for learning skills\n" },
		{ "Key.DisplayName", "Key" },
		{ "Key.Name", "EItemType::Key" },
		{ "Key.ToolTip", "Scrolls or books for learning skills" },
		{ "Material.Comment", "// Items tied to quests, non-tradable\n" },
		{ "Material.DisplayName", "Material" },
		{ "Material.Name", "EItemType::Material" },
		{ "Material.ToolTip", "Items tied to quests, non-tradable" },
		{ "Miscellaneous.Comment", "// Dyes, costumes, visual-only items\n" },
		{ "Miscellaneous.DisplayName", "Miscellaneous" },
		{ "Miscellaneous.Name", "EItemType::Miscellaneous" },
		{ "Miscellaneous.ToolTip", "Dyes, costumes, visual-only items" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
		{ "Mount.Comment", "// Unlocks doors, chests, or areas\n" },
		{ "Mount.DisplayName", "Mount" },
		{ "Mount.Name", "EItemType::Mount" },
		{ "Mount.ToolTip", "Unlocks doors, chests, or areas" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EItemType::None" },
		{ "Pet.Comment", "// Items to summon mounts\n" },
		{ "Pet.DisplayName", "Pet" },
		{ "Pet.Name", "EItemType::Pet" },
		{ "Pet.ToolTip", "Items to summon mounts" },
		{ "QuestItem.Comment", "// Potions, food, etc.\n" },
		{ "QuestItem.DisplayName", "Quest Item" },
		{ "QuestItem.Name", "EItemType::QuestItem" },
		{ "QuestItem.ToolTip", "Potions, food, etc." },
		{ "SkillItem.Comment", "// Crafting resources like ores and herbs\x09\n" },
		{ "SkillItem.DisplayName", "Skill Item" },
		{ "SkillItem.Name", "EItemType::SkillItem" },
		{ "SkillItem.ToolTip", "Crafting resources like ores and herbs" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::None", (int64)EItemType::None },
		{ "EItemType::Equippable", (int64)EItemType::Equippable },
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
		{ "EItemType::QuestItem", (int64)EItemType::QuestItem },
		{ "EItemType::Material", (int64)EItemType::Material },
		{ "EItemType::SkillItem", (int64)EItemType::SkillItem },
		{ "EItemType::Key", (int64)EItemType::Key },
		{ "EItemType::Mount", (int64)EItemType::Mount },
		{ "EItemType::Pet", (int64)EItemType::Pet },
		{ "EItemType::Cosmetic", (int64)EItemType::Cosmetic },
		{ "EItemType::Miscellaneous", (int64)EItemType::Miscellaneous },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MmoSystem_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_MmoSystem_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MmoSystem_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MmoSystem_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_MmoSystem_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// End Enum EItemType

// Begin ScriptStruct FItemDependency
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemDependency;
class UScriptStruct* FItemDependency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDependency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemDependency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDependency, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("ItemDependency"));
	}
	return Z_Registration_Info_UScriptStruct_ItemDependency.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FItemDependency>()
{
	return FItemDependency::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemDependency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "Dependency" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reference to the asset\n" },
#endif
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "Asset Management" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Dependency" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description or metadata about the dependency (optional)\n" },
#endif
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description or metadata about the dependency (optional)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Dependency" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Priority or usage context (optional)\n" },
#endif
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Priority or usage context (optional)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDependency>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemDependency_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDependency, Asset), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemDependency_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDependency, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemDependency_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDependency, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemDependency_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDependency, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDependency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDependency_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDependency_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDependency_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDependency_Statics::NewProp_Priority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDependency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDependency_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"ItemDependency",
	Z_Construct_UScriptStruct_FItemDependency_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDependency_Statics::PropPointers),
	sizeof(FItemDependency),
	alignof(FItemDependency),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDependency_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemDependency_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemDependency()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDependency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemDependency.InnerSingleton, Z_Construct_UScriptStruct_FItemDependency_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemDependency.InnerSingleton;
}
// End ScriptStruct FItemDependency

// Begin Class UBasePrimaryItem
void UBasePrimaryItem::StaticRegisterNativesUBasePrimaryItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasePrimaryItem);
UClass* Z_Construct_UClass_UBasePrimaryItem_NoRegister()
{
	return UBasePrimaryItem::StaticClass();
}
struct Z_Construct_UClass_UBasePrimaryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/ItemData/BasePrimaryItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetType_MetaData[] = {
		{ "Category", "Asset Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editable fields for Asset ID components\n" },
#endif
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editable fields for Asset ID components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "Asset Management" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Asset Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description or metadata about the dependency (optional)\n" },
#endif
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description or metadata about the dependency (optional)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[] = {
		{ "Category", "Asset Management" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dependencies required by this item\n" },
#endif
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dependencies required by this item" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "BasePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[] = {
		{ "Category", "BasePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[] = {
		{ "Category", "BasePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWeight_MetaData[] = {
		{ "Category", "BasePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRarity_MetaData[] = {
		{ "Category", "BasePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "BasePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static void NewProp_bIsStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemWeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemRarity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemRarity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasePrimaryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_PrimaryAssetType = { "PrimaryAssetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, PrimaryAssetType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetType_MetaData), NewProp_PrimaryAssetType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemDependency, METADATA_PARAMS(0, nullptr) }; // 3608735739
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependencies_MetaData), NewProp_Dependencies_MetaData) }; // 3608735739
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, ItemType), Z_Construct_UEnum_MmoSystem_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 2040782826
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, StackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackSize_MetaData), NewProp_StackSize_MetaData) };
void Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_bIsStackable_SetBit(void* Obj)
{
	((UBasePrimaryItem*)Obj)->bIsStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBasePrimaryItem), &Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStackable_MetaData), NewProp_bIsStackable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemWeight = { "ItemWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, ItemWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWeight_MetaData), NewProp_ItemWeight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemRarity = { "ItemRarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, ItemRarity), Z_Construct_UEnum_MmoSystem_EItemRarity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRarity_MetaData), NewProp_ItemRarity_MetaData) }; // 1861312550
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasePrimaryItem, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasePrimaryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_PrimaryAssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_Dependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_Dependencies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_bIsStackable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemRarity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_ItemRarity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasePrimaryItem_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasePrimaryItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBasePrimaryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasePrimaryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasePrimaryItem_Statics::ClassParams = {
	&UBasePrimaryItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBasePrimaryItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBasePrimaryItem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasePrimaryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasePrimaryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBasePrimaryItem()
{
	if (!Z_Registration_Info_UClass_UBasePrimaryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasePrimaryItem.OuterSingleton, Z_Construct_UClass_UBasePrimaryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBasePrimaryItem.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UBasePrimaryItem>()
{
	return UBasePrimaryItem::StaticClass();
}
UBasePrimaryItem::UBasePrimaryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBasePrimaryItem);
UBasePrimaryItem::~UBasePrimaryItem() {}
// End Class UBasePrimaryItem

// Begin Class UBaseWEquippablePrimaryItem
void UBaseWEquippablePrimaryItem::StaticRegisterNativesUBaseWEquippablePrimaryItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseWEquippablePrimaryItem);
UClass* Z_Construct_UClass_UBaseWEquippablePrimaryItem_NoRegister()
{
	return UBaseWEquippablePrimaryItem::StaticClass();
}
struct Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/ItemData/BasePrimaryItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotTag_MetaData[] = {
		{ "Category", "BaseWEquippablePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTwoHanded_MetaData[] = {
		{ "Category", "BaseWEquippablePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handedness_MetaData[] = {
		{ "Category", "BaseWEquippablePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipedMesh_MetaData[] = {
		{ "Category", "BaseWEquippablePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMesh_MetaData[] = {
		{ "Category", "BaseWEquippablePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsAndEffects_MetaData[] = {
		{ "Category", "BaseWEquippablePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAbilities_MetaData[] = {
		{ "Category", "BaseWEquippablePrimaryItem" },
		{ "ModuleRelativePath", "Inventory/ItemData/BasePrimaryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentSlotTag;
	static void NewProp_bIsTwoHanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTwoHanded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatsAndEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatsAndEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseWEquippablePrimaryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_EquipmentSlotTag = { "EquipmentSlotTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWEquippablePrimaryItem, EquipmentSlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentSlotTag_MetaData), NewProp_EquipmentSlotTag_MetaData) }; // 1298103297
void Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_bIsTwoHanded_SetBit(void* Obj)
{
	((UBaseWEquippablePrimaryItem*)Obj)->bIsTwoHanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_bIsTwoHanded = { "bIsTwoHanded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseWEquippablePrimaryItem), &Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_bIsTwoHanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTwoHanded_MetaData), NewProp_bIsTwoHanded_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWEquippablePrimaryItem, Handedness), Z_Construct_UEnum_MmoSystem_EHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handedness_MetaData), NewProp_Handedness_MetaData) }; // 583610066
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_EquipedMesh = { "EquipedMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWEquippablePrimaryItem, EquipedMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipedMesh_MetaData), NewProp_EquipedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_WorldMesh = { "WorldMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWEquippablePrimaryItem, WorldMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMesh_MetaData), NewProp_WorldMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_StatsAndEffects_Inner = { "StatsAndEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatsAndEffects, METADATA_PARAMS(0, nullptr) }; // 1159584597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_StatsAndEffects = { "StatsAndEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWEquippablePrimaryItem, StatsAndEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsAndEffects_MetaData), NewProp_StatsAndEffects_MetaData) }; // 1159584597
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_WeaponAbilities_Inner = { "WeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_WeaponAbilities = { "WeaponAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWEquippablePrimaryItem, WeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAbilities_MetaData), NewProp_WeaponAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_EquipmentSlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_bIsTwoHanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_EquipedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_WorldMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_StatsAndEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_StatsAndEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_WeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::NewProp_WeaponAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBasePrimaryItem,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::ClassParams = {
	&UBaseWEquippablePrimaryItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseWEquippablePrimaryItem()
{
	if (!Z_Registration_Info_UClass_UBaseWEquippablePrimaryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseWEquippablePrimaryItem.OuterSingleton, Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseWEquippablePrimaryItem.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UBaseWEquippablePrimaryItem>()
{
	return UBaseWEquippablePrimaryItem::StaticClass();
}
UBaseWEquippablePrimaryItem::UBaseWEquippablePrimaryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseWEquippablePrimaryItem);
UBaseWEquippablePrimaryItem::~UBaseWEquippablePrimaryItem() {}
// End Class UBaseWEquippablePrimaryItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHandedness_StaticEnum, TEXT("EHandedness"), &Z_Registration_Info_UEnum_EHandedness, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 583610066U) },
		{ EItemRarity_StaticEnum, TEXT("EItemRarity"), &Z_Registration_Info_UEnum_EItemRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1861312550U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2040782826U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemDependency::StaticStruct, Z_Construct_UScriptStruct_FItemDependency_Statics::NewStructOps, TEXT("ItemDependency"), &Z_Registration_Info_UScriptStruct_ItemDependency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemDependency), 3608735739U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBasePrimaryItem, UBasePrimaryItem::StaticClass, TEXT("UBasePrimaryItem"), &Z_Registration_Info_UClass_UBasePrimaryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasePrimaryItem), 3415263666U) },
		{ Z_Construct_UClass_UBaseWEquippablePrimaryItem, UBaseWEquippablePrimaryItem::StaticClass, TEXT("UBaseWEquippablePrimaryItem"), &Z_Registration_Info_UClass_UBaseWEquippablePrimaryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseWEquippablePrimaryItem), 1511451878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_1522935860(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
