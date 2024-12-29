// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Game/MSGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSGameInstance();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UMSGameInstance
void UMSGameInstance::StaticRegisterNativesUMSGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSGameInstance);
UClass* Z_Construct_UClass_UMSGameInstance_NoRegister()
{
	return UMSGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMSGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Game/MSGameInstance.h" },
		{ "ModuleRelativePath", "Game/MSGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSGameInstance_Statics::ClassParams = {
	&UMSGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSGameInstance()
{
	if (!Z_Registration_Info_UClass_UMSGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSGameInstance.OuterSingleton, Z_Construct_UClass_UMSGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSGameInstance.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSGameInstance>()
{
	return UMSGameInstance::StaticClass();
}
UMSGameInstance::UMSGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSGameInstance);
UMSGameInstance::~UMSGameInstance() {}
// End Class UMSGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSGameInstance, UMSGameInstance::StaticClass, TEXT("UMSGameInstance"), &Z_Registration_Info_UClass_UMSGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSGameInstance), 915920540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_1710794622(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
