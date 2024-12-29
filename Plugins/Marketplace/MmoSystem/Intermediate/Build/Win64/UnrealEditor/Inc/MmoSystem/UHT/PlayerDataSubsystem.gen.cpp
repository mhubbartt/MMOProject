// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/PlayerData/PlayerDataSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerDataSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
MMOSYSTEM_API UClass* Z_Construct_UClass_UPlayerDataSubsystem();
MMOSYSTEM_API UClass* Z_Construct_UClass_UPlayerDataSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UPlayerDataSubsystem
void UPlayerDataSubsystem::StaticRegisterNativesUPlayerDataSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerDataSubsystem);
UClass* Z_Construct_UClass_UPlayerDataSubsystem_NoRegister()
{
	return UPlayerDataSubsystem::StaticClass();
}
struct Z_Construct_UClass_UPlayerDataSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerData/PlayerDataSubsystem.h" },
		{ "ModuleRelativePath", "PlayerData/PlayerDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerDataLoaded_MetaData[] = {
		{ "ModuleRelativePath", "PlayerData/PlayerDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsPlayerDataLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerDataLoaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerDataSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_bIsPlayerDataLoaded_SetBit(void* Obj)
{
	((UPlayerDataSubsystem*)Obj)->bIsPlayerDataLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_bIsPlayerDataLoaded = { "bIsPlayerDataLoaded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerDataSubsystem), &Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_bIsPlayerDataLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPlayerDataLoaded_MetaData), NewProp_bIsPlayerDataLoaded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerDataSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerDataSubsystem_Statics::NewProp_bIsPlayerDataLoaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDataSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerDataSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDataSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerDataSubsystem_Statics::ClassParams = {
	&UPlayerDataSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerDataSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDataSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDataSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerDataSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerDataSubsystem()
{
	if (!Z_Registration_Info_UClass_UPlayerDataSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerDataSubsystem.OuterSingleton, Z_Construct_UClass_UPlayerDataSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerDataSubsystem.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UPlayerDataSubsystem>()
{
	return UPlayerDataSubsystem::StaticClass();
}
UPlayerDataSubsystem::UPlayerDataSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerDataSubsystem);
UPlayerDataSubsystem::~UPlayerDataSubsystem() {}
// End Class UPlayerDataSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerDataSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerDataSubsystem, UPlayerDataSubsystem::StaticClass, TEXT("UPlayerDataSubsystem"), &Z_Registration_Info_UClass_UPlayerDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerDataSubsystem), 705935499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerDataSubsystem_h_1326501947(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerDataSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerDataSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
