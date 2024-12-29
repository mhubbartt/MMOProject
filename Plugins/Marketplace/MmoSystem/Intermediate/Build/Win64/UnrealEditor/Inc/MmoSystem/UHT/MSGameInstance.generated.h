// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/MSGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_MSGameInstance_generated_h
#error "MSGameInstance.generated.h already included, missing '#pragma once' in MSGameInstance.h"
#endif
#define MMOSYSTEM_MSGameInstance_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSGameInstance(); \
	friend struct Z_Construct_UClass_UMSGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UMSGameInstance)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMSGameInstance(UMSGameInstance&&); \
	UMSGameInstance(const UMSGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSGameInstance) \
	NO_API virtual ~UMSGameInstance();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_13_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UMSGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
