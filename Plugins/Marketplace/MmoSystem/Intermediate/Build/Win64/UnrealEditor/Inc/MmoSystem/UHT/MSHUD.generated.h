// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/MSHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidgetSystemController;
struct FWidgetControllerParams;
#ifdef MMOSYSTEM_MSHUD_generated_h
#error "MSHUD.generated.h already included, missing '#pragma once' in MSHUD.h"
#endif
#define MMOSYSTEM_MSHUD_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWidgetSystemController);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_CALLBACK_WRAPPERS
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMSHUD(); \
	friend struct Z_Construct_UClass_AMSHUD_Statics; \
public: \
	DECLARE_CLASS(AMSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(AMSHUD)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMSHUD(AMSHUD&&); \
	AMSHUD(const AMSHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMSHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMSHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMSHUD) \
	NO_API virtual ~AMSHUD();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_20_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_CALLBACK_WRAPPERS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class AMSHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
