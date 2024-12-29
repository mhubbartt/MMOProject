// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Camera/MSCameraMode_ThirdPerson.h"
#include "MmoSystem/Camera/MSPenetrationAvoidanceFeeler.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSCameraMode_ThirdPerson() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraMode();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraMode_ThirdPerson();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraMode_ThirdPerson_NoRegister();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMSPenetrationAvoidanceFeeler();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UMSCameraMode_ThirdPerson
void UMSCameraMode_ThirdPerson::StaticRegisterNativesUMSCameraMode_ThirdPerson()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSCameraMode_ThirdPerson);
UClass* Z_Construct_UClass_UMSCameraMode_ThirdPerson_NoRegister()
{
	return UMSCameraMode_ThirdPerson::StaticClass();
}
struct Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMSCameraMode_ThirdPerson\n *\n *\x09""A basic third person camera mode.\n */" },
#endif
		{ "IncludePath", "Camera/MSCameraMode_ThirdPerson.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMSCameraMode_ThirdPerson\n\n    A basic third person camera mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetCurve_MetaData[] = {
		{ "Category", "Third Person" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Curve that defines local-space offsets from the target using the view pitch to evaluate the curve.\n" },
#endif
		{ "EditCondition", "!bUseRuntimeFloatCurves" },
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve that defines local-space offsets from the target using the view pitch to evaluate the curve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRuntimeFloatCurves_MetaData[] = {
		{ "Category", "Third Person" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UE-103986: Live editing of RuntimeFloatCurves during PIE does not work (unlike curve assets).\n// Once that is resolved this will become the default and TargetOffsetCurve will be removed.\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UE-103986: Live editing of RuntimeFloatCurves during PIE does not work (unlike curve assets).\nOnce that is resolved this will become the default and TargetOffsetCurve will be removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetX_MetaData[] = {
		{ "Category", "Third Person" },
		{ "EditCondition", "bUseRuntimeFloatCurves" },
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetY_MetaData[] = {
		{ "Category", "Third Person" },
		{ "EditCondition", "bUseRuntimeFloatCurves" },
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffsetZ_MetaData[] = {
		{ "Category", "Third Person" },
		{ "EditCondition", "bUseRuntimeFloatCurves" },
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchOffsetBlendMultiplier_MetaData[] = {
		{ "Category", "Third Person" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Alters the speed that a crouch offset is blended in or out\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alters the speed that a crouch offset is blended in or out" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendInTime_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationBlendOutTime_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventPenetration_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, does collision checks to keep the camera out of the world. */" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, does collision checks to keep the camera out of the world." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDoPredictiveAvoidance_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping. */" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPushOutDistance_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReportPenetrationPercent_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When the camera's distance is pushed into this percentage of its full distance due to penetration */" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the camera's distance is pushed into this percentage of its full distance due to penetration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationAvoidanceFeelers_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * These are the feeler rays that are used to find where to place the camera.\n\x09 * Index: 0  : This is the normal feeler we use to prevent collisions.\n\x09 * Index: 1+ : These feelers are used if you bDoPredictiveAvoidance=true, to scan for potential impacts if the player\n\x09 *             were to rotate towards that direction and primitively collide the camera so that it pulls in before\n\x09 *             impacting the occluder.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are the feeler rays that are used to find where to place the camera.\nIndex: 0  : This is the normal feeler we use to prevent collisions.\nIndex: 1+ : These feelers are used if you bDoPredictiveAvoidance=true, to scan for potential impacts if the player\n            were to rotate towards that direction and primitively collide the camera so that it pulls in before\n            impacting the occluder." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimLineToDesiredPosBlockedPct_MetaData[] = {
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugActorsHitDuringCameraPenetration_MetaData[] = {
		{ "ModuleRelativePath", "Camera/MSCameraMode_ThirdPerson.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetOffsetCurve;
	static void NewProp_bUseRuntimeFloatCurves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRuntimeFloatCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffsetX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffsetY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffsetZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchOffsetBlendMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationBlendOutTime;
	static void NewProp_bPreventPenetration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventPenetration;
	static void NewProp_bDoPredictiveAvoidance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPredictiveAvoidance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionPushOutDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReportPenetrationPercent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PenetrationAvoidanceFeelers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PenetrationAvoidanceFeelers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimLineToDesiredPosBlockedPct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugActorsHitDuringCameraPenetration_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugActorsHitDuringCameraPenetration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSCameraMode_ThirdPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve = { "TargetOffsetCurve", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, TargetOffsetCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffsetCurve_MetaData), NewProp_TargetOffsetCurve_MetaData) };
void Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves_SetBit(void* Obj)
{
	((UMSCameraMode_ThirdPerson*)Obj)->bUseRuntimeFloatCurves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves = { "bUseRuntimeFloatCurves", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSCameraMode_ThirdPerson), &Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRuntimeFloatCurves_MetaData), NewProp_bUseRuntimeFloatCurves_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetX = { "TargetOffsetX", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, TargetOffsetX), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffsetX_MetaData), NewProp_TargetOffsetX_MetaData) }; // 1495033350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetY = { "TargetOffsetY", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, TargetOffsetY), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffsetY_MetaData), NewProp_TargetOffsetY_MetaData) }; // 1495033350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetZ = { "TargetOffsetZ", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, TargetOffsetZ), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffsetZ_MetaData), NewProp_TargetOffsetZ_MetaData) }; // 1495033350
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_CrouchOffsetBlendMultiplier = { "CrouchOffsetBlendMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, CrouchOffsetBlendMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchOffsetBlendMultiplier_MetaData), NewProp_CrouchOffsetBlendMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendInTime = { "PenetrationBlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, PenetrationBlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationBlendInTime_MetaData), NewProp_PenetrationBlendInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime = { "PenetrationBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, PenetrationBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationBlendOutTime_MetaData), NewProp_PenetrationBlendOutTime_MetaData) };
void Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration_SetBit(void* Obj)
{
	((UMSCameraMode_ThirdPerson*)Obj)->bPreventPenetration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration = { "bPreventPenetration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSCameraMode_ThirdPerson), &Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventPenetration_MetaData), NewProp_bPreventPenetration_MetaData) };
void Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_SetBit(void* Obj)
{
	((UMSCameraMode_ThirdPerson*)Obj)->bDoPredictiveAvoidance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance = { "bDoPredictiveAvoidance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSCameraMode_ThirdPerson), &Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDoPredictiveAvoidance_MetaData), NewProp_bDoPredictiveAvoidance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_CollisionPushOutDistance = { "CollisionPushOutDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, CollisionPushOutDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionPushOutDistance_MetaData), NewProp_CollisionPushOutDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_ReportPenetrationPercent = { "ReportPenetrationPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, ReportPenetrationPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReportPenetrationPercent_MetaData), NewProp_ReportPenetrationPercent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers_Inner = { "PenetrationAvoidanceFeelers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMSPenetrationAvoidanceFeeler, METADATA_PARAMS(0, nullptr) }; // 3423443213
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers = { "PenetrationAvoidanceFeelers", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, PenetrationAvoidanceFeelers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PenetrationAvoidanceFeelers_MetaData), NewProp_PenetrationAvoidanceFeelers_MetaData) }; // 3423443213
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_AimLineToDesiredPosBlockedPct = { "AimLineToDesiredPosBlockedPct", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, AimLineToDesiredPosBlockedPct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimLineToDesiredPosBlockedPct_MetaData), NewProp_AimLineToDesiredPosBlockedPct_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration_Inner = { "DebugActorsHitDuringCameraPenetration", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration = { "DebugActorsHitDuringCameraPenetration", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode_ThirdPerson, DebugActorsHitDuringCameraPenetration), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugActorsHitDuringCameraPenetration_MetaData), NewProp_DebugActorsHitDuringCameraPenetration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bUseRuntimeFloatCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_TargetOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_CrouchOffsetBlendMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_PenetrationBlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bPreventPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_bDoPredictiveAvoidance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_CollisionPushOutDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_ReportPenetrationPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_PenetrationAvoidanceFeelers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_AimLineToDesiredPosBlockedPct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::NewProp_DebugActorsHitDuringCameraPenetration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMSCameraMode,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::ClassParams = {
	&UMSCameraMode_ThirdPerson::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::PropPointers),
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSCameraMode_ThirdPerson()
{
	if (!Z_Registration_Info_UClass_UMSCameraMode_ThirdPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSCameraMode_ThirdPerson.OuterSingleton, Z_Construct_UClass_UMSCameraMode_ThirdPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSCameraMode_ThirdPerson.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSCameraMode_ThirdPerson>()
{
	return UMSCameraMode_ThirdPerson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSCameraMode_ThirdPerson);
UMSCameraMode_ThirdPerson::~UMSCameraMode_ThirdPerson() {}
// End Class UMSCameraMode_ThirdPerson

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_ThirdPerson_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSCameraMode_ThirdPerson, UMSCameraMode_ThirdPerson::StaticClass, TEXT("UMSCameraMode_ThirdPerson"), &Z_Registration_Info_UClass_UMSCameraMode_ThirdPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSCameraMode_ThirdPerson), 2695249307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_ThirdPerson_h_3893051283(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_ThirdPerson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_ThirdPerson_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
