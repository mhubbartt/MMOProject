// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Inventory/InvStucsNEnums.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvStucsNEnums() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInvItemInstance();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInvItemInstance_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UStaticItemData();
MMOSYSTEM_API UClass* Z_Construct_UClass_UStaticItemData_NoRegister();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_EItemType();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicItemData();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryList();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInvEntry();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatsAndEffects();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

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
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "Consumable" },
		{ "Container.DisplayName", "Container" },
		{ "Container.Name", "Container" },
		{ "DisplayName", "Item Type" },
		{ "Equipment.DisplayName", "Equipment" },
		{ "Equipment.Name", "Equipment" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
		{ "Other.DisplayName", "Other" },
		{ "Other.Name", "Other" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "Quest" },
		{ "Tool.DisplayName", "Tool" },
		{ "Tool.Name", "Tool" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "Unknown" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "Weapon" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Unknown", (int64)Unknown },
		{ "Consumable", (int64)Consumable },
		{ "Equipment", (int64)Equipment },
		{ "Container", (int64)Container },
		{ "Weapon", (int64)Weapon },
		{ "Tool", (int64)Tool },
		{ "Other", (int64)Other },
		{ "Quest", (int64)Quest },
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
	(uint8)UEnum::ECppForm::Regular,
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
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTag_MetaData[] = {
		{ "Category", "StatsAndEffects" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatAmount_MetaData[] = {
		{ "Category", "StatsAndEffects" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[] = {
		{ "Category", "StatsAndEffects" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
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
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsAndEffects_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ITemColor1_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ITemColor2_MetaData[] = {
		{ "Category", "DynamicItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatsAndEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StatsAndEffects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ITemColor1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ITemColor2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_StatsAndEffects_Inner = { "StatsAndEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatsAndEffects, METADATA_PARAMS(0, nullptr) }; // 1427308182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_StatsAndEffects = { "StatsAndEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, StatsAndEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsAndEffects_MetaData), NewProp_StatsAndEffects_MetaData) }; // 1427308182
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, Condition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ITemColor1 = { "ITemColor1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, ITemColor1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ITemColor1_MetaData), NewProp_ITemColor1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ITemColor2 = { "ITemColor2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicItemData, ITemColor2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ITemColor2_MetaData), NewProp_ITemColor2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_StatsAndEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_StatsAndEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ITemColor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewProp_ITemColor2,
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

// Begin Class UStaticItemData
void UStaticItemData::StaticRegisterNativesUStaticItemData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticItemData);
UClass* Z_Construct_UClass_UStaticItemData_NoRegister()
{
	return UStaticItemData::StaticClass();
}
struct Z_Construct_UClass_UStaticItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inventory/InvStucsNEnums.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "StaticItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[] = {
		{ "Category", "StaticItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlotTag_MetaData[] = {
		{ "Category", "StaticItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanEquip_MetaData[] = {
		{ "Category", "StaticItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQuestItem_MetaData[] = {
		{ "Category", "StaticItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumable_MetaData[] = {
		{ "Category", "StaticItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStackable_MetaData[] = {
		{ "Category", "StaticItemData" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentSlotTag;
	static void NewProp_bCanEquip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEquip;
	static void NewProp_bQuestItem_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuestItem;
	static void NewProp_bConsumable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumable;
	static void NewProp_bStackable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStackable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStaticItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticItemData, ItemType), Z_Construct_UEnum_MmoSystem_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 446154847
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStaticItemData_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticItemData, StackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackSize_MetaData), NewProp_StackSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticItemData_Statics::NewProp_EquipmentSlotTag = { "EquipmentSlotTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStaticItemData, EquipmentSlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentSlotTag_MetaData), NewProp_EquipmentSlotTag_MetaData) }; // 1298103297
void Z_Construct_UClass_UStaticItemData_Statics::NewProp_bCanEquip_SetBit(void* Obj)
{
	((UStaticItemData*)Obj)->bCanEquip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticItemData_Statics::NewProp_bCanEquip = { "bCanEquip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStaticItemData), &Z_Construct_UClass_UStaticItemData_Statics::NewProp_bCanEquip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanEquip_MetaData), NewProp_bCanEquip_MetaData) };
void Z_Construct_UClass_UStaticItemData_Statics::NewProp_bQuestItem_SetBit(void* Obj)
{
	((UStaticItemData*)Obj)->bQuestItem = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticItemData_Statics::NewProp_bQuestItem = { "bQuestItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStaticItemData), &Z_Construct_UClass_UStaticItemData_Statics::NewProp_bQuestItem_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQuestItem_MetaData), NewProp_bQuestItem_MetaData) };
void Z_Construct_UClass_UStaticItemData_Statics::NewProp_bConsumable_SetBit(void* Obj)
{
	((UStaticItemData*)Obj)->bConsumable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticItemData_Statics::NewProp_bConsumable = { "bConsumable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStaticItemData), &Z_Construct_UClass_UStaticItemData_Statics::NewProp_bConsumable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumable_MetaData), NewProp_bConsumable_MetaData) };
void Z_Construct_UClass_UStaticItemData_Statics::NewProp_bStackable_SetBit(void* Obj)
{
	((UStaticItemData*)Obj)->bStackable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStaticItemData_Statics::NewProp_bStackable = { "bStackable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStaticItemData), &Z_Construct_UClass_UStaticItemData_Statics::NewProp_bStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStackable_MetaData), NewProp_bStackable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticItemData_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticItemData_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticItemData_Statics::NewProp_EquipmentSlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticItemData_Statics::NewProp_bCanEquip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticItemData_Statics::NewProp_bQuestItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticItemData_Statics::NewProp_bConsumable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticItemData_Statics::NewProp_bStackable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticItemData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStaticItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticItemData_Statics::ClassParams = {
	&UStaticItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStaticItemData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStaticItemData_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStaticItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_UStaticItemData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStaticItemData()
{
	if (!Z_Registration_Info_UClass_UStaticItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticItemData.OuterSingleton, Z_Construct_UClass_UStaticItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticItemData.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UStaticItemData>()
{
	return UStaticItemData::StaticClass();
}
UStaticItemData::UStaticItemData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticItemData);
UStaticItemData::~UStaticItemData() {}
// End Class UStaticItemData

// Begin Class UInvItemInstance
void UInvItemInstance::StaticRegisterNativesUInvItemInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInvItemInstance);
UClass* Z_Construct_UClass_UInvItemInstance_NoRegister()
{
	return UInvItemInstance::StaticClass();
}
struct Z_Construct_UClass_UInvItemInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InvStucsNEnums.h" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackID_MetaData[] = {
		{ "Category", "InvItemInstance" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueItemID_MetaData[] = {
		{ "Category", "InvItemInstance" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "InvItemInstance" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicItemData_MetaData[] = {
		{ "Category", "InvItemInstance" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StackID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueItemID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInvItemInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInvItemInstance_Statics::NewProp_StackID = { "StackID", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvItemInstance, StackID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackID_MetaData), NewProp_StackID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInvItemInstance_Statics::NewProp_UniqueItemID = { "UniqueItemID", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvItemInstance, UniqueItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueItemID_MetaData), NewProp_UniqueItemID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInvItemInstance_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0114000000000025, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvItemInstance, ItemData), Z_Construct_UClass_UStaticItemData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInvItemInstance_Statics::NewProp_DynamicItemData = { "DynamicItemData", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvItemInstance, DynamicItemData), Z_Construct_UScriptStruct_FDynamicItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicItemData_MetaData), NewProp_DynamicItemData_MetaData) }; // 4104860089
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInvItemInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvItemInstance_Statics::NewProp_StackID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvItemInstance_Statics::NewProp_UniqueItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvItemInstance_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvItemInstance_Statics::NewProp_DynamicItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInvItemInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInvItemInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInvItemInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInvItemInstance_Statics::ClassParams = {
	&UInvItemInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInvItemInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInvItemInstance_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInvItemInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UInvItemInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInvItemInstance()
{
	if (!Z_Registration_Info_UClass_UInvItemInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInvItemInstance.OuterSingleton, Z_Construct_UClass_UInvItemInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInvItemInstance.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UInvItemInstance>()
{
	return UInvItemInstance::StaticClass();
}
void UInvItemInstance::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_StackID(TEXT("StackID"));
	static const FName Name_UniqueItemID(TEXT("UniqueItemID"));
	static const FName Name_ItemData(TEXT("ItemData"));
	static const FName Name_DynamicItemData(TEXT("DynamicItemData"));
	const bool bIsValid = true
		&& Name_StackID == ClassReps[(int32)ENetFields_Private::StackID].Property->GetFName()
		&& Name_UniqueItemID == ClassReps[(int32)ENetFields_Private::UniqueItemID].Property->GetFName()
		&& Name_ItemData == ClassReps[(int32)ENetFields_Private::ItemData].Property->GetFName()
		&& Name_DynamicItemData == ClassReps[(int32)ENetFields_Private::DynamicItemData].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInvItemInstance"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInvItemInstance);
UInvItemInstance::~UInvItemInstance() {}
// End Class UInvItemInstance

// Begin ScriptStruct FInvEntry
static_assert(std::is_polymorphic<FInvEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FInvEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InvEntry;
class UScriptStruct* FInvEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InvEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InvEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInvEntry, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("InvEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InvEntry.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FInvEntry>()
{
	return FInvEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInvEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemObject_MetaData[] = {
		{ "Category", "InvEntry" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "InvEntry" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Category", "InvEntry" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "InvEntry" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInvEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInvEntry_Statics::NewProp_ItemObject = { "ItemObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInvEntry, ItemObject), Z_Construct_UClass_UInvItemInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemObject_MetaData), NewProp_ItemObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvEntry_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInvEntry, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInvEntry_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInvEntry, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInvEntry_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInvEntry, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInvEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvEntry_Statics::NewProp_ItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvEntry_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvEntry_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInvEntry_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInvEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"InvEntry",
	Z_Construct_UScriptStruct_FInvEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvEntry_Statics::PropPointers),
	sizeof(FInvEntry),
	alignof(FInvEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInvEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInvEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInvEntry()
{
	if (!Z_Registration_Info_UScriptStruct_InvEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InvEntry.InnerSingleton, Z_Construct_UScriptStruct_FInvEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InvEntry.InnerSingleton;
}
// End ScriptStruct FInvEntry

// Begin ScriptStruct FInventoryList
static_assert(std::is_polymorphic<FInventoryList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FInventoryList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryList;
class UScriptStruct* FInventoryList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryList, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("InventoryList"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryList.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FInventoryList>()
{
	return FInventoryList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FInventoryList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FInventoryList);
#endif
struct Z_Construct_UScriptStruct_FInventoryList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n// InventoryList List\n" },
#endif
		{ "DisplayName", "InventoryList" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n InventoryList List" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningInventory_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The owning inventory component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The owning inventory component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "InventoryList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The actual inventory\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InvStucsNEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The actual inventory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningInventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_OwningInventory = { "OwningInventory", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryList, OwningInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningInventory_MetaData), NewProp_OwningInventory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInvEntry, METADATA_PARAMS(0, nullptr) }; // 563796399
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryList, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) }; // 563796399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_OwningInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"InventoryList",
	Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::PropPointers),
	sizeof(FInventoryList),
	alignof(FInventoryList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryList()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton, Z_Construct_UScriptStruct_FInventoryList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryList.InnerSingleton;
}
// End ScriptStruct FInventoryList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InvStucsNEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 446154847U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatsAndEffects::StaticStruct, Z_Construct_UScriptStruct_FStatsAndEffects_Statics::NewStructOps, TEXT("StatsAndEffects"), &Z_Registration_Info_UScriptStruct_StatsAndEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatsAndEffects), 1427308182U) },
		{ FDynamicItemData::StaticStruct, Z_Construct_UScriptStruct_FDynamicItemData_Statics::NewStructOps, TEXT("DynamicItemData"), &Z_Registration_Info_UScriptStruct_DynamicItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicItemData), 4104860089U) },
		{ FInvEntry::StaticStruct, Z_Construct_UScriptStruct_FInvEntry_Statics::NewStructOps, TEXT("InvEntry"), &Z_Registration_Info_UScriptStruct_InvEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInvEntry), 563796399U) },
		{ FInventoryList::StaticStruct, Z_Construct_UScriptStruct_FInventoryList_Statics::NewStructOps, TEXT("InventoryList"), &Z_Registration_Info_UScriptStruct_InventoryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryList), 529420543U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaticItemData, UStaticItemData::StaticClass, TEXT("UStaticItemData"), &Z_Registration_Info_UClass_UStaticItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticItemData), 467814070U) },
		{ Z_Construct_UClass_UInvItemInstance, UInvItemInstance::StaticClass, TEXT("UInvItemInstance"), &Z_Registration_Info_UClass_UInvItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInvItemInstance), 2339535983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InvStucsNEnums_h_2859732906(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InvStucsNEnums_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InvStucsNEnums_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InvStucsNEnums_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InvStucsNEnums_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InvStucsNEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InvStucsNEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
