// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/MSCameraAssistInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MMOSYSTEM_MSCameraAssistInterface_generated_h
#error "MSCameraAssistInterface.generated.h already included, missing '#pragma once' in MSCameraAssistInterface.h"
#endif
#define MMOSYSTEM_MSCameraAssistInterface_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSCameraAssistInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMSCameraAssistInterface(UMSCameraAssistInterface&&); \
	UMSCameraAssistInterface(const UMSCameraAssistInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSCameraAssistInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSCameraAssistInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSCameraAssistInterface) \
	NO_API virtual ~UMSCameraAssistInterface();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMSCameraAssistInterface(); \
	friend struct Z_Construct_UClass_UMSCameraAssistInterface_Statics; \
public: \
	DECLARE_CLASS(UMSCameraAssistInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UMSCameraAssistInterface)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMSCameraAssistInterface() {} \
public: \
	typedef UMSCameraAssistInterface UClassType; \
	typedef IMSCameraAssistInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_11_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UMSCameraAssistInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
