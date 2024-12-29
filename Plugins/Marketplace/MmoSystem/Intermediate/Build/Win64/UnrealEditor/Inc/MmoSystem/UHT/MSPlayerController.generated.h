// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/MSPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef MMOSYSTEM_MSPlayerController_generated_h
#error "MSPlayerController.generated.h already included, missing '#pragma once' in MSPlayerController.h"
#endif
#define MMOSYSTEM_MSPlayerController_generated_h

#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_13_DELEGATE \
MMOSYSTEM_API void FOnMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnMessageReceived, FGameplayTag MessageTag, const FString& Message);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SendMessage_Implementation(FGameplayTag MessageTag, const FString& Message); \
	virtual void BroadCastMessageToAllClients_Server_Implementation(FGameplayTag MessageTag, const FString& Message); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execBroadCastMessageToAllClients_Server);


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_CALLBACK_WRAPPERS
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMSPlayerController(); \
	friend struct Z_Construct_UClass_AMSPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMSPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(AMSPlayerController) \
	virtual UObject* _getUObject() const override { return const_cast<AMSPlayerController*>(this); }


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMSPlayerController(AMSPlayerController&&); \
	AMSPlayerController(const AMSPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMSPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMSPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMSPlayerController) \
	NO_API virtual ~AMSPlayerController();


#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_15_PROLOG
#define FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_CALLBACK_WRAPPERS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class AMSPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
