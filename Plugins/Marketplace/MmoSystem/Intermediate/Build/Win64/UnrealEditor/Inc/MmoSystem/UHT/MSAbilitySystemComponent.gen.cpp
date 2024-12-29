// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/AbilitySystem/MSAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSAbilitySystemComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UMSAbilitySystemComponent
void UMSAbilitySystemComponent::StaticRegisterNativesUMSAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSAbilitySystemComponent);
UClass* Z_Construct_UClass_UMSAbilitySystemComponent_NoRegister()
{
	return UMSAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UMSAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/MSAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/MSAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSAbilitySystemComponent_Statics::ClassParams = {
	&UMSAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UMSAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UMSAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSAbilitySystemComponent.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSAbilitySystemComponent>()
{
	return UMSAbilitySystemComponent::StaticClass();
}
UMSAbilitySystemComponent::UMSAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSAbilitySystemComponent);
UMSAbilitySystemComponent::~UMSAbilitySystemComponent() {}
// End Class UMSAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_MSAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSAbilitySystemComponent, UMSAbilitySystemComponent::StaticClass, TEXT("UMSAbilitySystemComponent"), &Z_Registration_Info_UClass_UMSAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSAbilitySystemComponent), 3617492864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_MSAbilitySystemComponent_h_1518608265(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_MSAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_MSAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
