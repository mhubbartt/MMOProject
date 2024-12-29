// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Inventory/InventoryManager/InventoryManager.h"
#include "MmoSystem/Inventory/ItemData/ItemDynamicData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInventoryComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInventoryManager();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInventoryManager_NoRegister();
MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature();
MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDatabaseConnectionDetails();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLQueryResultRow();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPreparedStatement();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatsAndEffects();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin ScriptStruct FDatabaseConnectionDetails
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatabaseConnectionDetails;
class UScriptStruct* FDatabaseConnectionDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatabaseConnectionDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatabaseConnectionDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatabaseConnectionDetails, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("DatabaseConnectionDetails"));
	}
	return Z_Registration_Info_UScriptStruct_DatabaseConnectionDetails.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FDatabaseConnectionDetails>()
{
	return FDatabaseConnectionDetails::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[] = {
		{ "Category", "A WPU|Inventory Manager|Database Connection" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "Category", "A WPU|Inventory Manager|Database Connection" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[] = {
		{ "Category", "A WPU|Inventory Manager|Database Connection" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DatabaseName_MetaData[] = {
		{ "Category", "A WPU|Inventory Manager|Database Connection" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "A WPU|Inventory Manager|Database Connection" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
	static const UECodeGen_Private::FStrPropertyParams NewProp_User;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DatabaseName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatabaseConnectionDetails>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatabaseConnectionDetails, Host), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Host_MetaData), NewProp_Host_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatabaseConnectionDetails, User), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatabaseConnectionDetails, Password), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Password_MetaData), NewProp_Password_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_DatabaseName = { "DatabaseName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatabaseConnectionDetails, DatabaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DatabaseName_MetaData), NewProp_DatabaseName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDatabaseConnectionDetails, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_Host,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_Password,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_DatabaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"DatabaseConnectionDetails",
	Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::PropPointers),
	sizeof(FDatabaseConnectionDetails),
	alignof(FDatabaseConnectionDetails),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDatabaseConnectionDetails()
{
	if (!Z_Registration_Info_UScriptStruct_DatabaseConnectionDetails.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatabaseConnectionDetails.InnerSingleton, Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DatabaseConnectionDetails.InnerSingleton;
}
// End ScriptStruct FDatabaseConnectionDetails

// Begin ScriptStruct FMySQLQueryResultRow
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MySQLQueryResultRow;
class UScriptStruct* FMySQLQueryResultRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLQueryResultRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MySQLQueryResultRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLQueryResultRow, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("MySQLQueryResultRow"));
	}
	return Z_Registration_Info_UScriptStruct_MySQLQueryResultRow.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FMySQLQueryResultRow>()
{
	return FMySQLQueryResultRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Columns_MetaData[] = {
		{ "Category", "A WPU|Inventory Manager|Database Query Results" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Columns_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Columns_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Columns;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLQueryResultRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::NewProp_Columns_ValueProp = { "Columns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::NewProp_Columns_Key_KeyProp = { "Columns_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMySQLQueryResultRow, Columns), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Columns_MetaData), NewProp_Columns_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::NewProp_Columns_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::NewProp_Columns_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::NewProp_Columns,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"MySQLQueryResultRow",
	Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::PropPointers),
	sizeof(FMySQLQueryResultRow),
	alignof(FMySQLQueryResultRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMySQLQueryResultRow()
{
	if (!Z_Registration_Info_UScriptStruct_MySQLQueryResultRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MySQLQueryResultRow.InnerSingleton, Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MySQLQueryResultRow.InnerSingleton;
}
// End ScriptStruct FMySQLQueryResultRow

// Begin ScriptStruct FPreparedStatement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreparedStatement;
class UScriptStruct* FPreparedStatement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreparedStatement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreparedStatement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreparedStatement, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("PreparedStatement"));
	}
	return Z_Registration_Info_UScriptStruct_PreparedStatement.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FPreparedStatement>()
{
	return FPreparedStatement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPreparedStatement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "A WPU|Inventory Manager|Prepared Statements" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[] = {
		{ "Category", "A WPU|Inventory Manager|Prepared Statements" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreparedStatement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreparedStatement_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPreparedStatement, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPreparedStatement_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPreparedStatement, Query), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Query_MetaData), NewProp_Query_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreparedStatement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreparedStatement_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreparedStatement_Statics::NewProp_Query,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreparedStatement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreparedStatement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"PreparedStatement",
	Z_Construct_UScriptStruct_FPreparedStatement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreparedStatement_Statics::PropPointers),
	sizeof(FPreparedStatement),
	alignof(FPreparedStatement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreparedStatement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPreparedStatement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPreparedStatement()
{
	if (!Z_Registration_Info_UScriptStruct_PreparedStatement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreparedStatement.InnerSingleton, Z_Construct_UScriptStruct_FPreparedStatement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PreparedStatement.InnerSingleton;
}
// End ScriptStruct FPreparedStatement

// Begin Delegate FMySQLQueryResultDelegate
struct Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics
{
	struct _Script_MmoSystem_eventMySQLQueryResultDelegate_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_MmoSystem_eventMySQLQueryResultDelegate_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MmoSystem_eventMySQLQueryResultDelegate_Parms), &Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MmoSystem, nullptr, "MySQLQueryResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::_Script_MmoSystem_eventMySQLQueryResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::_Script_MmoSystem_eventMySQLQueryResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMySQLQueryResultDelegate_DelegateWrapper(const FScriptDelegate& MySQLQueryResultDelegate, bool bSuccess)
{
	struct _Script_MmoSystem_eventMySQLQueryResultDelegate_Parms
	{
		bool bSuccess;
	};
	_Script_MmoSystem_eventMySQLQueryResultDelegate_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	MySQLQueryResultDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FMySQLQueryResultDelegate

// Begin Delegate FMySQLQueryResultDelegateWithResults
struct Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics
{
	struct _Script_MmoSystem_eventMySQLQueryResultDelegateWithResults_Parms
	{
		bool bSuccess;
		TArray<FMySQLQueryResultRow> Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_MmoSystem_eventMySQLQueryResultDelegateWithResults_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MmoSystem_eventMySQLQueryResultDelegateWithResults_Parms), &Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMySQLQueryResultRow, METADATA_PARAMS(0, nullptr) }; // 1027344984
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MmoSystem_eventMySQLQueryResultDelegateWithResults_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 1027344984
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MmoSystem, nullptr, "MySQLQueryResultDelegateWithResults__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::_Script_MmoSystem_eventMySQLQueryResultDelegateWithResults_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::_Script_MmoSystem_eventMySQLQueryResultDelegateWithResults_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMySQLQueryResultDelegateWithResults_DelegateWrapper(const FScriptDelegate& MySQLQueryResultDelegateWithResults, bool bSuccess, TArray<FMySQLQueryResultRow> const& Results)
{
	struct _Script_MmoSystem_eventMySQLQueryResultDelegateWithResults_Parms
	{
		bool bSuccess;
		TArray<FMySQLQueryResultRow> Results;
	};
	_Script_MmoSystem_eventMySQLQueryResultDelegateWithResults_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.Results=Results;
	MySQLQueryResultDelegateWithResults.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FMySQLQueryResultDelegateWithResults

// Begin Class UInventoryManager Function ConnectToDatabaseAsync
struct Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics
{
	struct InventoryManager_eventConnectToDatabaseAsync_Parms
	{
		FDatabaseConnectionDetails ConnectionDetails;
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU|Inventory Manager|Database Connection" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionDetails_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionDetails;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::NewProp_ConnectionDetails = { "ConnectionDetails", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventConnectToDatabaseAsync_Parms, ConnectionDetails), Z_Construct_UScriptStruct_FDatabaseConnectionDetails, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionDetails_MetaData), NewProp_ConnectionDetails_MetaData) }; // 1672081440
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventConnectToDatabaseAsync_Parms, Callback), Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1563440440
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::NewProp_ConnectionDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "ConnectToDatabaseAsync", nullptr, nullptr, Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::InventoryManager_eventConnectToDatabaseAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::InventoryManager_eventConnectToDatabaseAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execConnectToDatabaseAsync)
{
	P_GET_STRUCT_REF(FDatabaseConnectionDetails,Z_Param_Out_ConnectionDetails);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectToDatabaseAsync(Z_Param_Out_ConnectionDetails,FMySQLQueryResultDelegate(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class UInventoryManager Function ConnectToDatabaseAsync

// Begin Class UInventoryManager Function Disconnect
struct Z_Construct_UFunction_UInventoryManager_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU|Inventory Manager|Database Connection" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryManager_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UInventoryManager Function Disconnect

// Begin Class UInventoryManager Function LoadPreparedStatements
struct Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics
{
	struct InventoryManager_eventLoadPreparedStatements_Parms
	{
		FString FilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU|Inventory Manager|Prepared Statements" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventLoadPreparedStatements_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryManager_eventLoadPreparedStatements_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryManager_eventLoadPreparedStatements_Parms), &Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "LoadPreparedStatements", nullptr, nullptr, Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::InventoryManager_eventLoadPreparedStatements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::InventoryManager_eventLoadPreparedStatements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execLoadPreparedStatements)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadPreparedStatements(Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UInventoryManager Function LoadPreparedStatements

// Begin Class UInventoryManager Function OnDatabaseConnectionCompleteSave
struct Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics
{
	struct InventoryManager_eventOnDatabaseConnectionCompleteSave_Parms
	{
		bool bConnectionSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bConnectionSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectionSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::NewProp_bConnectionSuccess_SetBit(void* Obj)
{
	((InventoryManager_eventOnDatabaseConnectionCompleteSave_Parms*)Obj)->bConnectionSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::NewProp_bConnectionSuccess = { "bConnectionSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryManager_eventOnDatabaseConnectionCompleteSave_Parms), &Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::NewProp_bConnectionSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::NewProp_bConnectionSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "OnDatabaseConnectionCompleteSave", nullptr, nullptr, Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::InventoryManager_eventOnDatabaseConnectionCompleteSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::InventoryManager_eventOnDatabaseConnectionCompleteSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execOnDatabaseConnectionCompleteSave)
{
	P_GET_UBOOL(Z_Param_bConnectionSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDatabaseConnectionCompleteSave(Z_Param_bConnectionSuccess);
	P_NATIVE_END;
}
// End Class UInventoryManager Function OnDatabaseConnectionCompleteSave

// Begin Class UInventoryManager Function OnInventoryLoaded
struct Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics
{
	struct InventoryManager_eventOnInventoryLoaded_Parms
	{
		bool bLoadSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bLoadSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::NewProp_bLoadSuccess_SetBit(void* Obj)
{
	((InventoryManager_eventOnInventoryLoaded_Parms*)Obj)->bLoadSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::NewProp_bLoadSuccess = { "bLoadSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryManager_eventOnInventoryLoaded_Parms), &Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::NewProp_bLoadSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::NewProp_bLoadSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "OnInventoryLoaded", nullptr, nullptr, Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::InventoryManager_eventOnInventoryLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::InventoryManager_eventOnInventoryLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execOnInventoryLoaded)
{
	P_GET_UBOOL(Z_Param_bLoadSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInventoryLoaded(Z_Param_bLoadSuccess);
	P_NATIVE_END;
}
// End Class UInventoryManager Function OnInventoryLoaded

// Begin Class UInventoryManager Function RunInventoryTests
struct Z_Construct_UFunction_UInventoryManager_RunInventoryTests_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU|Inventory Manager|Testing" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_RunInventoryTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "RunInventoryTests", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_RunInventoryTests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_RunInventoryTests_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryManager_RunInventoryTests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_RunInventoryTests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execRunInventoryTests)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunInventoryTests();
	P_NATIVE_END;
}
// End Class UInventoryManager Function RunInventoryTests

// Begin Class UInventoryManager Function RunSerialDeserializationTests
struct Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics
{
	struct InventoryManager_eventRunSerialDeserializationTests_Parms
	{
		FName ItemName;
		TArray<FStatsAndEffects> Effects;
		float Condition;
		FLinearColor Color1;
		FLinearColor Color2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU|Inventory Manager|Testing" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Condition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventRunSerialDeserializationTests_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatsAndEffects, METADATA_PARAMS(0, nullptr) }; // 1159584597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventRunSerialDeserializationTests_Parms, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1159584597
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventRunSerialDeserializationTests_Parms, Condition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventRunSerialDeserializationTests_Parms, Color1), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventRunSerialDeserializationTests_Parms, Color2), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Effects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Effects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Condition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Color1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::NewProp_Color2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "RunSerialDeserializationTests", nullptr, nullptr, Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::InventoryManager_eventRunSerialDeserializationTests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::InventoryManager_eventRunSerialDeserializationTests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execRunSerialDeserializationTests)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
	P_GET_TARRAY(FStatsAndEffects,Z_Param_Effects);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Condition);
	P_GET_STRUCT(FLinearColor,Z_Param_Color1);
	P_GET_STRUCT(FLinearColor,Z_Param_Color2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RunSerialDeserializationTests(Z_Param_ItemName,Z_Param_Effects,Z_Param_Condition,Z_Param_Color1,Z_Param_Color2);
	P_NATIVE_END;
}
// End Class UInventoryManager Function RunSerialDeserializationTests

// Begin Class UInventoryManager Function TestBlobSerialization
struct Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics
{
	struct InventoryManager_eventTestBlobSerialization_Parms
	{
		FName ItemName;
		TArray<FStatsAndEffects> InSNE;
		float InCondition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "A WPU|Inventory Manager|Testing" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSNE_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSNE;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventTestBlobSerialization_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::NewProp_InSNE_Inner = { "InSNE", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStatsAndEffects, METADATA_PARAMS(0, nullptr) }; // 1159584597
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::NewProp_InSNE = { "InSNE", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventTestBlobSerialization_Parms, InSNE), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1159584597
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::NewProp_InCondition = { "InCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryManager_eventTestBlobSerialization_Parms, InCondition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::NewProp_InSNE_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::NewProp_InSNE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::NewProp_InCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "TestBlobSerialization", nullptr, nullptr, Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::InventoryManager_eventTestBlobSerialization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::InventoryManager_eventTestBlobSerialization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManager_TestBlobSerialization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_TestBlobSerialization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execTestBlobSerialization)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ItemName);
	P_GET_TARRAY(FStatsAndEffects,Z_Param_InSNE);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InCondition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestBlobSerialization(Z_Param_ItemName,Z_Param_InSNE,Z_Param_InCondition);
	P_NATIVE_END;
}
// End Class UInventoryManager Function TestBlobSerialization

// Begin Class UInventoryManager Function TestDatabaseConnectionCallback
struct Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics
{
	struct InventoryManager_eventTestDatabaseConnectionCallback_Parms
	{
		bool bConnectionSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bConnectionSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectionSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::NewProp_bConnectionSuccess_SetBit(void* Obj)
{
	((InventoryManager_eventTestDatabaseConnectionCallback_Parms*)Obj)->bConnectionSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::NewProp_bConnectionSuccess = { "bConnectionSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryManager_eventTestDatabaseConnectionCallback_Parms), &Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::NewProp_bConnectionSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::NewProp_bConnectionSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "TestDatabaseConnectionCallback", nullptr, nullptr, Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::InventoryManager_eventTestDatabaseConnectionCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::InventoryManager_eventTestDatabaseConnectionCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryManager::execTestDatabaseConnectionCallback)
{
	P_GET_UBOOL(Z_Param_bConnectionSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestDatabaseConnectionCallback(Z_Param_bConnectionSuccess);
	P_NATIVE_END;
}
// End Class UInventoryManager Function TestDatabaseConnectionCallback

// Begin Class UInventoryManager
void UInventoryManager::StaticRegisterNativesUInventoryManager()
{
	UClass* Class = UInventoryManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectToDatabaseAsync", &UInventoryManager::execConnectToDatabaseAsync },
		{ "Disconnect", &UInventoryManager::execDisconnect },
		{ "LoadPreparedStatements", &UInventoryManager::execLoadPreparedStatements },
		{ "OnDatabaseConnectionCompleteSave", &UInventoryManager::execOnDatabaseConnectionCompleteSave },
		{ "OnInventoryLoaded", &UInventoryManager::execOnInventoryLoaded },
		{ "RunInventoryTests", &UInventoryManager::execRunInventoryTests },
		{ "RunSerialDeserializationTests", &UInventoryManager::execRunSerialDeserializationTests },
		{ "TestBlobSerialization", &UInventoryManager::execTestBlobSerialization },
		{ "TestDatabaseConnectionCallback", &UInventoryManager::execTestDatabaseConnectionCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryManager);
UClass* Z_Construct_UClass_UInventoryManager_NoRegister()
{
	return UInventoryManager::StaticClass();
}
struct Z_Construct_UClass_UInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/InventoryManager/InventoryManager.h" },
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// For testing\n" },
#endif
		{ "ModuleRelativePath", "Inventory/InventoryManager/InventoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For testing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryManager_ConnectToDatabaseAsync, "ConnectToDatabaseAsync" }, // 1541331798
		{ &Z_Construct_UFunction_UInventoryManager_Disconnect, "Disconnect" }, // 2624041242
		{ &Z_Construct_UFunction_UInventoryManager_LoadPreparedStatements, "LoadPreparedStatements" }, // 2467066286
		{ &Z_Construct_UFunction_UInventoryManager_OnDatabaseConnectionCompleteSave, "OnDatabaseConnectionCompleteSave" }, // 228376875
		{ &Z_Construct_UFunction_UInventoryManager_OnInventoryLoaded, "OnInventoryLoaded" }, // 2392614151
		{ &Z_Construct_UFunction_UInventoryManager_RunInventoryTests, "RunInventoryTests" }, // 1225950972
		{ &Z_Construct_UFunction_UInventoryManager_RunSerialDeserializationTests, "RunSerialDeserializationTests" }, // 9733181
		{ &Z_Construct_UFunction_UInventoryManager_TestBlobSerialization, "TestBlobSerialization" }, // 459977950
		{ &Z_Construct_UFunction_UInventoryManager_TestDatabaseConnectionCallback, "TestDatabaseConnectionCallback" }, // 4104920649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInventoryManager_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryManager, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryManager_Statics::NewProp_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInventoryComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryManager_Statics::ClassParams = {
	&UInventoryManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryManager()
{
	if (!Z_Registration_Info_UClass_UInventoryManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryManager.OuterSingleton, Z_Construct_UClass_UInventoryManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryManager.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UInventoryManager>()
{
	return UInventoryManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryManager);
UInventoryManager::~UInventoryManager() {}
// End Class UInventoryManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDatabaseConnectionDetails::StaticStruct, Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics::NewStructOps, TEXT("DatabaseConnectionDetails"), &Z_Registration_Info_UScriptStruct_DatabaseConnectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatabaseConnectionDetails), 1672081440U) },
		{ FMySQLQueryResultRow::StaticStruct, Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics::NewStructOps, TEXT("MySQLQueryResultRow"), &Z_Registration_Info_UScriptStruct_MySQLQueryResultRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMySQLQueryResultRow), 1027344984U) },
		{ FPreparedStatement::StaticStruct, Z_Construct_UScriptStruct_FPreparedStatement_Statics::NewStructOps, TEXT("PreparedStatement"), &Z_Registration_Info_UScriptStruct_PreparedStatement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreparedStatement), 331730547U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryManager, UInventoryManager::StaticClass, TEXT("UInventoryManager"), &Z_Registration_Info_UClass_UInventoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryManager), 2723431594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_1734129264(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
