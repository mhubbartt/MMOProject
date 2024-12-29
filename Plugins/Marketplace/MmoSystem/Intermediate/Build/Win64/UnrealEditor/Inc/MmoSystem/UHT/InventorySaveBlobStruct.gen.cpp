// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Inventory/InventoryManager/InventorySaveBlobStruct.h"
#include "MmoSystem/Inventory/ItemData/ItemDynamicData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySaveBlobStruct() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBasePrimaryItem_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBlobObjectWrapper();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBlobObjectWrapper_NoRegister();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySaveBlobStruct();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySaveItem();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatsAndEffects();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UBlobObjectWrapper
void UBlobObjectWrapper::StaticRegisterNativesUBlobObjectWrapper()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlobObjectWrapper);
UClass* Z_Construct_UClass_UBlobObjectWrapper_NoRegister()
{
	return UBlobObjectWrapper::StaticClass();
}
struct Z_Construct_UClass_UBlobObjectWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlobObjectWrapper>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBlobObjectWrapper_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlobObjectWrapper_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlobObjectWrapper_Statics::ClassParams = {
	&UBlobObjectWrapper::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlobObjectWrapper_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlobObjectWrapper_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlobObjectWrapper()
{
	if (!Z_Registration_Info_UClass_UBlobObjectWrapper.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlobObjectWrapper.OuterSingleton, Z_Construct_UClass_UBlobObjectWrapper_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlobObjectWrapper.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UBlobObjectWrapper>()
{
	return UBlobObjectWrapper::StaticClass();
}
UBlobObjectWrapper::UBlobObjectWrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlobObjectWrapper);
UBlobObjectWrapper::~UBlobObjectWrapper() {}
// End Class UBlobObjectWrapper

// Begin ScriptStruct FInventoryBlobObjectWrapper
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryBlobObjectWrapper;
class UScriptStruct* FInventoryBlobObjectWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryBlobObjectWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryBlobObjectWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("InventoryBlobObjectWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryBlobObjectWrapper.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FInventoryBlobObjectWrapper>()
{
	return FInventoryBlobObjectWrapper::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "InventoryBlobObjectWrapper" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsAndEffects_MetaData[] = {
		{ "Category", "InventoryBlobObjectWrapper" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[] = {
		{ "Category", "InventoryBlobObjectWrapper" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ITemColor1_MetaData[] = {
		{ "Category", "InventoryBlobObjectWrapper" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ITemColor2_MetaData[] = {
		{ "Category", "InventoryBlobObjectWrapper" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
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
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryBlobObjectWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryBlobObjectWrapper, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_StatsAndEffects_Inner = { "StatsAndEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatsAndEffects, METADATA_PARAMS(0, nullptr) }; // 1159584597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_StatsAndEffects = { "StatsAndEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryBlobObjectWrapper, StatsAndEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsAndEffects_MetaData), NewProp_StatsAndEffects_MetaData) }; // 1159584597
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryBlobObjectWrapper, Condition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Condition_MetaData), NewProp_Condition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_ITemColor1 = { "ITemColor1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryBlobObjectWrapper, ITemColor1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ITemColor1_MetaData), NewProp_ITemColor1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_ITemColor2 = { "ITemColor2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryBlobObjectWrapper, ITemColor2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ITemColor2_MetaData), NewProp_ITemColor2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_StatsAndEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_StatsAndEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_ITemColor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewProp_ITemColor2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"InventoryBlobObjectWrapper",
	Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::PropPointers),
	sizeof(FInventoryBlobObjectWrapper),
	alignof(FInventoryBlobObjectWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryBlobObjectWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryBlobObjectWrapper.InnerSingleton, Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryBlobObjectWrapper.InnerSingleton;
}
// End ScriptStruct FInventoryBlobObjectWrapper

// Begin ScriptStruct FInventorySaveBlobStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventorySaveBlobStruct;
class UScriptStruct* FInventorySaveBlobStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySaveBlobStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventorySaveBlobStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySaveBlobStruct, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("InventorySaveBlobStruct"));
	}
	return Z_Registration_Info_UScriptStruct_InventorySaveBlobStruct.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FInventorySaveBlobStruct>()
{
	return FInventorySaveBlobStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlobVersion_MetaData[] = {
		{ "Category", "InventorySaveBlobStruct" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "InventorySaveBlobStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Has to have matching version with  FInventorySaveItem\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has to have matching version with  FInventorySaveItem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveObject_MetaData[] = {
		{ "Category", "InventorySaveBlobStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this is the table name\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this is the table name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlobVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySaveBlobStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::NewProp_BlobVersion = { "BlobVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveBlobStruct, BlobVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlobVersion_MetaData), NewProp_BlobVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveBlobStruct, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::NewProp_SaveObject = { "SaveObject", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveBlobStruct, SaveObject), Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveObject_MetaData), NewProp_SaveObject_MetaData) }; // 176223156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::NewProp_BlobVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::NewProp_SaveObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"InventorySaveBlobStruct",
	Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::PropPointers),
	sizeof(FInventorySaveBlobStruct),
	alignof(FInventorySaveBlobStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventorySaveBlobStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySaveBlobStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventorySaveBlobStruct.InnerSingleton, Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventorySaveBlobStruct.InnerSingleton;
}
// End ScriptStruct FInventorySaveBlobStruct

// Begin ScriptStruct FInventorySaveItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventorySaveItem;
class UScriptStruct* FInventorySaveItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySaveItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventorySaveItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySaveItem, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("InventorySaveItem"));
	}
	return Z_Registration_Info_UScriptStruct_InventorySaveItem.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FInventorySaveItem>()
{
	return FInventorySaveItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventorySaveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlobVersion_MetaData[] = {
		{ "Category", "InventorySaveItem" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "InventorySaveItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Has to have matching version with  FInventorySaveBlobStruct\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Has to have matching version with  FInventorySaveBlobStruct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueItemID_MetaData[] = {
		{ "Category", "InventorySaveItem" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "InventorySaveItem" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Category", "InventorySaveItem" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "InventorySaveItem" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[] = {
		{ "Category", "InventorySaveItem" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicData_MetaData[] = {
		{ "Category", "InventorySaveItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add the BlobStruct to handle item data\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventorySaveBlobStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add the BlobStruct to handle item data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlobVersion;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySaveItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_BlobVersion = { "BlobVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveItem, BlobVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlobVersion_MetaData), NewProp_BlobVersion_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveItem, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_UniqueItemID = { "UniqueItemID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveItem, UniqueItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueItemID_MetaData), NewProp_UniqueItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveItem, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveItem, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveItem, StaticData), Z_Construct_UClass_UBasePrimaryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticData_MetaData), NewProp_StaticData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_DynamicData = { "DynamicData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySaveItem, DynamicData), Z_Construct_UScriptStruct_FInventorySaveBlobStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicData_MetaData), NewProp_DynamicData_MetaData) }; // 136674486
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySaveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_BlobVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_UniqueItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_SlotTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_StaticData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewProp_DynamicData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySaveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySaveItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"InventorySaveItem",
	Z_Construct_UScriptStruct_FInventorySaveItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySaveItem_Statics::PropPointers),
	sizeof(FInventorySaveItem),
	alignof(FInventorySaveItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySaveItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventorySaveItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventorySaveItem()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySaveItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventorySaveItem.InnerSingleton, Z_Construct_UScriptStruct_FInventorySaveItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventorySaveItem.InnerSingleton;
}
// End ScriptStruct FInventorySaveItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryBlobObjectWrapper::StaticStruct, Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics::NewStructOps, TEXT("InventoryBlobObjectWrapper"), &Z_Registration_Info_UScriptStruct_InventoryBlobObjectWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryBlobObjectWrapper), 176223156U) },
		{ FInventorySaveBlobStruct::StaticStruct, Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics::NewStructOps, TEXT("InventorySaveBlobStruct"), &Z_Registration_Info_UScriptStruct_InventorySaveBlobStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySaveBlobStruct), 136674486U) },
		{ FInventorySaveItem::StaticStruct, Z_Construct_UScriptStruct_FInventorySaveItem_Statics::NewStructOps, TEXT("InventorySaveItem"), &Z_Registration_Info_UScriptStruct_InventorySaveItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySaveItem), 3278569290U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlobObjectWrapper, UBlobObjectWrapper::StaticClass, TEXT("UBlobObjectWrapper"), &Z_Registration_Info_UClass_UBlobObjectWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlobObjectWrapper), 1490058750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_2787574289(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
