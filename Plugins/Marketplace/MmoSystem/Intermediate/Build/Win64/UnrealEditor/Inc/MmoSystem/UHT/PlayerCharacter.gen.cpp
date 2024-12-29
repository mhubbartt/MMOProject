// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Player/PlayerCharacter.h"
#include "Runtime/Engine/Classes/Engine/ReplicatedState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRepMovement();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_ABaseCharacter();
MMOSYSTEM_API UClass* Z_Construct_UClass_AMSPlayerController_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_AMSPlayerState_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_APlayerCharacter();
MMOSYSTEM_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraComponent_NoRegister();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMSReplicatedAcceleration();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMSSharedRepMovement();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin ScriptStruct FMSReplicatedAcceleration
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MSReplicatedAcceleration;
class UScriptStruct* FMSReplicatedAcceleration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MSReplicatedAcceleration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MSReplicatedAcceleration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSReplicatedAcceleration, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("MSReplicatedAcceleration"));
	}
	return Z_Registration_Info_UScriptStruct_MSReplicatedAcceleration.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FMSReplicatedAcceleration>()
{
	return FMSReplicatedAcceleration::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMSReplicatedAcceleration: Compressed representation of acceleration\n */" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMSReplicatedAcceleration: Compressed representation of acceleration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYRadians_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelXYMagnitude_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Direction of XY accel component, quantized to represent [0, 2*pi]\n" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of XY accel component, quantized to represent [0, 2*pi]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelZ_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Accel rate of XY component, quantized to represent [0, MaxAcceleration]\n" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Accel rate of XY component, quantized to represent [0, MaxAcceleration]" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYRadians;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccelXYMagnitude;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_AccelZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSReplicatedAcceleration>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::NewProp_AccelXYRadians = { "AccelXYRadians", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSReplicatedAcceleration, AccelXYRadians), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelXYRadians_MetaData), NewProp_AccelXYRadians_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude = { "AccelXYMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSReplicatedAcceleration, AccelXYMagnitude), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelXYMagnitude_MetaData), NewProp_AccelXYMagnitude_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::NewProp_AccelZ = { "AccelZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSReplicatedAcceleration, AccelZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelZ_MetaData), NewProp_AccelZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::NewProp_AccelXYRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::NewProp_AccelXYMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::NewProp_AccelZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"MSReplicatedAcceleration",
	Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::PropPointers),
	sizeof(FMSReplicatedAcceleration),
	alignof(FMSReplicatedAcceleration),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSReplicatedAcceleration()
{
	if (!Z_Registration_Info_UScriptStruct_MSReplicatedAcceleration.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MSReplicatedAcceleration.InnerSingleton, Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MSReplicatedAcceleration.InnerSingleton;
}
// End ScriptStruct FMSReplicatedAcceleration

// Begin ScriptStruct FMSSharedRepMovement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MSSharedRepMovement;
class UScriptStruct* FMSSharedRepMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MSSharedRepMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MSSharedRepMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSSharedRepMovement, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("MSSharedRepMovement"));
	}
	return Z_Registration_Info_UScriptStruct_MSSharedRepMovement.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FMSSharedRepMovement>()
{
	return FMSSharedRepMovement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The type we use to send FastShared movement updates. */" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type we use to send FastShared movement updates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepMovement_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepTimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepMovementMode_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProxyIsJumpForceApplied_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouched_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepTimeStamp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RepMovementMode;
	static void NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProxyIsJumpForceApplied;
	static void NewProp_bIsCrouched_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouched;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSSharedRepMovement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_RepMovement = { "RepMovement", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSSharedRepMovement, RepMovement), Z_Construct_UScriptStruct_FRepMovement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepMovement_MetaData), NewProp_RepMovement_MetaData) }; // 2904220107
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_RepTimeStamp = { "RepTimeStamp", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSSharedRepMovement, RepTimeStamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepTimeStamp_MetaData), NewProp_RepTimeStamp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_RepMovementMode = { "RepMovementMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSSharedRepMovement, RepMovementMode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepMovementMode_MetaData), NewProp_RepMovementMode_MetaData) };
void Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_SetBit(void* Obj)
{
	((FMSSharedRepMovement*)Obj)->bProxyIsJumpForceApplied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied = { "bProxyIsJumpForceApplied", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMSSharedRepMovement), &Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProxyIsJumpForceApplied_MetaData), NewProp_bProxyIsJumpForceApplied_MetaData) };
void Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_bIsCrouched_SetBit(void* Obj)
{
	((FMSSharedRepMovement*)Obj)->bIsCrouched = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_bIsCrouched = { "bIsCrouched", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMSSharedRepMovement), &Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_bIsCrouched_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCrouched_MetaData), NewProp_bIsCrouched_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_RepMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_RepTimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_RepMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_bProxyIsJumpForceApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewProp_bIsCrouched,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"MSSharedRepMovement",
	Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::PropPointers),
	sizeof(FMSSharedRepMovement),
	alignof(FMSSharedRepMovement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSSharedRepMovement()
{
	if (!Z_Registration_Info_UScriptStruct_MSSharedRepMovement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MSSharedRepMovement.InnerSingleton, Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MSSharedRepMovement.InnerSingleton;
}
// End ScriptStruct FMSSharedRepMovement

// Begin Class APlayerCharacter Function FastSharedReplication
struct PlayerCharacter_eventFastSharedReplication_Parms
{
	FMSSharedRepMovement SharedRepMovement;
};
static const FName NAME_APlayerCharacter_FastSharedReplication = FName(TEXT("FastSharedReplication"));
void APlayerCharacter::FastSharedReplication(FMSSharedRepMovement const& SharedRepMovement)
{
	PlayerCharacter_eventFastSharedReplication_Parms Parms;
	Parms.SharedRepMovement=SharedRepMovement;
	UFunction* Func = FindFunctionChecked(NAME_APlayerCharacter_FastSharedReplication);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RPCs that is called on frames when default property replication is skipped. This replicates a single movement update to everyone. */" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPCs that is called on frames when default property replication is skipped. This replicates a single movement update to everyone." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedRepMovement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SharedRepMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement = { "SharedRepMovement", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventFastSharedReplication_Parms, SharedRepMovement), Z_Construct_UScriptStruct_FMSSharedRepMovement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedRepMovement_MetaData), NewProp_SharedRepMovement_MetaData) }; // 4055971979
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::NewProp_SharedRepMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "FastSharedReplication", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::PropPointers), sizeof(PlayerCharacter_eventFastSharedReplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerCharacter_eventFastSharedReplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_FastSharedReplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_FastSharedReplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execFastSharedReplication)
{
	P_GET_STRUCT(FMSSharedRepMovement,Z_Param_SharedRepMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FastSharedReplication_Implementation(Z_Param_SharedRepMovement);
	P_NATIVE_END;
}
// End Class APlayerCharacter Function FastSharedReplication

// Begin Class APlayerCharacter Function GetMMOPlayerController
struct Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics
{
	struct PlayerCharacter_eventGetMMOPlayerController_Parms
	{
		AMSPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMO Character" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetMMOPlayerController_Parms, ReturnValue), Z_Construct_UClass_AMSPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetMMOPlayerController", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::PlayerCharacter_eventGetMMOPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::PlayerCharacter_eventGetMMOPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execGetMMOPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMSPlayerController**)Z_Param__Result=P_THIS->GetMMOPlayerController();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function GetMMOPlayerController

// Begin Class APlayerCharacter Function GetMMOPlayerState
struct Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics
{
	struct PlayerCharacter_eventGetMMOPlayerState_Parms
	{
		AMSPlayerState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMO Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Getters and Setters\n" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getters and Setters" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventGetMMOPlayerState_Parms, ReturnValue), Z_Construct_UClass_AMSPlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "GetMMOPlayerState", nullptr, nullptr, Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::PlayerCharacter_eventGetMMOPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::PlayerCharacter_eventGetMMOPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execGetMMOPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMSPlayerState**)Z_Param__Result=P_THIS->GetMMOPlayerState();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function GetMMOPlayerState

// Begin Class APlayerCharacter Function OnRep_ReplicatedAcceleration
struct Z_Construct_UFunction_APlayerCharacter_OnRep_ReplicatedAcceleration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnRep_ReplicatedAcceleration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnRep_ReplicatedAcceleration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerCharacter_OnRep_ReplicatedAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnRep_ReplicatedAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnRep_ReplicatedAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ReplicatedAcceleration();
	P_NATIVE_END;
}
// End Class APlayerCharacter Function OnRep_ReplicatedAcceleration

// Begin Class APlayerCharacter
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
	UClass* Class = APlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FastSharedReplication", &APlayerCharacter::execFastSharedReplication },
		{ "GetMMOPlayerController", &APlayerCharacter::execGetMMOPlayerController },
		{ "GetMMOPlayerState", &APlayerCharacter::execGetMMOPlayerState },
		{ "OnRep_ReplicatedAcceleration", &APlayerCharacter::execOnRep_ReplicatedAcceleration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base player character pawn class used by this project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAcceleration_MetaData[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NetCharacter|Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAcceleration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_FastSharedReplication, "FastSharedReplication" }, // 2498459758
		{ &Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerController, "GetMMOPlayerController" }, // 2537047363
		{ &Z_Construct_UFunction_APlayerCharacter_GetMMOPlayerState, "GetMMOPlayerState" }, // 4123302873
		{ &Z_Construct_UFunction_APlayerCharacter_OnRep_ReplicatedAcceleration, "OnRep_ReplicatedAcceleration" }, // 3725685186
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ReplicatedAcceleration = { "ReplicatedAcceleration", "OnRep_ReplicatedAcceleration", (EPropertyFlags)0x0020080100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, ReplicatedAcceleration), Z_Construct_UScriptStruct_FMSReplicatedAcceleration, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedAcceleration_MetaData), NewProp_ReplicatedAcceleration_MetaData) }; // 514498402
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CameraComponent), Z_Construct_UClass_UMSCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0144000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_ReplicatedAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CrouchAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<APlayerCharacter>()
{
	return APlayerCharacter::StaticClass();
}
void APlayerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ReplicatedAcceleration(TEXT("ReplicatedAcceleration"));
	const bool bIsValid = true
		&& Name_ReplicatedAcceleration == ClassReps[(int32)ENetFields_Private::ReplicatedAcceleration].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// End Class APlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMSReplicatedAcceleration::StaticStruct, Z_Construct_UScriptStruct_FMSReplicatedAcceleration_Statics::NewStructOps, TEXT("MSReplicatedAcceleration"), &Z_Registration_Info_UScriptStruct_MSReplicatedAcceleration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSReplicatedAcceleration), 514498402U) },
		{ FMSSharedRepMovement::StaticStruct, Z_Construct_UScriptStruct_FMSSharedRepMovement_Statics::NewStructOps, TEXT("MSSharedRepMovement"), &Z_Registration_Info_UScriptStruct_MSSharedRepMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSSharedRepMovement), 4055971979U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 3695983048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_2777920922(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Player_PlayerCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
