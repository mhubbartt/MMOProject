// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Interaction/InteractionComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInteractionComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UInteractionComponent Function PerformTrace
struct Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics
{
	struct InteractionComponent_eventPerformTrace_Parms
	{
		AActor* CharacterRef;
		bool BlockingHit;
		FHitResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Interaction Trace Functions*/" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction Trace Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterRef;
	static void NewProp_BlockingHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BlockingHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::NewProp_CharacterRef = { "CharacterRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionComponent_eventPerformTrace_Parms, CharacterRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::NewProp_BlockingHit_SetBit(void* Obj)
{
	((InteractionComponent_eventPerformTrace_Parms*)Obj)->BlockingHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::NewProp_BlockingHit = { "BlockingHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionComponent_eventPerformTrace_Parms), &Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::NewProp_BlockingHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionComponent_eventPerformTrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::NewProp_CharacterRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::NewProp_BlockingHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "PerformTrace", nullptr, nullptr, Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::InteractionComponent_eventPerformTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::InteractionComponent_eventPerformTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionComponent_PerformTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionComponent_PerformTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionComponent::execPerformTrace)
{
	P_GET_OBJECT(AActor,Z_Param_CharacterRef);
	P_GET_UBOOL_REF(Z_Param_Out_BlockingHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHitResult*)Z_Param__Result=P_THIS->PerformTrace(Z_Param_CharacterRef,Z_Param_Out_BlockingHit);
	P_NATIVE_END;
}
// End Class UInteractionComponent Function PerformTrace

// Begin Class UInteractionComponent
void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
{
	UClass* Class = UInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PerformTrace", &UInteractionComponent::execPerformTrace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionComponent);
UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
{
	return UInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_UInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Intermediate base class for all interaction target actors. */" },
#endif
		{ "IncludePath", "Interaction/InteractionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intermediate base class for all interaction target actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug Options\n" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Options" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereRadius_MetaData[] = {
		{ "Category", "Debug Options" },
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSphereSegments_MetaData[] = {
		{ "Category", "Debug Options" },
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Debug Options" },
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Trace Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction Range Trace End\n" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction Range Trace End" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceAffectsAimPitch_MetaData[] = {
		{ "Category", "Trace Options" },
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceFPSTiming_MetaData[] = {
		{ "Category", "Trace Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this sets the trace frequency, sets how many frames are skipped\n" },
#endif
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this sets the trace frequency, sets how many frames are skipped" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceCount_MetaData[] = {
		{ "ModuleRelativePath", "Interaction/InteractionComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugSphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugSphereSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRange;
	static void NewProp_bTraceAffectsAimPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceAffectsAimPitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceFPSTiming;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraceCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_PerformTrace, "PerformTrace" }, // 3347773432
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((UInteractionComponent*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractionComponent), &Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DebugSphereRadius = { "DebugSphereRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, DebugSphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphereRadius_MetaData), NewProp_DebugSphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DebugSphereSegments = { "DebugSphereSegments", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, DebugSphereSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSphereSegments_MetaData), NewProp_DebugSphereSegments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
void Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bTraceAffectsAimPitch_SetBit(void* Obj)
{
	((UInteractionComponent*)Obj)->bTraceAffectsAimPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bTraceAffectsAimPitch = { "bTraceAffectsAimPitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractionComponent), &Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bTraceAffectsAimPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceAffectsAimPitch_MetaData), NewProp_bTraceAffectsAimPitch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceFPSTiming = { "TraceFPSTiming", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, TraceFPSTiming), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceFPSTiming_MetaData), NewProp_TraceFPSTiming_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceCount = { "TraceCount", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, TraceCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceCount_MetaData), NewProp_TraceCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DebugSphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DebugSphereSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bTraceAffectsAimPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceFPSTiming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
	&UInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UInteractionComponent>()
{
	return UInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
UInteractionComponent::~UInteractionComponent() {}
// End Class UInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interaction_InteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionComponent, UInteractionComponent::StaticClass, TEXT("UInteractionComponent"), &Z_Registration_Info_UClass_UInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionComponent), 2187039611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interaction_InteractionComponent_h_2133357836(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interaction_InteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interaction_InteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
