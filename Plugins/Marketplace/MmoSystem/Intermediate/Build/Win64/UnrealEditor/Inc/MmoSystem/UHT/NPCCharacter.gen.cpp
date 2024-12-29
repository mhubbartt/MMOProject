// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Player/NPCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCCharacter() {}

// Begin Cross Module References
MMOSYSTEM_API UClass* Z_Construct_UClass_ABaseCharacter();
MMOSYSTEM_API UClass* Z_Construct_UClass_ANPCCharacter();
MMOSYSTEM_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class ANPCCharacter
void ANPCCharacter::StaticRegisterNativesANPCCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCCharacter);
UClass* Z_Construct_UClass_ANPCCharacter_NoRegister()
{
	return ANPCCharacter::StaticClass();
}
struct Z_Construct_UClass_ANPCCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/NPCCharacter.h" },
		{ "ModuleRelativePath", "Player/NPCCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANPCCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ANPCCharacter, IInteractionInterface), false },  // 911323719
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCCharacter_Statics::ClassParams = {
	&ANPCCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANPCCharacter()
{
	if (!Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton, Z_Construct_UClass_ANPCCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<ANPCCharacter>()
{
	return ANPCCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCCharacter);
ANPCCharacter::~ANPCCharacter() {}
// End Class ANPCCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NPCCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANPCCharacter, ANPCCharacter::StaticClass, TEXT("ANPCCharacter"), &Z_Registration_Info_UClass_ANPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCCharacter), 785039369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NPCCharacter_h_1330734418(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NPCCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
