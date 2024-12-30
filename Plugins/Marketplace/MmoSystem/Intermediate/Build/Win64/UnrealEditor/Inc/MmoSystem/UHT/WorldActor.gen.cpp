// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Inventory/Actors/WorldActor.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "MmoSystem/Inventory/ItemData/ItemDynamicData.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MMOSYSTEM_API UClass* Z_Construct_UClass_AWorldActor();
MMOSYSTEM_API UClass* Z_Construct_UClass_AWorldActor_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UBasePrimaryItem_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicItemData();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Enum EEffectApplicationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectApplicationPolicy;
static UEnum* EEffectApplicationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("EEffectApplicationPolicy"));
	}
	return Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton;
}
template<> MMOSYSTEM_API UEnum* StaticEnum<EEffectApplicationPolicy>()
{
	return EEffectApplicationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyOnEndOverlap.Name", "EEffectApplicationPolicy::ApplyOnEndOverlap" },
		{ "ApplyOnOverlap.Name", "EEffectApplicationPolicy::ApplyOnOverlap" },
		{ "DoNotApply.Name", "EEffectApplicationPolicy::DoNotApply" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEffectApplicationPolicy::ApplyOnOverlap", (int64)EEffectApplicationPolicy::ApplyOnOverlap },
		{ "EEffectApplicationPolicy::ApplyOnEndOverlap", (int64)EEffectApplicationPolicy::ApplyOnEndOverlap },
		{ "EEffectApplicationPolicy::DoNotApply", (int64)EEffectApplicationPolicy::DoNotApply },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	"EEffectApplicationPolicy",
	"EEffectApplicationPolicy",
	Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy()
{
	if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton, Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton;
}
// End Enum EEffectApplicationPolicy

// Begin Enum EEffectRemovalPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRemovalPolicy;
static UEnum* EEffectRemovalPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("EEffectRemovalPolicy"));
	}
	return Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton;
}
template<> MMOSYSTEM_API UEnum* StaticEnum<EEffectRemovalPolicy>()
{
	return EEffectRemovalPolicy_StaticEnum();
}
struct Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DoNotRemove.Name", "EEffectRemovalPolicy::DoNotRemove" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
		{ "RemoveOnEndOverlap.Name", "EEffectRemovalPolicy::RemoveOnEndOverlap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEffectRemovalPolicy::RemoveOnEndOverlap", (int64)EEffectRemovalPolicy::RemoveOnEndOverlap },
		{ "EEffectRemovalPolicy::DoNotRemove", (int64)EEffectRemovalPolicy::DoNotRemove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	"EEffectRemovalPolicy",
	"EEffectRemovalPolicy",
	Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy()
{
	if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton, Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton;
}
// End Enum EEffectRemovalPolicy

// Begin Class AWorldActor Function ApplyEffectToTarget
struct Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics
{
	struct WorldActor_eventApplyEffectToTarget_Parms
	{
		AActor* TargetActor;
		TSubclassOf<UGameplayEffect> GameplayEffectClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Actor|Functions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Apply Effect Functions\n" },
#endif
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply Effect Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventApplyEffectToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventApplyEffectToTarget_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::NewProp_GameplayEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldActor, nullptr, "ApplyEffectToTarget", nullptr, nullptr, Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::WorldActor_eventApplyEffectToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::WorldActor_eventApplyEffectToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldActor::execApplyEffectToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectToTarget(Z_Param_TargetActor,Z_Param_GameplayEffectClass);
	P_NATIVE_END;
}
// End Class AWorldActor Function ApplyEffectToTarget

// Begin Class AWorldActor Function OnEndOverlap
struct Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics
{
	struct WorldActor_eventOnEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Actor|Functions" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldActor, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::WorldActor_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::WorldActor_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldActor_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldActor_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldActor::execOnEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AWorldActor Function OnEndOverlap

// Begin Class AWorldActor Function OnOverlap
struct Z_Construct_UFunction_AWorldActor_OnOverlap_Statics
{
	struct WorldActor_eventOnOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "World Actor|Functions" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WorldActor_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WorldActor_eventOnOverlap_Parms), &Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WorldActor_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldActor, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::WorldActor_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::WorldActor_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWorldActor_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldActor_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWorldActor::execOnOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWorldActor Function OnOverlap

// Begin Class AWorldActor
void AWorldActor::StaticRegisterNativesAWorldActor()
{
	UClass* Class = AWorldActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyEffectToTarget", &AWorldActor::execApplyEffectToTarget },
		{ "OnEndOverlap", &AWorldActor::execOnEndOverlap },
		{ "OnOverlap", &AWorldActor::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldActor);
UClass* Z_Construct_UClass_AWorldActor_NoRegister()
{
	return AWorldActor::StaticClass();
}
struct Z_Construct_UClass_AWorldActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/Actors/WorldActor.h" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "World Actor|Interaction Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* =======  IInteraction Interface Variables and Functions  ======= */// IInteractionInterface Start\x09\x09\n" },
#endif
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=======  IInteraction Interface Variables and Functions  ======= // IInteractionInterface Start" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWidget_MetaData[] = {
		{ "Category", "World Actor|Interaction Options" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTag_MetaData[] = {
		{ "Category", "Interaction|Interaction Options" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[] = {
		{ "Category", "Interaction|Interaction Options" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffectHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* =======  Ability System Component Variables and Functions  ======= */// Current Active Effects\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=======  Ability System Component Variables and Functions  ======= // Current Active Effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyActorOnEffectApplication_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can Apply Effect Boolean's\n" },
#endif
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can Apply Effect Boolean's" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyEffectsToEnemies_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyEffectsToNPCs_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantGameplayEffectClass_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* =======  Effect Classes  ======= */// Instant Effects\n" },
#endif
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=======  Effect Classes  ======= // Instant Effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantEffectApplicationPolicy_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationGameplayEffectClass_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Duration Effects\n" },
#endif
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Duration Effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationEffectApplicationPolicy_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteGameplayEffectClass_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Infinite Effects\n" },
#endif
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Infinite Effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectApplicationPolicy_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectRemovalPolicy_MetaData[] = {
		{ "Category", "World Actor|Overlap Effects" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPickup_MetaData[] = {
		{ "Category", "World Actor|InventoryList" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "World Actor|InventoryList" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanAddToInventory_MetaData[] = {
		{ "Category", "World Actor|InventoryList" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "World Actor|InventoryList" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicItemData_MetaData[] = {
		{ "Category", "World Actor|InventoryList" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent2D_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Niagara_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderBoom_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[] = {
		{ "Category", "Default" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Please add a variable description */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Inventory/Actors/WorldActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please add a variable description" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static void NewProp_bShowWidget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEffectHandles_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffectHandles_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveEffectHandles;
	static void NewProp_bDestroyActorOnEffectApplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyActorOnEffectApplication;
	static void NewProp_bApplyEffectsToEnemies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyEffectsToEnemies;
	static void NewProp_bApplyEffectsToNPCs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyEffectsToNPCs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstantGameplayEffectClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstantEffectApplicationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InstantEffectApplicationPolicy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DurationGameplayEffectClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DurationEffectApplicationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationEffectApplicationPolicy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InfiniteGameplayEffectClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InfiniteEffectApplicationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InfiniteEffectApplicationPolicy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InfiniteEffectRemovalPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InfiniteEffectRemovalPolicy;
	static void NewProp_bIsPickup_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPickup;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static void NewProp_bCanAddToInventory_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAddToInventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicItemData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCaptureComponent2D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Niagara;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldActor_ApplyEffectToTarget, "ApplyEffectToTarget" }, // 631089331
		{ &Z_Construct_UFunction_AWorldActor_OnEndOverlap, "OnEndOverlap" }, // 627337597
		{ &Z_Construct_UFunction_AWorldActor_OnOverlap, "OnOverlap" }, // 3214164902
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
void Z_Construct_UClass_AWorldActor_Statics::NewProp_bShowWidget_SetBit(void* Obj)
{
	((AWorldActor*)Obj)->bShowWidget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_bShowWidget = { "bShowWidget", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldActor), &Z_Construct_UClass_AWorldActor_Statics::NewProp_bShowWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWidget_MetaData), NewProp_bShowWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InteractionTag = { "InteractionTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, InteractionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTag_MetaData), NewProp_InteractionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InteractionText = { "InteractionText", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, InteractionText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionText_MetaData), NewProp_InteractionText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_ActiveEffectHandles_ValueProp = { "ActiveEffectHandles", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_ActiveEffectHandles_Key_KeyProp = { "ActiveEffectHandles_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_ActiveEffectHandles = { "ActiveEffectHandles", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, ActiveEffectHandles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEffectHandles_MetaData), NewProp_ActiveEffectHandles_MetaData) }; // 290910411
void Z_Construct_UClass_AWorldActor_Statics::NewProp_bDestroyActorOnEffectApplication_SetBit(void* Obj)
{
	((AWorldActor*)Obj)->bDestroyActorOnEffectApplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_bDestroyActorOnEffectApplication = { "bDestroyActorOnEffectApplication", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldActor), &Z_Construct_UClass_AWorldActor_Statics::NewProp_bDestroyActorOnEffectApplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyActorOnEffectApplication_MetaData), NewProp_bDestroyActorOnEffectApplication_MetaData) };
void Z_Construct_UClass_AWorldActor_Statics::NewProp_bApplyEffectsToEnemies_SetBit(void* Obj)
{
	((AWorldActor*)Obj)->bApplyEffectsToEnemies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_bApplyEffectsToEnemies = { "bApplyEffectsToEnemies", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldActor), &Z_Construct_UClass_AWorldActor_Statics::NewProp_bApplyEffectsToEnemies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyEffectsToEnemies_MetaData), NewProp_bApplyEffectsToEnemies_MetaData) };
void Z_Construct_UClass_AWorldActor_Statics::NewProp_bApplyEffectsToNPCs_SetBit(void* Obj)
{
	((AWorldActor*)Obj)->bApplyEffectsToNPCs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_bApplyEffectsToNPCs = { "bApplyEffectsToNPCs", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldActor), &Z_Construct_UClass_AWorldActor_Statics::NewProp_bApplyEffectsToNPCs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyEffectsToNPCs_MetaData), NewProp_bApplyEffectsToNPCs_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InstantGameplayEffectClass = { "InstantGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, InstantGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantGameplayEffectClass_MetaData), NewProp_InstantGameplayEffectClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InstantEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InstantEffectApplicationPolicy = { "InstantEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, InstantEffectApplicationPolicy), Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantEffectApplicationPolicy_MetaData), NewProp_InstantEffectApplicationPolicy_MetaData) }; // 4251810952
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_DurationGameplayEffectClass = { "DurationGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, DurationGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationGameplayEffectClass_MetaData), NewProp_DurationGameplayEffectClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_DurationEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_DurationEffectApplicationPolicy = { "DurationEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, DurationEffectApplicationPolicy), Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationEffectApplicationPolicy_MetaData), NewProp_DurationEffectApplicationPolicy_MetaData) }; // 4251810952
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteGameplayEffectClass = { "InfiniteGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, InfiniteGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteGameplayEffectClass_MetaData), NewProp_InfiniteGameplayEffectClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteEffectApplicationPolicy = { "InfiniteEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, InfiniteEffectApplicationPolicy), Z_Construct_UEnum_MmoSystem_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteEffectApplicationPolicy_MetaData), NewProp_InfiniteEffectApplicationPolicy_MetaData) }; // 4251810952
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteEffectRemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteEffectRemovalPolicy = { "InfiniteEffectRemovalPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, InfiniteEffectRemovalPolicy), Z_Construct_UEnum_MmoSystem_EEffectRemovalPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteEffectRemovalPolicy_MetaData), NewProp_InfiniteEffectRemovalPolicy_MetaData) }; // 1638561062
void Z_Construct_UClass_AWorldActor_Statics::NewProp_bIsPickup_SetBit(void* Obj)
{
	((AWorldActor*)Obj)->bIsPickup = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_bIsPickup = { "bIsPickup", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldActor), &Z_Construct_UClass_AWorldActor_Statics::NewProp_bIsPickup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPickup_MetaData), NewProp_bIsPickup_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
void Z_Construct_UClass_AWorldActor_Statics::NewProp_bCanAddToInventory_SetBit(void* Obj)
{
	((AWorldActor*)Obj)->bCanAddToInventory = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_bCanAddToInventory = { "bCanAddToInventory", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWorldActor), &Z_Construct_UClass_AWorldActor_Statics::NewProp_bCanAddToInventory_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanAddToInventory_MetaData), NewProp_bCanAddToInventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, ItemID), Z_Construct_UClass_UBasePrimaryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_DynamicItemData = { "DynamicItemData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, DynamicItemData), Z_Construct_UScriptStruct_FDynamicItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicItemData_MetaData), NewProp_DynamicItemData_MetaData) }; // 3846627065
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_SceneCaptureComponent2D = { "SceneCaptureComponent2D", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, SceneCaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneCaptureComponent2D_MetaData), NewProp_SceneCaptureComponent2D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_Niagara = { "Niagara", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, Niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Niagara_MetaData), NewProp_Niagara_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_RenderBoom = { "RenderBoom", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, RenderBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderBoom_MetaData), NewProp_RenderBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessComponent_MetaData), NewProp_PostProcessComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldActor_Statics::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWorldActor, InteractionWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidget_MetaData), NewProp_InteractionWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_MaxDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_bShowWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InteractionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InteractionText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_ActiveEffectHandles_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_ActiveEffectHandles_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_ActiveEffectHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_bDestroyActorOnEffectApplication,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_bApplyEffectsToEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_bApplyEffectsToNPCs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InstantGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InstantEffectApplicationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InstantEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_DurationGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_DurationEffectApplicationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_DurationEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteGameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteEffectApplicationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteEffectRemovalPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InfiniteEffectRemovalPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_bIsPickup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_bCanAddToInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_DynamicItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_SceneCaptureComponent2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_Niagara,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_RenderBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_PostProcessComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldActor_Statics::NewProp_InteractionWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWorldActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWorldActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(AWorldActor, IInteractionInterface), false },  // 911323719
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldActor_Statics::ClassParams = {
	&AWorldActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWorldActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWorldActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWorldActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AWorldActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWorldActor()
{
	if (!Z_Registration_Info_UClass_AWorldActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldActor.OuterSingleton, Z_Construct_UClass_AWorldActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWorldActor.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<AWorldActor>()
{
	return AWorldActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldActor);
AWorldActor::~AWorldActor() {}
// End Class AWorldActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEffectApplicationPolicy_StaticEnum, TEXT("EEffectApplicationPolicy"), &Z_Registration_Info_UEnum_EEffectApplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4251810952U) },
		{ EEffectRemovalPolicy_StaticEnum, TEXT("EEffectRemovalPolicy"), &Z_Registration_Info_UEnum_EEffectRemovalPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1638561062U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWorldActor, AWorldActor::StaticClass, TEXT("AWorldActor"), &Z_Registration_Info_UClass_AWorldActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldActor), 37174603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_2761002068(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Inventory_Actors_WorldActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
