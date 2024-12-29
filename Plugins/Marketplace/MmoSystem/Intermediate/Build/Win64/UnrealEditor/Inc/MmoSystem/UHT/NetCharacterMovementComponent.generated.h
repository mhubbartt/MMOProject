// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/NetCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNetCharacterGroundInfo;
#ifdef MMOSYSTEM_NetCharacterMovementComponent_generated_h
#error "NetCharacterMovementComponent.generated.h already included, missing '#pragma once' in NetCharacterMovementComponent.h"
#endif
#define MMOSYSTEM_NetCharacterMovementComponent_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FNetCharacterGroundInfo>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGroundInfo);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UNetCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNetCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UNetCharacterMovementComponent)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetCharacterMovementComponent(UNetCharacterMovementComponent&&); \
	UNetCharacterMovementComponent(const UNetCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetCharacterMovementComponent) \
	NO_API virtual ~UNetCharacterMovementComponent();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_38_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_41_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UNetCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
