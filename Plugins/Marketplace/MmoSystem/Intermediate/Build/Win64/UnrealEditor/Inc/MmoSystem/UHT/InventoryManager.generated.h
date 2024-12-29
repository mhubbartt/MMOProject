// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryManager/InventoryManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDatabaseConnectionDetails;
struct FLinearColor;
struct FMySQLQueryResultRow;
struct FStatsAndEffects;
#ifdef MMOSYSTEM_InventoryManager_generated_h
#error "InventoryManager.generated.h already included, missing '#pragma once' in InventoryManager.h"
#endif
#define MMOSYSTEM_InventoryManager_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatabaseConnectionDetails_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FDatabaseConnectionDetails>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMySQLQueryResultRow_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FMySQLQueryResultRow>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreparedStatement_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FPreparedStatement>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_57_DELEGATE \
MMOSYSTEM_API void FMySQLQueryResultDelegate_DelegateWrapper(const FScriptDelegate& MySQLQueryResultDelegate, bool bSuccess);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_58_DELEGATE \
MMOSYSTEM_API void FMySQLQueryResultDelegateWithResults_DelegateWrapper(const FScriptDelegate& MySQLQueryResultDelegateWithResults, bool bSuccess, TArray<FMySQLQueryResultRow> const& Results);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRunSerialDeserializationTests); \
	DECLARE_FUNCTION(execRunInventoryTests); \
	DECLARE_FUNCTION(execTestDatabaseConnectionCallback); \
	DECLARE_FUNCTION(execTestBlobSerialization); \
	DECLARE_FUNCTION(execLoadPreparedStatements); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnectToDatabaseAsync); \
	DECLARE_FUNCTION(execOnInventoryLoaded); \
	DECLARE_FUNCTION(execOnDatabaseConnectionCompleteSave);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryManager(); \
	friend struct Z_Construct_UClass_UInventoryManager_Statics; \
public: \
	DECLARE_CLASS(UInventoryManager, UInventoryComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UInventoryManager)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryManager(UInventoryManager&&); \
	UInventoryManager(const UInventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryManager) \
	NO_API virtual ~UInventoryManager();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_60_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_63_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UInventoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
