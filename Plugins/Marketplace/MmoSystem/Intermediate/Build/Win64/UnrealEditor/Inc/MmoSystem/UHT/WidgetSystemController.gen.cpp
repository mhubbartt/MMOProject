// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/UI/WidgetSystemController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSystemController() {}

// Begin Cross Module References
MMOSYSTEM_API UClass* Z_Construct_UClass_UWidgetController();
MMOSYSTEM_API UClass* Z_Construct_UClass_UWidgetSystemController();
MMOSYSTEM_API UClass* Z_Construct_UClass_UWidgetSystemController_NoRegister();
MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Delegate FInventoryUpdatedWCDelegate
struct Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/WidgetSystemController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MmoSystem, nullptr, "InventoryUpdatedWCDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryUpdatedWCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InventoryUpdatedWCDelegate)
{
	InventoryUpdatedWCDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FInventoryUpdatedWCDelegate

// Begin Class UWidgetSystemController
void UWidgetSystemController::StaticRegisterNativesUWidgetSystemController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetSystemController);
UClass* Z_Construct_UClass_UWidgetSystemController_NoRegister()
{
	return UWidgetSystemController::StaticClass();
}
struct Z_Construct_UClass_UWidgetSystemController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetSystemController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/WidgetSystemController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[] = {
		{ "ModuleRelativePath", "UI/WidgetSystemController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSystemController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWidgetSystemController_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetSystemController, OnInventoryUpdated), Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // 2550464566
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetSystemController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetSystemController_Statics::NewProp_OnInventoryUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSystemController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetSystemController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSystemController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSystemController_Statics::ClassParams = {
	&UWidgetSystemController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWidgetSystemController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSystemController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSystemController_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetSystemController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetSystemController()
{
	if (!Z_Registration_Info_UClass_UWidgetSystemController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetSystemController.OuterSingleton, Z_Construct_UClass_UWidgetSystemController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetSystemController.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UWidgetSystemController>()
{
	return UWidgetSystemController::StaticClass();
}
UWidgetSystemController::UWidgetSystemController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSystemController);
UWidgetSystemController::~UWidgetSystemController() {}
// End Class UWidgetSystemController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_WidgetSystemController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetSystemController, UWidgetSystemController::StaticClass, TEXT("UWidgetSystemController"), &Z_Registration_Info_UClass_UWidgetSystemController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetSystemController), 3906442679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_WidgetSystemController_h_2546550399(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_WidgetSystemController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_WidgetSystemController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
