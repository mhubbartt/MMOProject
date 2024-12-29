// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/AbilitySystem/Abilites/BaseAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace();
MMOSYSTEM_API UClass* Z_Construct_UClass_ABaseAbility();
MMOSYSTEM_API UClass* Z_Construct_UClass_ABaseAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class ABaseAbility
void ABaseAbility::StaticRegisterNativesABaseAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseAbility);
UClass* Z_Construct_UClass_ABaseAbility_NoRegister()
{
	return ABaseAbility::StaticClass();
}
struct Z_Construct_UClass_ABaseAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Abilites/BaseAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/Abilites/BaseAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_Trace,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseAbility_Statics::ClassParams = {
	&ABaseAbility::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseAbility()
{
	if (!Z_Registration_Info_UClass_ABaseAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseAbility.OuterSingleton, Z_Construct_UClass_ABaseAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseAbility.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<ABaseAbility>()
{
	return ABaseAbility::StaticClass();
}
ABaseAbility::ABaseAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAbility);
ABaseAbility::~ABaseAbility() {}
// End Class ABaseAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseAbility, ABaseAbility::StaticClass, TEXT("ABaseAbility"), &Z_Registration_Info_UClass_ABaseAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseAbility), 4195783612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_3974649518(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Abilites_BaseAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
