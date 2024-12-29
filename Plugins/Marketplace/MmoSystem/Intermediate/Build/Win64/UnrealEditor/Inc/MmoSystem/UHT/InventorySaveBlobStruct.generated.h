// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryManager/InventorySaveBlobStruct.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_InventorySaveBlobStruct_generated_h
#error "InventorySaveBlobStruct.generated.h already included, missing '#pragma once' in InventorySaveBlobStruct.h"
#endif
#define MMOSYSTEM_InventorySaveBlobStruct_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlobObjectWrapper(); \
	friend struct Z_Construct_UClass_UBlobObjectWrapper_Statics; \
public: \
	DECLARE_CLASS(UBlobObjectWrapper, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UBlobObjectWrapper)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlobObjectWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlobObjectWrapper(UBlobObjectWrapper&&); \
	UBlobObjectWrapper(const UBlobObjectWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlobObjectWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlobObjectWrapper); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlobObjectWrapper) \
	NO_API virtual ~UBlobObjectWrapper();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_13_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_16_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UBlobObjectWrapper>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryBlobObjectWrapper_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FInventoryBlobObjectWrapper>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySaveBlobStruct_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FInventorySaveBlobStruct>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySaveItem_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FInventorySaveItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryManager_InventorySaveBlobStruct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
