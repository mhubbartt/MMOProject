// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryObjects.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_InventoryObjects_generated_h
#error "InventoryObjects.generated.h already included, missing '#pragma once' in InventoryObjects.h"
#endif
#define MMOSYSTEM_InventoryObjects_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInvItemInstance(); \
	friend struct Z_Construct_UClass_UInvItemInstance_Statics; \
public: \
	DECLARE_CLASS(UInvItemInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UInvItemInstance) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StackID=NETFIELD_REP_START, \
		UniqueItemID, \
		ItemData, \
		DynamicItemData, \
		NETFIELD_REP_END=DynamicItemData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UInvItemInstance) \
public:


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInvItemInstance(UInvItemInstance&&); \
	UInvItemInstance(const UInvItemInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvItemInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvItemInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvItemInstance) \
	NO_API virtual ~UInvItemInstance();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_20_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_23_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UInvItemInstance>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInvEntry_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FInvEntry>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryList_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FInventoryList, Inventory, MMOSYSTEM_API );


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FInventoryList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_InventoryObjects_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
