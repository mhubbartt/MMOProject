// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilites/BaseAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_BaseAbility_generated_h
#error "BaseAbility.generated.h already included, missing '#pragma once' in BaseAbility.h"
#endif
#define MMOSYSTEM_BaseAbility_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseAbility(); \
	friend struct Z_Construct_UClass_ABaseAbility_Statics; \
public: \
	DECLARE_CLASS(ABaseAbility, AGameplayAbilityTargetActor_Trace, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(ABaseAbility)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseAbility(ABaseAbility&&); \
	ABaseAbility(const ABaseAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseAbility) \
	NO_API virtual ~ABaseAbility();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_13_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class ABaseAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
