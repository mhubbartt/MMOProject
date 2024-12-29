// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Inventory/ItemData/ItemDynamicData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDynamicData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicItemData();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatsAndEffects();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin ScriptStruct FStatsAndEffects
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatsAndEffects;
class UScriptStruct* FStatsAndEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatsAndEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatsAndEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatsAndEffects, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("StatsAndEffects"));
	}
	return Z_Registration_Info_UScriptStruct_StatsAndEffects.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FStatsAndEffects>()
{
	return FStatsAndEffects::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatsAndEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[] = {
		{ "Category", "StatsAndEffects" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatAmount_MetaData[] = {
		{ "Category", "StatsAndEffects" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "StatsAndEffects" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatAmount;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatsAndEffects>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatsAndEffects_Statics::NewProp_StatTag = { "StatTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsAndEffects, StatTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTag_MetaData), NewProp_StatTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStatsAndEffects_Statics::NewProp_StatAmount = { "StatAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsAndEffects, StatAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatAmount_MetaData), NewProp_StatAmount_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStatsAndEffects_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStatsAndEffects, GameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffect_MetaData), NewProp_GameplayEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatsAndEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAndEffects_Statics::NewProp_StatTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAndEffects_Statics::NewProp_StatAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatsAndEffects_Statics::NewProp_GameplayEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAndEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatsAndEffects_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"StatsAndEffects",
	Z_Construct_UScriptStruct_FStatsAndEffects_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAndEffects_Statics::PropPointers),
	sizeof(FStatsAndEffects),
	alignof(FStatsAndEffects),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatsAndEffects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatsAndEffects_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatsAndEffects()
{
	if (!Z_Registration_Info_UScriptStruct_StatsAndEffects.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatsAndEffects.InnerSingleton, Z_Construct_UScriptStruct_FStatsAndEffects_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StatsAndEffects.InnerSingleton;
}
// End ScriptStruct FStatsAndEffects

// Begin ScriptStruct FDynamicItemData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicItemData;
class UScriptStruct* FDynamicItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicItemData, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("DynamicItemData"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicItemData.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FDynamicItemData>()
{
	return FDynamicItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDynamicItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsAndEffects_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ITemColor1_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ITemColor2_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerID_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorID_MetaData[] = {
		{ "Category", "DynamicItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For ownership tracking\n" },
#endif
		{ "ModuleRelativePath", "Inventory/ItemData/ItemDynamicData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For ownership tracking" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatsAndEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatsAndEffects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ITemColor1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ITemColor2;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CreatorID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_StatsAndEffects_Inner = { "StatsAndEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatsAndEffects, METADATA_PARAMS(0, nullptr) }; // 1159584597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_StatsAndEffects = { "StatsAndEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, StatsAndEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsAndEffects_MetaData), NewProp_StatsAndEffects_MetaData) }; // 1159584597
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, Condition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ITemColor1 = { "ITemColor1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, ITemColor1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ITemColor1_MetaData), NewProp_ITemColor1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ITemColor2 = { "ITemColor2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, ITemColor2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ITemColor2_MetaData), NewProp_ITemColor2_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_OwnerID = { "OwnerID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, OwnerID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerID_MetaData), NewProp_OwnerID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_CreatorID = { "CreatorID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, CreatorID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorID_MetaData), NewProp_CreatorID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_StatsAndEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_StatsAndEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ITemColor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ITemColor2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_OwnerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_CreatorID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"DynamicItemData",
	Z_Construct_UScriptStruct_FDynamicItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicItemData_Statics::PropPointers),
	sizeof(FDynamicItemData),
	alignof(FDynamicItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDynamicItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDynamicItemData()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicItemData.InnerSingleton, Z_Construct_UScriptStruct_FDynamicItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DynamicItemData.InnerSingleton;
}
// End ScriptStruct FDynamicItemData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_ItemDynamicData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatsAndEffects::StaticStruct, Z_Construct_UScriptStruct_FStatsAndEffects_Statics::NewStructOps, TEXT("StatsAndEffects"), &Z_Registration_Info_UScriptStruct_StatsAndEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatsAndEffects), 1159584597U) },
		{ FDynamicItemData::StaticStruct, Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewStructOps, TEXT("DynamicItemData"), &Z_Registration_Info_UScriptStruct_DynamicItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicItemData), 403731359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_ItemDynamicData_h_1397575233(TEXT("/Script/MmoSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_ItemDynamicData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_ItemDynamicData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
