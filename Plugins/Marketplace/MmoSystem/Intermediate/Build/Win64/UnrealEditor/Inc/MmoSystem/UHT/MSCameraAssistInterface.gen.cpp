// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Camera/MSCameraAssistInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSCameraAssistInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraAssistInterface();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraAssistInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Interface UMSCameraAssistInterface
void UMSCameraAssistInterface::StaticRegisterNativesUMSCameraAssistInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSCameraAssistInterface);
UClass* Z_Construct_UClass_UMSCameraAssistInterface_NoRegister()
{
	return UMSCameraAssistInterface::StaticClass();
}
struct Z_Construct_UClass_UMSCameraAssistInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Camera/MSCameraAssistInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMSCameraAssistInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSCameraAssistInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraAssistInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSCameraAssistInterface_Statics::ClassParams = {
	&UMSCameraAssistInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraAssistInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSCameraAssistInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSCameraAssistInterface()
{
	if (!Z_Registration_Info_UClass_UMSCameraAssistInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSCameraAssistInterface.OuterSingleton, Z_Construct_UClass_UMSCameraAssistInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSCameraAssistInterface.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSCameraAssistInterface>()
{
	return UMSCameraAssistInterface::StaticClass();
}
UMSCameraAssistInterface::UMSCameraAssistInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSCameraAssistInterface);
UMSCameraAssistInterface::~UMSCameraAssistInterface() {}
// End Interface UMSCameraAssistInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSCameraAssistInterface, UMSCameraAssistInterface::StaticClass, TEXT("UMSCameraAssistInterface"), &Z_Registration_Info_UClass_UMSCameraAssistInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSCameraAssistInterface), 952047324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_503911752(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraAssistInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
