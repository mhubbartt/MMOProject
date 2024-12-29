// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Inventory/InventoryObjects.h"
#include "MmoSystem/Inventory/ItemData/ItemDynamicData.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryObjects() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBasePrimaryItem_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInvItemInstance();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInvItemInstance_NoRegister();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicItemData();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryList();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInvEntry();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

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
		{ "IncludePath", "Inventory/InventoryObjects.h" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackID_MetaData[] = {
		{ "Category", "InvItemInstance" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueItemID_MetaData[] = {
		{ "Category", "InvItemInstance" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "InvItemInstance" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicItemData_MetaData[] = {
		{ "Category", "InvItemInstance" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInvItemInstance_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0114000000000025, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvItemInstance, ItemData), Z_Construct_UClass_UBasePrimaryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInvItemInstance_Statics::NewProp_DynamicItemData = { "DynamicItemData", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInvItemInstance, DynamicItemData), Z_Construct_UScriptStruct_FDynamicItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicItemData_MetaData), NewProp_DynamicItemData_MetaData) }; // 403731359
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
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemObject_MetaData[] = {
		{ "Category", "InvEntry" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "InvEntry" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Category", "InvEntry" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "InvEntry" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
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
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/\n InventoryList List" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningInventory_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The owning inventory component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The owning inventory component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "InventoryList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The actual inventory\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryObjects.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInvEntry, METADATA_PARAMS(0, nullptr) }; // 2068066643
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryList_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryList, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) }; // 2068066643
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
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInvEntry::StaticStruct, Z_Construct_UScriptStruct_FInvEntry_Statics::NewStructOps, TEXT("InvEntry"), &Z_Registration_Info_UScriptStruct_InvEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInvEntry), 2068066643U) },
		{ FInventoryList::StaticStruct, Z_Construct_UScriptStruct_FInventoryList_Statics::NewStructOps, TEXT("InventoryList"), &Z_Registration_Info_UScriptStruct_InventoryList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryList), 969400203U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInvItemInstance, UInvItemInstance::StaticClass, TEXT("UInvItemInstance"), &Z_Registration_Info_UClass_UInvItemInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInvItemInstance), 2189020355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_2080075294(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
