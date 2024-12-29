// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerData/PlayerData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_PlayerData_generated_h
#error "PlayerData.generated.h already included, missing '#pragma once' in PlayerData.h"
#endif
#define MMOSYSTEM_PlayerData_generated_h

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharBaseInfo_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FCharBaseInfo>();

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerData(); \
	friend struct Z_Construct_UClass_UPlayerData_Statics; \
public: \
	DECLARE_CLASS(UPlayerData, UBlobObjectWrapper, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UPlayerData)


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerData(UPlayerData&&); \
	UPlayerData(const UPlayerData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerData) \
	NO_API virtual ~UPlayerData();


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_47_PROLOG
#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_50_INCLASS_NO_PURE_DECLS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UPlayerData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h


#define FOREACH_ENUM_EPLAYERGENDER(op) \
	op(Male) \
	op(Female) 

enum EPlayerGender : uint8;
template<> MMOSYSTEM_API UEnum* StaticEnum<EPlayerGender>();

#define FOREACH_ENUM_ECHARCLASS(op) \
	op(Unset) \
	op(Combat) \
	op(Healer) \
	op(Tradesman) 

enum ECharClass : uint8;
template<> MMOSYSTEM_API UEnum* StaticEnum<ECharClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
