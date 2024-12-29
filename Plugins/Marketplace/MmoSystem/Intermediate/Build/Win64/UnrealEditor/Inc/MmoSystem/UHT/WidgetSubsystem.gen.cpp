// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/UI/WidgetSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
MMOSYSTEM_API UClass* Z_Construct_UClass_UWidgetSubsystem();
MMOSYSTEM_API UClass* Z_Construct_UClass_UWidgetSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UWidgetSubsystem
void UWidgetSubsystem::StaticRegisterNativesUWidgetSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetSubsystem);
UClass* Z_Construct_UClass_UWidgetSubsystem_NoRegister()
{
	return UWidgetSubsystem::StaticClass();
}
struct Z_Construct_UClass_UWidgetSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetSubsystem.h" },
		{ "ModuleRelativePath", "UI/WidgetSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetSubsystem_Statics::ClassParams = {
	&UWidgetSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetSubsystem()
{
	if (!Z_Registration_Info_UClass_UWidgetSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetSubsystem.OuterSingleton, Z_Construct_UClass_UWidgetSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetSubsystem.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UWidgetSubsystem>()
{
	return UWidgetSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetSubsystem);
UWidgetSubsystem::~UWidgetSubsystem() {}
// End Class UWidgetSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_WidgetSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetSubsystem, UWidgetSubsystem::StaticClass, TEXT("UWidgetSubsystem"), &Z_Registration_Info_UClass_UWidgetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetSubsystem), 1633339583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_WidgetSubsystem_h_1786381278(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_WidgetSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_UI_WidgetSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
