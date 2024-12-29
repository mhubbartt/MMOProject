// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Interaction/InteractionStrucs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionStrucs() {}

// Begin Cross Module References
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionOptions();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin ScriptStruct FInteractionOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractionOptions;
class UScriptStruct* FInteractionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionOptions, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("InteractionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_InteractionOptions.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FInteractionOptions>()
{
	return FInteractionOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInteractionOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interaction/InteractionStrucs.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"InteractionOptions",
	nullptr,
	0,
	sizeof(FInteractionOptions),
	alignof(FInteractionOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInteractionOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInteractionOptions()
{
	if (!Z_Registration_Info_UScriptStruct_InteractionOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractionOptions.InnerSingleton, Z_Construct_UScriptStruct_FInteractionOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InteractionOptions.InnerSingleton;
}
// End ScriptStruct FInteractionOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interaction_InteractionStrucs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInteractionOptions::StaticStruct, Z_Construct_UScriptStruct_FInteractionOptions_Statics::NewStructOps, TEXT("InteractionOptions"), &Z_Registration_Info_UScriptStruct_InteractionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractionOptions), 24073897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interaction_InteractionStrucs_h_4150912851(TEXT("/Script/MmoSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interaction_InteractionStrucs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interaction_InteractionStrucs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
