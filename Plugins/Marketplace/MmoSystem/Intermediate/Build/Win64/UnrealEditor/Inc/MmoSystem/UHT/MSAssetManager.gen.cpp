// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/AssetMAnager/MSAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSAssetManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSAssetManager();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSAssetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UMSAssetManager
void UMSAssetManager::StaticRegisterNativesUMSAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSAssetManager);
UClass* Z_Construct_UClass_UMSAssetManager_NoRegister()
{
	return UMSAssetManager::StaticClass();
}
struct Z_Construct_UClass_UMSAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AssetMAnager/MSAssetManager.h" },
		{ "ModuleRelativePath", "AssetMAnager/MSAssetManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSAssetManager_Statics::ClassParams = {
	&UMSAssetManager::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSAssetManager()
{
	if (!Z_Registration_Info_UClass_UMSAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSAssetManager.OuterSingleton, Z_Construct_UClass_UMSAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSAssetManager.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSAssetManager>()
{
	return UMSAssetManager::StaticClass();
}
UMSAssetManager::UMSAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSAssetManager);
UMSAssetManager::~UMSAssetManager() {}
// End Class UMSAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AssetMAnager_MSAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSAssetManager, UMSAssetManager::StaticClass, TEXT("UMSAssetManager"), &Z_Registration_Info_UClass_UMSAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSAssetManager), 686798329U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AssetMAnager_MSAssetManager_h_3223794844(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AssetMAnager_MSAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AssetMAnager_MSAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
