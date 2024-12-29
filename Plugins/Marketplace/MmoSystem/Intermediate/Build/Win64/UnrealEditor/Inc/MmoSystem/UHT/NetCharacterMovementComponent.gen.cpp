// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Player/NetCharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MMOSYSTEM_API UClass* Z_Construct_UClass_UNetCharacterMovementComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UNetCharacterMovementComponent_NoRegister();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNetCharacterGroundInfo();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin ScriptStruct FNetCharacterGroundInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetCharacterGroundInfo;
class UScriptStruct* FNetCharacterGroundInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetCharacterGroundInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetCharacterGroundInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetCharacterGroundInfo, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("NetCharacterGroundInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NetCharacterGroundInfo.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FNetCharacterGroundInfo>()
{
	return FNetCharacterGroundInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FNetCharacterGroundInfo\n *\n *\x09Information about the ground under the character.  It only gets updated as needed.\n */" },
#endif
		{ "ModuleRelativePath", "Player/NetCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FNetCharacterGroundInfo\n\n    Information about the ground under the character.  It only gets updated as needed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitResult_MetaData[] = {
		{ "Category", "NetCharacterGroundInfo" },
		{ "ModuleRelativePath", "Player/NetCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[] = {
		{ "Category", "NetCharacterGroundInfo" },
		{ "ModuleRelativePath", "Player/NetCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetCharacterGroundInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::NewProp_GroundHitResult = { "GroundHitResult", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetCharacterGroundInfo, GroundHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundHitResult_MetaData), NewProp_GroundHitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetCharacterGroundInfo, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDistance_MetaData), NewProp_GroundDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::NewProp_GroundHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::NewProp_GroundDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"NetCharacterGroundInfo",
	Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::PropPointers),
	sizeof(FNetCharacterGroundInfo),
	alignof(FNetCharacterGroundInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetCharacterGroundInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NetCharacterGroundInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetCharacterGroundInfo.InnerSingleton, Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetCharacterGroundInfo.InnerSingleton;
}
// End ScriptStruct FNetCharacterGroundInfo

// Begin Class UNetCharacterMovementComponent Function GetGroundInfo
struct Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics
{
	struct NetCharacterMovementComponent_eventGetGroundInfo_Parms
	{
		FNetCharacterGroundInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NetCharacter|CharacterMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the current ground info.  Calling this will update the ground info if it's out of date.\n" },
#endif
		{ "ModuleRelativePath", "Player/NetCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current ground info.  Calling this will update the ground info if it's out of date." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetCharacterMovementComponent_eventGetGroundInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FNetCharacterGroundInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2339460352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetCharacterMovementComponent, nullptr, "GetGroundInfo", nullptr, nullptr, Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::NetCharacterMovementComponent_eventGetGroundInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::NetCharacterMovementComponent_eventGetGroundInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNetCharacterMovementComponent::execGetGroundInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNetCharacterGroundInfo*)Z_Param__Result=P_THIS->GetGroundInfo();
	P_NATIVE_END;
}
// End Class UNetCharacterMovementComponent Function GetGroundInfo

// Begin Class UNetCharacterMovementComponent
void UNetCharacterMovementComponent::StaticRegisterNativesUNetCharacterMovementComponent()
{
	UClass* Class = UNetCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGroundInfo", &UNetCharacterMovementComponent::execGetGroundInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetCharacterMovementComponent);
UClass* Z_Construct_UClass_UNetCharacterMovementComponent_NoRegister()
{
	return UNetCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UNetCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/NetCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Player/NetCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Player/NetCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasReplicatedAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasReplicatedAcceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetCharacterMovementComponent_GetGroundInfo, "GetGroundInfo" }, // 2457801443
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNetCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit(void* Obj)
{
	((UNetCharacterMovementComponent*)Obj)->bHasReplicatedAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration = { "bHasReplicatedAcceleration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNetCharacterMovementComponent), &Z_Construct_UClass_UNetCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasReplicatedAcceleration_MetaData), NewProp_bHasReplicatedAcceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetCharacterMovementComponent_Statics::NewProp_bHasReplicatedAcceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNetCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNetCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetCharacterMovementComponent_Statics::ClassParams = {
	&UNetCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNetCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNetCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNetCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNetCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNetCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UNetCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UNetCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNetCharacterMovementComponent.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UNetCharacterMovementComponent>()
{
	return UNetCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNetCharacterMovementComponent);
UNetCharacterMovementComponent::~UNetCharacterMovementComponent() {}
// End Class UNetCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetCharacterGroundInfo::StaticStruct, Z_Construct_UScriptStruct_FNetCharacterGroundInfo_Statics::NewStructOps, TEXT("NetCharacterGroundInfo"), &Z_Registration_Info_UScriptStruct_NetCharacterGroundInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetCharacterGroundInfo), 2339460352U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNetCharacterMovementComponent, UNetCharacterMovementComponent::StaticClass, TEXT("UNetCharacterMovementComponent"), &Z_Registration_Info_UClass_UNetCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetCharacterMovementComponent), 9191978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_3076473257(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_NetCharacterMovementComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
