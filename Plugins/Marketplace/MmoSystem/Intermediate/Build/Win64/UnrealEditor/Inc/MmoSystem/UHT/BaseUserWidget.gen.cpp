// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/UI/BaseUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUserWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBaseUserWidget();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UWidgetController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UBaseUserWidget Function SetWidgetController
struct Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics
{
	struct BaseUserWidget_eventSetWidgetController_Parms
	{
		UObject* InWidgetController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BaseUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseUserWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::NewProp_InWidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseUserWidget, nullptr, "SetWidgetController", nullptr, nullptr, Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::BaseUserWidget_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::BaseUserWidget_eventSetWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseUserWidget_SetWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseUserWidget_SetWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseUserWidget::execSetWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_InWidgetController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetController(Z_Param_InWidgetController);
	P_NATIVE_END;
}
// End Class UBaseUserWidget Function SetWidgetController

// Begin Class UBaseUserWidget Function WidgetControllerSet
static const FName NAME_UBaseUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
void UBaseUserWidget::WidgetControllerSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UBaseUserWidget_WidgetControllerSet);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UBaseUserWidget_WidgetControllerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BaseUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseUserWidget_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseUserWidget, nullptr, "WidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseUserWidget_WidgetControllerSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseUserWidget_WidgetControllerSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseUserWidget Function WidgetControllerSet

// Begin Class UBaseUserWidget
void UBaseUserWidget::StaticRegisterNativesUBaseUserWidget()
{
	UClass* Class = UBaseUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetWidgetController", &UBaseUserWidget::execSetWidgetController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUserWidget);
UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister()
{
	return UBaseUserWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/BaseUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/BaseUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[] = {
		{ "Category", "BaseUserWidget" },
		{ "ModuleRelativePath", "UI/BaseUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseUserWidget_SetWidgetController, "SetWidgetController" }, // 2946834973
		{ &Z_Construct_UFunction_UBaseUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 3312837028
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseUserWidget, WidgetController), Z_Construct_UClass_UWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetController_MetaData), NewProp_WidgetController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseUserWidget_Statics::NewProp_WidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUserWidget_Statics::ClassParams = {
	&UBaseUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseUserWidget()
{
	if (!Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton, Z_Construct_UClass_UBaseUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UBaseUserWidget>()
{
	return UBaseUserWidget::StaticClass();
}
UBaseUserWidget::UBaseUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUserWidget);
UBaseUserWidget::~UBaseUserWidget() {}
// End Class UBaseUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_BaseUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUserWidget, UBaseUserWidget::StaticClass, TEXT("UBaseUserWidget"), &Z_Registration_Info_UClass_UBaseUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUserWidget), 4016624523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_BaseUserWidget_h_2730834603(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_BaseUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_BaseUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
