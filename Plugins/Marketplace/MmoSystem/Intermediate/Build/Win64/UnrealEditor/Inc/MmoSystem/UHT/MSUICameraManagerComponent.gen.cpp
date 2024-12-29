// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Camera/MSUICameraManagerComponent.h"
#include "MmoSystem/Camera/MSPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSUICameraManagerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSUICameraManagerComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSUICameraManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UMSUICameraManagerComponent
void UMSUICameraManagerComponent::StaticRegisterNativesUMSUICameraManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSUICameraManagerComponent);
UClass* Z_Construct_UClass_UMSUICameraManagerComponent_NoRegister()
{
	return UMSUICameraManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UMSUICameraManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/MSUICameraManagerComponent.h" },
		{ "ModuleRelativePath", "Camera/MSUICameraManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/MSUICameraManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatingViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/MSUICameraManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
	static void NewProp_bUpdatingViewTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatingViewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSUICameraManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSUICameraManagerComponent_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSUICameraManagerComponent, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewTarget_MetaData), NewProp_ViewTarget_MetaData) };
void Z_Construct_UClass_UMSUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_SetBit(void* Obj)
{
	((UMSUICameraManagerComponent*)Obj)->bUpdatingViewTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget = { "bUpdatingViewTarget", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSUICameraManagerComponent), &Z_Construct_UClass_UMSUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatingViewTarget_MetaData), NewProp_bUpdatingViewTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSUICameraManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSUICameraManagerComponent_Statics::NewProp_ViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSUICameraManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSUICameraManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSUICameraManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSUICameraManagerComponent_Statics::ClassParams = {
	&UMSUICameraManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSUICameraManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSUICameraManagerComponent_Statics::PropPointers),
	0,
	0x00A000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSUICameraManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSUICameraManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSUICameraManagerComponent()
{
	if (!Z_Registration_Info_UClass_UMSUICameraManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSUICameraManagerComponent.OuterSingleton, Z_Construct_UClass_UMSUICameraManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSUICameraManagerComponent.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSUICameraManagerComponent>()
{
	return UMSUICameraManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSUICameraManagerComponent);
UMSUICameraManagerComponent::~UMSUICameraManagerComponent() {}
// End Class UMSUICameraManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSUICameraManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSUICameraManagerComponent, UMSUICameraManagerComponent::StaticClass, TEXT("UMSUICameraManagerComponent"), &Z_Registration_Info_UClass_UMSUICameraManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSUICameraManagerComponent), 1441548393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSUICameraManagerComponent_h_3890570162(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSUICameraManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSUICameraManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
