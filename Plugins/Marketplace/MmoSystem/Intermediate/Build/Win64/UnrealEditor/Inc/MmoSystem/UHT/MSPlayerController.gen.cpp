// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Game/MSPlayerController.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MMOSYSTEM_API UClass* Z_Construct_UClass_AMSPlayerController();
MMOSYSTEM_API UClass* Z_Construct_UClass_AMSPlayerController_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInventoryManager_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraAssistInterface_NoRegister();
MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Delegate FOnMessageReceived
struct Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics
{
	struct _Script_MmoSystem_eventOnMessageReceived_Parms
	{
		FGameplayTag MessageTag;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/MSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::NewProp_MessageTag = { "MessageTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MmoSystem_eventOnMessageReceived_Parms, MessageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MmoSystem_eventOnMessageReceived_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::NewProp_MessageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MmoSystem, nullptr, "OnMessageReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::_Script_MmoSystem_eventOnMessageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::_Script_MmoSystem_eventOnMessageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnMessageReceived, FGameplayTag MessageTag, const FString& Message)
{
	struct _Script_MmoSystem_eventOnMessageReceived_Parms
	{
		FGameplayTag MessageTag;
		FString Message;
	};
	_Script_MmoSystem_eventOnMessageReceived_Parms Parms;
	Parms.MessageTag=MessageTag;
	Parms.Message=Message;
	OnMessageReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMessageReceived

// Begin Class AMSPlayerController Function BroadCastMessageToAllClients_Server
struct MSPlayerController_eventBroadCastMessageToAllClients_Server_Parms
{
	FGameplayTag MessageTag;
	FString Message;
};
static const FName NAME_AMSPlayerController_BroadCastMessageToAllClients_Server = FName(TEXT("BroadCastMessageToAllClients_Server"));
void AMSPlayerController::BroadCastMessageToAllClients_Server(FGameplayTag MessageTag, const FString& Message)
{
	MSPlayerController_eventBroadCastMessageToAllClients_Server_Parms Parms;
	Parms.MessageTag=MessageTag;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AMSPlayerController_BroadCastMessageToAllClients_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Messaging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~Message Functions\n" },
#endif
		{ "ModuleRelativePath", "Game/MSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::NewProp_MessageTag = { "MessageTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSPlayerController_eventBroadCastMessageToAllClients_Server_Parms, MessageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSPlayerController_eventBroadCastMessageToAllClients_Server_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::NewProp_MessageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSPlayerController, nullptr, "BroadCastMessageToAllClients_Server", nullptr, nullptr, Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::PropPointers), sizeof(MSPlayerController_eventBroadCastMessageToAllClients_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MSPlayerController_eventBroadCastMessageToAllClients_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMSPlayerController::execBroadCastMessageToAllClients_Server)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_MessageTag);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadCastMessageToAllClients_Server_Implementation(Z_Param_MessageTag,Z_Param_Message);
	P_NATIVE_END;
}
// End Class AMSPlayerController Function BroadCastMessageToAllClients_Server

// Begin Class AMSPlayerController Function SendMessage
struct MSPlayerController_eventSendMessage_Parms
{
	FGameplayTag MessageTag;
	FString Message;
};
static const FName NAME_AMSPlayerController_SendMessage = FName(TEXT("SendMessage"));
void AMSPlayerController::SendMessage(FGameplayTag MessageTag, const FString& Message)
{
	MSPlayerController_eventSendMessage_Parms Parms;
	Parms.MessageTag=MessageTag;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AMSPlayerController_SendMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/MSPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageTag;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::NewProp_MessageTag = { "MessageTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSPlayerController_eventSendMessage_Parms, MessageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSPlayerController_eventSendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::NewProp_MessageTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSPlayerController, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::PropPointers), sizeof(MSPlayerController_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(MSPlayerController_eventSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMSPlayerController_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSPlayerController_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMSPlayerController::execSendMessage)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_MessageTag);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMessage_Implementation(Z_Param_MessageTag,Z_Param_Message);
	P_NATIVE_END;
}
// End Class AMSPlayerController Function SendMessage

// Begin Class AMSPlayerController
void AMSPlayerController::StaticRegisterNativesAMSPlayerController()
{
	UClass* Class = AMSPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadCastMessageToAllClients_Server", &AMSPlayerController::execBroadCastMessageToAllClients_Server },
		{ "SendMessage", &AMSPlayerController::execSendMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSPlayerController);
UClass* Z_Construct_UClass_AMSPlayerController_NoRegister()
{
	return AMSPlayerController::StaticClass();
}
struct Z_Construct_UClass_AMSPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Game/MSPlayerController.h" },
		{ "ModuleRelativePath", "Game/MSPlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "MSPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game/MSPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSPlayerController_BroadCastMessageToAllClients_Server, "BroadCastMessageToAllClients_Server" }, // 2492414114
		{ &Z_Construct_UFunction_AMSPlayerController_SendMessage, "SendMessage" }, // 3323615144
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSPlayerController_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x012408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSPlayerController, InventoryComponent), Z_Construct_UClass_UInventoryManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryComponent_MetaData), NewProp_InventoryComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSPlayerController_Statics::NewProp_InventoryComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMSPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMSPlayerController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMSCameraAssistInterface_NoRegister, (int32)VTABLE_OFFSET(AMSPlayerController, IMSCameraAssistInterface), false },  // 952047324
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSPlayerController_Statics::ClassParams = {
	&AMSPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMSPlayerController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMSPlayerController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMSPlayerController()
{
	if (!Z_Registration_Info_UClass_AMSPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSPlayerController.OuterSingleton, Z_Construct_UClass_AMSPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMSPlayerController.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<AMSPlayerController>()
{
	return AMSPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMSPlayerController);
AMSPlayerController::~AMSPlayerController() {}
// End Class AMSPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMSPlayerController, AMSPlayerController::StaticClass, TEXT("AMSPlayerController"), &Z_Registration_Info_UClass_AMSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSPlayerController), 3727350397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_3389822937(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
