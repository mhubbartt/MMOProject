// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMSPlayerController;
class AMSPlayerState;
struct FMSSharedRepMovement;
#ifdef MMOSYSTEM_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define MMOSYSTEM_PlayerCharacter_generated_h

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FMSReplicatedAcceleration>();

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FMSSharedRepMovement>();

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FastSharedReplication_Implementation(FMSSharedRepMovement const& SharedRepMovement); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAcceleration); \
	DECLARE_FUNCTION(execFastSharedReplication); \
	DECLARE_FUNCTION(execGetMMOPlayerController); \
	DECLARE_FUNCTION(execGetMMOPlayerState);


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_CALLBACK_WRAPPERS
#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedAcceleration=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedAcceleration	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCharacter(APlayerCharacter&&); \
	APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_76_PROLOG
#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_CALLBACK_WRAPPERS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_INCLASS_NO_PURE_DECLS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
