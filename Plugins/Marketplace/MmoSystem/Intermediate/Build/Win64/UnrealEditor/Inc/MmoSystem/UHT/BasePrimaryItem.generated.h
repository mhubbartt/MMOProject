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

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemDependency_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FItemDependency>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBasePrimaryItem(); \
	friend struct Z_Construct_UClass_UBasePrimaryItem_Statics; \
public: \
	DECLARE_CLASS(UBasePrimaryItem, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UBasePrimaryItem)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_81_ENHANCED_CONSTRUCTORS \
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


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_78_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_81_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UBasePrimaryItem>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseWEquippablePrimaryItem(); \
	friend struct Z_Construct_UClass_UBaseWEquippablePrimaryItem_Statics; \
public: \
	DECLARE_CLASS(UBaseWEquippablePrimaryItem, UBasePrimaryItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UBaseWEquippablePrimaryItem)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseWEquippablePrimaryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseWEquippablePrimaryItem(UBaseWEquippablePrimaryItem&&); \
	UBaseWEquippablePrimaryItem(const UBaseWEquippablePrimaryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseWEquippablePrimaryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseWEquippablePrimaryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseWEquippablePrimaryItem) \
	NO_API virtual ~UBaseWEquippablePrimaryItem();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_132_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_135_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h_135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UBaseWEquippablePrimaryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_ItemData_BasePrimaryItem_h


#define FOREACH_ENUM_EHANDEDNESS(op) \
	op(EHandedness::Right) \
	op(EHandedness::Left) \
	op(EHandedness::Ambidextrous) 

enum class EHandedness : uint8;
template<> struct TIsUEnumClass<EHandedness> { enum { Value = true }; };
template<> MMOSYSTEM_API UEnum* StaticEnum<EHandedness>();

#define FOREACH_ENUM_EITEMRARITY(op) \
	op(EItemRarity::Common) \
	op(EItemRarity::Uncommon) \
	op(EItemRarity::Rare) \
	op(EItemRarity::Epic) \
	op(EItemRarity::Legendary) 

enum class EItemRarity : uint8;
template<> struct TIsUEnumClass<EItemRarity> { enum { Value = true }; };
template<> MMOSYSTEM_API UEnum* StaticEnum<EItemRarity>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::None) \
	op(EItemType::Equippable) \
	op(EItemType::Consumable) \
	op(EItemType::QuestItem) \
	op(EItemType::Material) \
	op(EItemType::SkillItem) \
	op(EItemType::Key) \
	op(EItemType::Mount) \
	op(EItemType::Pet) \
	op(EItemType::Cosmetic) \
	op(EItemType::Miscellaneous) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> MMOSYSTEM_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
