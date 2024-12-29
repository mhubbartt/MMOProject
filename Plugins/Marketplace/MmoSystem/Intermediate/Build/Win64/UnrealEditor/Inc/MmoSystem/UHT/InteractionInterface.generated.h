// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MMOSYSTEM_InteractionInterface_generated_h
#error "InteractionInterface.generated.h already included, missing '#pragma once' in InteractionInterface.h"
#endif
#define MMOSYSTEM_InteractionInterface_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsWithinDistance_Implementation() { return false; }; \
	virtual void HideInteractionOptions_Implementation() {}; \
	virtual void ShowInteractionOptions_Implementation() {}; \
	virtual void InteractionUnHighLightActor_Implementation() {}; \
	virtual void InteractionHighLightActor_Implementation() {}; \
	virtual void PerformInteraction_Implementation(AActor* CharacterReference) {}; \
	DECLARE_FUNCTION(execIsWithinDistance); \
	DECLARE_FUNCTION(execHideInteractionOptions); \
	DECLARE_FUNCTION(execShowInteractionOptions); \
	DECLARE_FUNCTION(execInteractionUnHighLightActor); \
	DECLARE_FUNCTION(execInteractionHighLightActor); \
	DECLARE_FUNCTION(execPerformInteraction);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_CALLBACK_WRAPPERS
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MMOSYSTEM_API UInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionInterface(UInteractionInterface&&); \
	UInteractionInterface(const UInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MMOSYSTEM_API, UInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionInterface) \
	MMOSYSTEM_API virtual ~UInteractionInterface();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionInterface(); \
	friend struct Z_Construct_UClass_UInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MmoSystem"), MMOSYSTEM_API) \
	DECLARE_SERIALIZER(UInteractionInterface)


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionInterface() {} \
public: \
	typedef UInteractionInterface UClassType; \
	typedef IInteractionInterface ThisClass; \
	static void Execute_HideInteractionOptions(UObject* O); \
	static void Execute_InteractionHighLightActor(UObject* O); \
	static void Execute_InteractionUnHighLightActor(UObject* O); \
	static bool Execute_IsWithinDistance(UObject* O); \
	static void Execute_PerformInteraction(UObject* O, AActor* CharacterReference); \
	static void Execute_ShowInteractionOptions(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_11_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_CALLBACK_WRAPPERS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
