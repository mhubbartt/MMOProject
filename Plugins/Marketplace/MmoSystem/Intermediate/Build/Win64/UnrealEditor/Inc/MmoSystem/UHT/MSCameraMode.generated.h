// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/MSCameraMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_MSCameraMode_generated_h
#error "MSCameraMode.generated.h already included, missing '#pragma once' in MSCameraMode.h"
#endif
#define MMOSYSTEM_MSCameraMode_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSCameraMode(); \
	friend struct Z_Construct_UClass_UMSCameraMode_Statics; \
public: \
	DECLARE_CLASS(UMSCameraMode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UMSCameraMode)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMSCameraMode(UMSCameraMode&&); \
	UMSCameraMode(const UMSCameraMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSCameraMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMSCameraMode) \
	NO_API virtual ~UMSCameraMode();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_65_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_68_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UMSCameraMode>();

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSCameraModeStack(); \
	friend struct Z_Construct_UClass_UMSCameraModeStack_Statics; \
public: \
	DECLARE_CLASS(UMSCameraModeStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UMSCameraModeStack)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_163_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMSCameraModeStack(UMSCameraModeStack&&); \
	UMSCameraModeStack(const UMSCameraModeStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSCameraModeStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSCameraModeStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMSCameraModeStack) \
	NO_API virtual ~UMSCameraModeStack();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_160_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_163_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UMSCameraModeStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h


#define FOREACH_ENUM_EMSCAMERAMODEBLENDFUNCTION(op) \
	op(EMSCameraModeBlendFunction::Linear) \
	op(EMSCameraModeBlendFunction::EaseIn) \
	op(EMSCameraModeBlendFunction::EaseOut) \
	op(EMSCameraModeBlendFunction::EaseInOut) \
	op(EMSCameraModeBlendFunction::COUNT) 

enum class EMSCameraModeBlendFunction : uint8;
template<> struct TIsUEnumClass<EMSCameraModeBlendFunction> { enum { Value = true }; };
template<> MMOSYSTEM_API UEnum* StaticEnum<EMSCameraModeBlendFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
