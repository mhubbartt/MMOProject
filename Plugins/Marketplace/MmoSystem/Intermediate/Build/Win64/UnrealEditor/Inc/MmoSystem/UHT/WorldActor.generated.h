// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Actors/WorldActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayEffect;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MMOSYSTEM_WorldActor_generated_h
#error "WorldActor.generated.h already included, missing '#pragma once' in WorldActor.h"
#endif
#define MMOSYSTEM_WorldActor_generated_h

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execApplyEffectToTarget);


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldActor(); \
	friend struct Z_Construct_UClass_AWorldActor_Statics; \
public: \
	DECLARE_CLASS(AWorldActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(AWorldActor) \
	virtual UObject* _getUObject() const override { return const_cast<AWorldActor*>(this); }


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldActor(AWorldActor&&); \
	AWorldActor(const AWorldActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldActor) \
	NO_API virtual ~AWorldActor();


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_47_PROLOG
#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_50_INCLASS_NO_PURE_DECLS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class AWorldActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h


#define FOREACH_ENUM_EEFFECTAPPLICATIONPOLICY(op) \
	op(EEffectApplicationPolicy::ApplyOnOverlap) \
	op(EEffectApplicationPolicy::ApplyOnEndOverlap) \
	op(EEffectApplicationPolicy::DoNotApply) 

enum class EEffectApplicationPolicy;
template<> struct TIsUEnumClass<EEffectApplicationPolicy> { enum { Value = true }; };
template<> MMOSYSTEM_API UEnum* StaticEnum<EEffectApplicationPolicy>();

#define FOREACH_ENUM_EEFFECTREMOVALPOLICY(op) \
	op(EEffectRemovalPolicy::RemoveOnEndOverlap) \
	op(EEffectRemovalPolicy::DoNotRemove) 

enum class EEffectRemovalPolicy;
template<> struct TIsUEnumClass<EEffectRemovalPolicy> { enum { Value = true }; };
template<> MMOSYSTEM_API UEnum* StaticEnum<EEffectRemovalPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
