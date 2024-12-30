// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/ItemData/BasePrimaryItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_BasePrimaryItem_generated_h
#error "BasePrimaryItem.generated.h already included, missing '#pragma once' in BasePrimaryItem.h"
#endif
#define MMOSYSTEM_BasePrimaryItem_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemDependency_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FItemDependency>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasePrimaryItem(); \
	friend struct Z_Construct_UClass_UBasePrimaryItem_Statics; \
public: \
	DECLARE_CLASS(UBasePrimaryItem, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UBasePrimaryItem)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBasePrimaryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBasePrimaryItem(UBasePrimaryItem&&); \
	UBasePrimaryItem(const UBasePrimaryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBasePrimaryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBasePrimaryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBasePrimaryItem) \
	NO_API virtual ~UBasePrimaryItem();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_49_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_52_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UBasePrimaryItem>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseEquippablePrimaryItem(); \
	friend struct Z_Construct_UClass_UBaseEquippablePrimaryItem_Statics; \
public: \
	DECLARE_CLASS(UBaseEquippablePrimaryItem, UBasePrimaryItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UBaseEquippablePrimaryItem)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseEquippablePrimaryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseEquippablePrimaryItem(UBaseEquippablePrimaryItem&&); \
	UBaseEquippablePrimaryItem(const UBaseEquippablePrimaryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseEquippablePrimaryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseEquippablePrimaryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseEquippablePrimaryItem) \
	NO_API virtual ~UBaseEquippablePrimaryItem();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_103_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_106_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UBaseEquippablePrimaryItem>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseConsumablePrimaryItem(); \
	friend struct Z_Construct_UClass_UBaseConsumablePrimaryItem_Statics; \
public: \
	DECLARE_CLASS(UBaseConsumablePrimaryItem, UBasePrimaryItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UBaseConsumablePrimaryItem)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_136_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseConsumablePrimaryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseConsumablePrimaryItem(UBaseConsumablePrimaryItem&&); \
	UBaseConsumablePrimaryItem(const UBaseConsumablePrimaryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseConsumablePrimaryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseConsumablePrimaryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseConsumablePrimaryItem) \
	NO_API virtual ~UBaseConsumablePrimaryItem();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_133_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_136_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UBaseConsumablePrimaryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
