// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/MSCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMSCameraComponent;
#ifdef MMOSYSTEM_MSCameraComponent_generated_h
#error "MSCameraComponent.generated.h already included, missing '#pragma once' in MSCameraComponent.h"
#endif
#define MMOSYSTEM_MSCameraComponent_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindCameraComponent);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSCameraComponent(); \
	friend struct Z_Construct_UClass_UMSCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UMSCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UMSCameraComponent)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMSCameraComponent(UMSCameraComponent&&); \
	UMSCameraComponent(const UMSCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSCameraComponent) \
	NO_API virtual ~UMSCameraComponent();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_27_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UMSCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
