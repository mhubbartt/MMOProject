// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Game/MSHUD.h"
#include "MmoSystem/UI/WidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
MMOSYSTEM_API UClass* Z_Construct_UClass_AMSHUD();
MMOSYSTEM_API UClass* Z_Construct_UClass_AMSHUD_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UWidgetSystemController_NoRegister();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class AMSHUD Function GetWidgetSystemController
struct Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics
{
	struct MSHUD_eventGetWidgetSystemController_Parms
	{
		FWidgetControllerParams WCParams;
		UWidgetSystemController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game/MSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WCParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WCParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::NewProp_WCParams = { "WCParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSHUD_eventGetWidgetSystemController_Parms, WCParams), Z_Construct_UScriptStruct_FWidgetControllerParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WCParams_MetaData), NewProp_WCParams_MetaData) }; // 1851073858
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSHUD_eventGetWidgetSystemController_Parms, ReturnValue), Z_Construct_UClass_UWidgetSystemController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::NewProp_WCParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSHUD, nullptr, "GetWidgetSystemController", nullptr, nullptr, Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::MSHUD_eventGetWidgetSystemController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::MSHUD_eventGetWidgetSystemController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMSHUD_GetWidgetSystemController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSHUD_GetWidgetSystemController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMSHUD::execGetWidgetSystemController)
{
	P_GET_STRUCT_REF(FWidgetControllerParams,Z_Param_Out_WCParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidgetSystemController**)Z_Param__Result=P_THIS->GetWidgetSystemController(Z_Param_Out_WCParams);
	P_NATIVE_END;
}
// End Class AMSHUD Function GetWidgetSystemController

// Begin Class AMSHUD Function WidgetSystemControllerSet
static const FName NAME_AMSHUD_WidgetSystemControllerSet = FName(TEXT("WidgetSystemControllerSet"));
void AMSHUD::WidgetSystemControllerSet()
{
	UFunction* Func = FindFunctionChecked(NAME_AMSHUD_WidgetSystemControllerSet);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AMSHUD_WidgetSystemControllerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/MSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSHUD_WidgetSystemControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMSHUD, nullptr, "WidgetSystemControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSHUD_WidgetSystemControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSHUD_WidgetSystemControllerSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMSHUD_WidgetSystemControllerSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSHUD_WidgetSystemControllerSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AMSHUD Function WidgetSystemControllerSet

// Begin Class AMSHUD
void AMSHUD::StaticRegisterNativesAMSHUD()
{
	UClass* Class = AMSHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWidgetSystemController", &AMSHUD::execGetWidgetSystemController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSHUD);
UClass* Z_Construct_UClass_AMSHUD_NoRegister()
{
	return AMSHUD::StaticClass();
}
struct Z_Construct_UClass_AMSHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Game/MSHUD.h" },
		{ "ModuleRelativePath", "Game/MSHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSystemController_MetaData[] = {
		{ "Category", "MSHUD" },
		{ "ModuleRelativePath", "Game/MSHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSystemControllerClass_MetaData[] = {
		{ "Category", "MSHUD" },
		{ "ModuleRelativePath", "Game/MSHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetSystemController;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetSystemControllerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSHUD_GetWidgetSystemController, "GetWidgetSystemController" }, // 1645671963
		{ &Z_Construct_UFunction_AMSHUD_WidgetSystemControllerSet, "WidgetSystemControllerSet" }, // 4081728243
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMSHUD_Statics::NewProp_WidgetSystemController = { "WidgetSystemController", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSHUD, WidgetSystemController), Z_Construct_UClass_UWidgetSystemController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetSystemController_MetaData), NewProp_WidgetSystemController_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMSHUD_Statics::NewProp_WidgetSystemControllerClass = { "WidgetSystemControllerClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSHUD, WidgetSystemControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidgetSystemController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetSystemControllerClass_MetaData), NewProp_WidgetSystemControllerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMSHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSHUD_Statics::NewProp_WidgetSystemController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMSHUD_Statics::NewProp_WidgetSystemControllerClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMSHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSHUD_Statics::ClassParams = {
	&AMSHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMSHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMSHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMSHUD()
{
	if (!Z_Registration_Info_UClass_AMSHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSHUD.OuterSingleton, Z_Construct_UClass_AMSHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMSHUD.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<AMSHUD>()
{
	return AMSHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMSHUD);
AMSHUD::~AMSHUD() {}
// End Class AMSHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMSHUD, AMSHUD::StaticClass, TEXT("AMSHUD"), &Z_Registration_Info_UClass_AMSHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSHUD), 1790871705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_3632270077(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
