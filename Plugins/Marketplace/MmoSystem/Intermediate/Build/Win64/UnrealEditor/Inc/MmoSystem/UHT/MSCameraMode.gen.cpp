// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Camera/MSCameraMode.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSCameraMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraMode();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraMode_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraModeStack();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraModeStack_NoRegister();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Enum EMSCameraModeBlendFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMSCameraModeBlendFunction;
static UEnum* EMSCameraModeBlendFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMSCameraModeBlendFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMSCameraModeBlendFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("EMSCameraModeBlendFunction"));
	}
	return Z_Registration_Info_UEnum_EMSCameraModeBlendFunction.OuterSingleton;
}
template<> MMOSYSTEM_API UEnum* StaticEnum<EMSCameraModeBlendFunction>()
{
	return EMSCameraModeBlendFunction_StaticEnum();
}
struct Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EMSCameraModeBlendFunction\n *\n *\x09""Blend function used for transitioning between camera modes.\n */" },
#endif
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "EMSCameraModeBlendFunction::COUNT" },
		{ "EaseIn.Comment", "// Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent.\n" },
		{ "EaseIn.Name", "EMSCameraModeBlendFunction::EaseIn" },
		{ "EaseIn.ToolTip", "Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent." },
		{ "EaseInOut.Comment", "// Smoothly accelerates and decelerates.  Ease amount controlled by the exponent.\n" },
		{ "EaseInOut.Name", "EMSCameraModeBlendFunction::EaseInOut" },
		{ "EaseInOut.ToolTip", "Smoothly accelerates and decelerates.  Ease amount controlled by the exponent." },
		{ "EaseOut.Comment", "// Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent.\n" },
		{ "EaseOut.Name", "EMSCameraModeBlendFunction::EaseOut" },
		{ "EaseOut.ToolTip", "Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent." },
		{ "Linear.Comment", "// Does a simple linear interpolation.\n" },
		{ "Linear.Name", "EMSCameraModeBlendFunction::Linear" },
		{ "Linear.ToolTip", "Does a simple linear interpolation." },
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EMSCameraModeBlendFunction\n\n    Blend function used for transitioning between camera modes." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMSCameraModeBlendFunction::Linear", (int64)EMSCameraModeBlendFunction::Linear },
		{ "EMSCameraModeBlendFunction::EaseIn", (int64)EMSCameraModeBlendFunction::EaseIn },
		{ "EMSCameraModeBlendFunction::EaseOut", (int64)EMSCameraModeBlendFunction::EaseOut },
		{ "EMSCameraModeBlendFunction::EaseInOut", (int64)EMSCameraModeBlendFunction::EaseInOut },
		{ "EMSCameraModeBlendFunction::COUNT", (int64)EMSCameraModeBlendFunction::COUNT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	"EMSCameraModeBlendFunction",
	"EMSCameraModeBlendFunction",
	Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction()
{
	if (!Z_Registration_Info_UEnum_EMSCameraModeBlendFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMSCameraModeBlendFunction.InnerSingleton, Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMSCameraModeBlendFunction.InnerSingleton;
}
// End Enum EMSCameraModeBlendFunction

// Begin Class UMSCameraMode
void UMSCameraMode::StaticRegisterNativesUMSCameraMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSCameraMode);
UClass* Z_Construct_UClass_UMSCameraMode_NoRegister()
{
	return UMSCameraMode::StaticClass();
}
struct Z_Construct_UClass_UMSCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMSCameraMode\n *\n *\x09""Base class for all camera modes.\n */" },
#endif
		{ "IncludePath", "Camera/MSCameraMode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMSCameraMode\n\n    Base class for all camera modes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTypeTag_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A tag that can be queried by gameplay code that cares when a kind of camera mode is active\n// without having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A tag that can be queried by gameplay code that cares when a kind of camera mode is active\nwithout having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "170.0" },
		{ "ClampMin", "5.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The horizontal field of view (in degrees).\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The horizontal field of view (in degrees)." },
#endif
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMin_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "-89.9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimum view pitch (in degrees).\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimum view pitch (in degrees)." },
#endif
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewPitchMax_MetaData[] = {
		{ "Category", "View" },
		{ "ClampMax", "89.9" },
		{ "ClampMin", "-89.9" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maximum view pitch (in degrees).\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum view pitch (in degrees)." },
#endif
		{ "UIMax", "89.9" },
		{ "UIMin", "-89.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How long it takes to blend in this mode.\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long it takes to blend in this mode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function used for blending.\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function used for blending." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendExponent_MetaData[] = {
		{ "Category", "Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Exponent used by blend functions to control the shape of the curve.\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exponent used by blend functions to control the shape of the curve." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetInterpolation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame. */" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraTypeTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewPitchMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendFunction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExponent;
	static void NewProp_bResetInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetInterpolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_CameraTypeTag = { "CameraTypeTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode, CameraTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTypeTag_MetaData), NewProp_CameraTypeTag_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_ViewPitchMin = { "ViewPitchMin", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode, ViewPitchMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMin_MetaData), NewProp_ViewPitchMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_ViewPitchMax = { "ViewPitchMax", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode, ViewPitchMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewPitchMax_MetaData), NewProp_ViewPitchMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_BlendFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_BlendFunction = { "BlendFunction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode, BlendFunction), Z_Construct_UEnum_MmoSystem_EMSCameraModeBlendFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFunction_MetaData), NewProp_BlendFunction_MetaData) }; // 2019765474
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_BlendExponent = { "BlendExponent", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraMode, BlendExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendExponent_MetaData), NewProp_BlendExponent_MetaData) };
void Z_Construct_UClass_UMSCameraMode_Statics::NewProp_bResetInterpolation_SetBit(void* Obj)
{
	((UMSCameraMode*)Obj)->bResetInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSCameraMode_Statics::NewProp_bResetInterpolation = { "bResetInterpolation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMSCameraMode), &Z_Construct_UClass_UMSCameraMode_Statics::NewProp_bResetInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetInterpolation_MetaData), NewProp_bResetInterpolation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_CameraTypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_ViewPitchMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_ViewPitchMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_BlendFunction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_BlendFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_BlendExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraMode_Statics::NewProp_bResetInterpolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSCameraMode_Statics::ClassParams = {
	&UMSCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSCameraMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraMode_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSCameraMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSCameraMode()
{
	if (!Z_Registration_Info_UClass_UMSCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSCameraMode.OuterSingleton, Z_Construct_UClass_UMSCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSCameraMode.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSCameraMode>()
{
	return UMSCameraMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSCameraMode);
UMSCameraMode::~UMSCameraMode() {}
// End Class UMSCameraMode

// Begin Class UMSCameraModeStack
void UMSCameraModeStack::StaticRegisterNativesUMSCameraModeStack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSCameraModeStack);
UClass* Z_Construct_UClass_UMSCameraModeStack_NoRegister()
{
	return UMSCameraModeStack::StaticClass();
}
struct Z_Construct_UClass_UMSCameraModeStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMSCameraModeStack\n *\n *\x09Stack used for blending camera modes.\n */" },
#endif
		{ "IncludePath", "Camera/MSCameraMode.h" },
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMSCameraModeStack\n\n    Stack used for blending camera modes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstances_MetaData[] = {
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
		{ "ModuleRelativePath", "Camera/MSCameraMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSCameraModeStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSCameraModeStack_Statics::NewProp_CameraModeInstances_Inner = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMSCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSCameraModeStack_Statics::NewProp_CameraModeInstances = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraModeStack, CameraModeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeInstances_MetaData), NewProp_CameraModeInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSCameraModeStack_Statics::NewProp_CameraModeStack_Inner = { "CameraModeStack", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMSCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSCameraModeStack_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraModeStack, CameraModeStack), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSCameraModeStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraModeStack_Statics::NewProp_CameraModeInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraModeStack_Statics::NewProp_CameraModeInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraModeStack_Statics::NewProp_CameraModeStack_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraModeStack_Statics::NewProp_CameraModeStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraModeStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSCameraModeStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraModeStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSCameraModeStack_Statics::ClassParams = {
	&UMSCameraModeStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSCameraModeStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraModeStack_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraModeStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSCameraModeStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSCameraModeStack()
{
	if (!Z_Registration_Info_UClass_UMSCameraModeStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSCameraModeStack.OuterSingleton, Z_Construct_UClass_UMSCameraModeStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSCameraModeStack.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSCameraModeStack>()
{
	return UMSCameraModeStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSCameraModeStack);
UMSCameraModeStack::~UMSCameraModeStack() {}
// End Class UMSCameraModeStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMSCameraModeBlendFunction_StaticEnum, TEXT("EMSCameraModeBlendFunction"), &Z_Registration_Info_UEnum_EMSCameraModeBlendFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2019765474U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSCameraMode, UMSCameraMode::StaticClass, TEXT("UMSCameraMode"), &Z_Registration_Info_UClass_UMSCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSCameraMode), 3550294498U) },
		{ Z_Construct_UClass_UMSCameraModeStack, UMSCameraModeStack::StaticClass, TEXT("UMSCameraModeStack"), &Z_Registration_Info_UClass_UMSCameraModeStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSCameraModeStack), 906558460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_2020019761(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
