// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MmoSystemBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_MmoSystemBPLibrary_generated_h
#error "MmoSystemBPLibrary.generated.h already included, missing '#pragma once' in MmoSystemBPLibrary.h"
#endif
#define MMOSYSTEM_MmoSystemBPLibrary_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMmoSystemSampleFunction);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUMmoSystemBPLibrary(); \
	friend struct Z_Construct_UClass_UMmoSystemBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMmoSystemBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UMmoSystemBPLibrary)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMmoSystemBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMmoSystemBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMmoSystemBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMmoSystemBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMmoSystemBPLibrary(UMmoSystemBPLibrary&&); \
	UMmoSystemBPLibrary(const UMmoSystemBPLibrary&); \
public: \
	NO_API virtual ~UMmoSystemBPLibrary();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_25_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_28_RPC_WRAPPERS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_28_INCLASS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UMmoSystemBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_MmoSystemBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
