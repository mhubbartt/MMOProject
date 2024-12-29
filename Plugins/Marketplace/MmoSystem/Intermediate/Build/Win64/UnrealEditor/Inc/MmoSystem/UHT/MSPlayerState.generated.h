// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/MSPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_MSPlayerState_generated_h
#error "MSPlayerState.generated.h already included, missing '#pragma once' in MSPlayerState.h"
#endif
#define MMOSYSTEM_MSPlayerState_generated_h

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerState_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMSPlayerState(); \
	friend struct Z_Construct_UClass_AMSPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMSPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(AMSPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AMSPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedViewRotation=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedViewRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerState_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMSPlayerState(AMSPlayerState&&); \
	AMSPlayerState(const AMSPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMSPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMSPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMSPlayerState) \
	NO_API virtual ~AMSPlayerState();


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerState_h_19_PROLOG
#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerState_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerState_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerState_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class AMSPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
