// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Game/MSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
MMOSYSTEM_API UClass* Z_Construct_UClass_AMSGameMode();
MMOSYSTEM_API UClass* Z_Construct_UClass_AMSGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class AMSGameMode
void AMSGameMode::StaticRegisterNativesAMSGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMSGameMode);
UClass* Z_Construct_UClass_AMSGameMode_NoRegister()
{
	return AMSGameMode::StaticClass();
}
struct Z_Construct_UClass_AMSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/MSGameMode.h" },
		{ "ModuleRelativePath", "Game/MSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSGameMode_Statics::ClassParams = {
	&AMSGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMSGameMode()
{
	if (!Z_Registration_Info_UClass_AMSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSGameMode.OuterSingleton, Z_Construct_UClass_AMSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMSGameMode.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<AMSGameMode>()
{
	return AMSGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMSGameMode);
AMSGameMode::~AMSGameMode() {}
// End Class AMSGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMSGameMode, AMSGameMode::StaticClass, TEXT("AMSGameMode"), &Z_Registration_Info_UClass_AMSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSGameMode), 605297126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameMode_h_1505841434(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Game_MSGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
