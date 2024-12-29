// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Inventory/InventoryComponent.h"
#include "MmoSystem/Inventory/InventoryObjects.h"
#include "MmoSystem/Inventory/ItemData/ItemDynamicData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBasePrimaryItem_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInventoryComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature();
MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicItemData();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryList();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInvEntry();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Delegate FInventoryLoaded
struct Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics
{
	struct _Script_MmoSystem_eventInventoryLoaded_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_MmoSystem_eventInventoryLoaded_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MmoSystem_eventInventoryLoaded_Parms), &Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MmoSystem, nullptr, "InventoryLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::_Script_MmoSystem_eventInventoryLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::_Script_MmoSystem_eventInventoryLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryLoaded_DelegateWrapper(const FScriptDelegate& InventoryLoaded, bool bSuccess)
{
	struct _Script_MmoSystem_eventInventoryLoaded_Parms
	{
		bool bSuccess;
	};
	_Script_MmoSystem_eventInventoryLoaded_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	InventoryLoaded.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FInventoryLoaded

// Begin Delegate FInventorySaved
struct Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics
{
	struct _Script_MmoSystem_eventInventorySaved_Parms
	{
		bool bSuccess;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_MmoSystem_eventInventorySaved_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MmoSystem_eventInventorySaved_Parms), &Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MmoSystem_eventInventorySaved_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MmoSystem, nullptr, "InventorySaved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::_Script_MmoSystem_eventInventorySaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::_Script_MmoSystem_eventInventorySaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventorySaved_DelegateWrapper(const FScriptDelegate& InventorySaved, bool bSuccess, const FString& Message)
{
	struct _Script_MmoSystem_eventInventorySaved_Parms
	{
		bool bSuccess;
		FString Message;
	};
	_Script_MmoSystem_eventInventorySaved_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Message=Message;
	InventorySaved.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FInventorySaved

// Begin Class UInventoryComponent Function AddItemToInventory
struct InventoryComponent_eventAddItemToInventory_Parms
{
	FName ItemName;
	UBasePrimaryItem* StaticItemData;
	FDynamicItemData DynamicItemData;
	int32 Quantity;
};
static const FName NAME_UInventoryComponent_AddItemToInventory = FName(TEXT("AddItemToInventory"));
void UInventoryComponent::AddItemToInventory(FName ItemName, UBasePrimaryItem* StaticItemData, FDynamicItemData DynamicItemData, int32 Quantity)
{
	InventoryComponent_eventAddItemToInventory_Parms Parms;
	Parms.ItemName=ItemName;
	Parms.StaticItemData=StaticItemData;
	Parms.DynamicItemData=DynamicItemData;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_AddItemToInventory);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU Inventory Manager|Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*  Main Editor Functions */" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Main Editor Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicItemData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemToInventory_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::NewProp_StaticItemData = { "StaticItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemToInventory_Parms, StaticItemData), Z_Construct_UClass_UBasePrimaryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::NewProp_DynamicItemData = { "DynamicItemData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemToInventory_Parms, DynamicItemData), Z_Construct_UScriptStruct_FDynamicItemData, METADATA_PARAMS(0, nullptr) }; // 1272730908
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventAddItemToInventory_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::NewProp_StaticItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::NewProp_DynamicItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "AddItemToInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::PropPointers), sizeof(InventoryComponent_eventAddItemToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventAddItemToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_AddItemToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_AddItemToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execAddItemToInventory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
	P_GET_OBJECT(UBasePrimaryItem,Z_Param_StaticItemData);
	P_GET_STRUCT(FDynamicItemData,Z_Param_DynamicItemData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToInventory_Implementation(Z_Param_ItemName,Z_Param_StaticItemData,Z_Param_DynamicItemData,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function AddItemToInventory

// Begin Class UInventoryComponent Function GetInventory
struct Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics
{
	struct InventoryComponent_eventGetInventory_Parms
	{
		TArray<FInvEntry> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU Inventory Component|Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getters\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInvEntry, METADATA_PARAMS(0, nullptr) }; // 2068066643
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2068066643
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::InventoryComponent_eventGetInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::InventoryComponent_eventGetInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInvEntry>*)Z_Param__Result=P_THIS->GetInventory();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetInventory

// Begin Class UInventoryComponent Function GetInventoryList
struct Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics
{
	struct InventoryComponent_eventGetInventoryList_Parms
	{
		FInventoryList ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU Inventory Component|Functions" },
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetInventoryList_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryList, METADATA_PARAMS(0, nullptr) }; // 969400203
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetInventoryList", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::InventoryComponent_eventGetInventoryList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::InventoryComponent_eventGetInventoryList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventoryList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventoryList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetInventoryList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryList*)Z_Param__Result=P_THIS->GetInventoryList();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetInventoryList

// Begin Class UInventoryComponent Function GetInventorySize
struct Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics
{
	struct InventoryComponent_eventGetInventorySize_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU Inventory Component|Functions" },
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetInventorySize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetInventorySize", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::InventoryComponent_eventGetInventorySize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::InventoryComponent_eventGetInventorySize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetInventorySize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetInventorySize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetInventorySize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInventorySize();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetInventorySize

// Begin Class UInventoryComponent Function RemoveItemFromInventory
struct InventoryComponent_eventRemoveItemFromInventory_Parms
{
	FName UniqueItemID;
	int32 QuantityToRemove;
	bool bDestroyAll;
	bool bIsConsumed;
};
static const FName NAME_UInventoryComponent_RemoveItemFromInventory = FName(TEXT("RemoveItemFromInventory"));
void UInventoryComponent::RemoveItemFromInventory(FName UniqueItemID, int32 QuantityToRemove, bool bDestroyAll, bool bIsConsumed)
{
	InventoryComponent_eventRemoveItemFromInventory_Parms Parms;
	Parms.UniqueItemID=UniqueItemID;
	Parms.QuantityToRemove=QuantityToRemove;
	Parms.bDestroyAll=bDestroyAll ? true : false;
	Parms.bIsConsumed=bIsConsumed ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_RemoveItemFromInventory);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU Inventory Manager|Functions" },
		{ "CPP_Default_bDestroyAll", "false" },
		{ "CPP_Default_bIsConsumed", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuantityToRemove;
	static void NewProp_bDestroyAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyAll;
	static void NewProp_bIsConsumed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConsumed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_UniqueItemID = { "UniqueItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemFromInventory_Parms, UniqueItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_QuantityToRemove = { "QuantityToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRemoveItemFromInventory_Parms, QuantityToRemove), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_bDestroyAll_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveItemFromInventory_Parms*)Obj)->bDestroyAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_bDestroyAll = { "bDestroyAll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveItemFromInventory_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_bDestroyAll_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_bIsConsumed_SetBit(void* Obj)
{
	((InventoryComponent_eventRemoveItemFromInventory_Parms*)Obj)->bIsConsumed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_bIsConsumed = { "bIsConsumed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventRemoveItemFromInventory_Parms), &Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_bIsConsumed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_UniqueItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_QuantityToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_bDestroyAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::NewProp_bIsConsumed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "RemoveItemFromInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::PropPointers), sizeof(InventoryComponent_eventRemoveItemFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventRemoveItemFromInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRemoveItemFromInventory)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_UniqueItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_QuantityToRemove);
	P_GET_UBOOL(Z_Param_bDestroyAll);
	P_GET_UBOOL(Z_Param_bIsConsumed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItemFromInventory_Implementation(Z_Param_UniqueItemID,Z_Param_QuantityToRemove,Z_Param_bDestroyAll,Z_Param_bIsConsumed);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function RemoveItemFromInventory

// Begin Class UInventoryComponent
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToInventory", &UInventoryComponent::execAddItemToInventory },
		{ "GetInventory", &UInventoryComponent::execGetInventory },
		{ "GetInventoryList", &UInventoryComponent::execGetInventoryList },
		{ "GetInventorySize", &UInventoryComponent::execGetInventorySize },
		{ "RemoveItemFromInventory", &UInventoryComponent::execRemoveItemFromInventory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory/InventoryComponent.h" },
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[] = {
		{ "Category", "InventoryComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*  Debug Functions */" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Functions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInventoryLoaded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Async loading inventory\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Async loading inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingInventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryList_MetaData[] = {
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventorySize_MetaData[] = {
		{ "Category", "InventoryComponent" },
		{ "ModuleRelativePath", "Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
	static void NewProp_bIsInventoryLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInventoryLoaded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingInventoryComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InventoryList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InventorySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_AddItemToInventory, "AddItemToInventory" }, // 4135453189
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventory, "GetInventory" }, // 3740041645
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventoryList, "GetInventoryList" }, // 867467146
		{ &Z_Construct_UFunction_UInventoryComponent_GetInventorySize, "GetInventorySize" }, // 949154448
		{ &Z_Construct_UFunction_UInventoryComponent_RemoveItemFromInventory, "RemoveItemFromInventory" }, // 4042694173
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bShowDebug_SetBit(void* Obj)
{
	((UInventoryComponent*)Obj)->bShowDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryComponent), &Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebug_MetaData), NewProp_bShowDebug_MetaData) };
void Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bIsInventoryLoaded_SetBit(void* Obj)
{
	((UInventoryComponent*)Obj)->bIsInventoryLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bIsInventoryLoaded = { "bIsInventoryLoaded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryComponent), &Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bIsInventoryLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInventoryLoaded_MetaData), NewProp_bIsInventoryLoaded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PendingInventoryComponent = { "PendingInventoryComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, PendingInventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingInventoryComponent_MetaData), NewProp_PendingInventoryComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryList = { "InventoryList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventoryList), Z_Construct_UScriptStruct_FInventoryList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryList_MetaData), NewProp_InventoryList_MetaData) }; // 969400203
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySize = { "InventorySize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InventorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventorySize_MetaData), NewProp_InventorySize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bShowDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bIsInventoryLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PendingInventoryComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventoryList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InventorySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UInventoryComponent>()
{
	return UInventoryComponent::StaticClass();
}
void UInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_InventoryList(TEXT("InventoryList"));
	const bool bIsValid = true
		&& Name_InventoryList == ClassReps[(int32)ENetFields_Private::InventoryList].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// End Class UInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 1265781344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryComponent_h_2085494279(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
