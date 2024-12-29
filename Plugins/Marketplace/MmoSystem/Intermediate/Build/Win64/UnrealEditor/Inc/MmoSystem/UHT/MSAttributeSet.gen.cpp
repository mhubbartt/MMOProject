// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/AbilitySystem/Attributes/MSAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSAttributeSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSAttributeSet();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSAttributeSet_NoRegister();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin ScriptStruct FEffectProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EffectProperties;
class UScriptStruct* FEffectProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectProperties, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("EffectProperties"));
	}
	return Z_Registration_Info_UScriptStruct_EffectProperties.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FEffectProperties>()
{
	return FEffectProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEffectProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceController_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAvatarActor_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetController_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCharacter_MetaData[] = {
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetAvatarActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor = { "SourceAvatarActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceAvatarActor_MetaData), NewProp_SourceAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController = { "SourceController", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceController_MetaData), NewProp_SourceController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter = { "SourceCharacter", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, SourceCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCharacter_MetaData), NewProp_SourceCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor = { "TargetAvatarActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetAvatarActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAvatarActor_MetaData), NewProp_TargetAvatarActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController = { "TargetController", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetController_MetaData), NewProp_TargetController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCharacter_MetaData), NewProp_TargetCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC = { "TargetASC", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEffectProperties, TargetASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetASC_MetaData), NewProp_TargetASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_SourceCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetAvatarActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectProperties_Statics::NewProp_TargetASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"EffectProperties",
	Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::PropPointers),
	sizeof(FEffectProperties),
	alignof(FEffectProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEffectProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEffectProperties()
{
	if (!Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton, Z_Construct_UScriptStruct_FEffectProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EffectProperties.InnerSingleton;
}
// End ScriptStruct FEffectProperties

// Begin Class UMSAttributeSet Function OnRep_ArmorPen
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics
{
	struct MSAttributeSet_eventOnRep_ArmorPen_Parms
	{
		FGameplayAttributeData OldArmorPen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Damage Modifiers REP Notifies --------------------------------------- */// ArmorPen\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Damage Modifiers REP Notifies --------------------------------------- // ArmorPen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldArmorPen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmorPen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::NewProp_OldArmorPen = { "OldArmorPen", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_ArmorPen_Parms, OldArmorPen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldArmorPen_MetaData), NewProp_OldArmorPen_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::NewProp_OldArmorPen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_ArmorPen", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::MSAttributeSet_eventOnRep_ArmorPen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::MSAttributeSet_eventOnRep_ArmorPen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_ArmorPen)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmorPen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ArmorPen(Z_Param_Out_OldArmorPen);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_ArmorPen

// Begin Class UMSAttributeSet Function OnRep_Attack
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics
{
	struct MSAttributeSet_eventOnRep_Attack_Parms
	{
		FGameplayAttributeData OldAttack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Secondary Attribute REP Notifies ----------------- *///  Attack\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Secondary Attribute REP Notifies ----------------- //  Attack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack = { "OldAttack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Attack_Parms, OldAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttack_MetaData), NewProp_OldAttack_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::NewProp_OldAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Attack", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::MSAttributeSet_eventOnRep_Attack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::MSAttributeSet_eventOnRep_Attack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Attack)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Attack(Z_Param_Out_OldAttack);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Attack

// Begin Class UMSAttributeSet Function OnRep_BlockChance
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics
{
	struct MSAttributeSet_eventOnRep_BlockChance_Parms
	{
		FGameplayAttributeData OldBlockChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlockChance\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlockChance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldBlockChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldBlockChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance = { "OldBlockChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_BlockChance_Parms, OldBlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldBlockChance_MetaData), NewProp_OldBlockChance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::NewProp_OldBlockChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_BlockChance", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::MSAttributeSet_eventOnRep_BlockChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::MSAttributeSet_eventOnRep_BlockChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_BlockChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldBlockChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockChance(Z_Param_Out_OldBlockChance);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_BlockChance

// Begin Class UMSAttributeSet Function OnRep_Charisma
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics
{
	struct MSAttributeSet_eventOnRep_Charisma_Parms
	{
		FGameplayAttributeData OldCharisma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Charisma\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Charisma" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCharisma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCharisma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma = { "OldCharisma", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Charisma_Parms, OldCharisma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCharisma_MetaData), NewProp_OldCharisma_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::NewProp_OldCharisma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Charisma", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::MSAttributeSet_eventOnRep_Charisma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::MSAttributeSet_eventOnRep_Charisma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Charisma)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCharisma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Charisma(Z_Param_Out_OldCharisma);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Charisma

// Begin Class UMSAttributeSet Function OnRep_Constitution
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics
{
	struct MSAttributeSet_eventOnRep_Constitution_Parms
	{
		FGameplayAttributeData OldConstitution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Constitution\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constitution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldConstitution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldConstitution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::NewProp_OldConstitution = { "OldConstitution", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Constitution_Parms, OldConstitution), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldConstitution_MetaData), NewProp_OldConstitution_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::NewProp_OldConstitution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Constitution", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::MSAttributeSet_eventOnRep_Constitution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::MSAttributeSet_eventOnRep_Constitution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Constitution)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldConstitution);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Constitution(Z_Param_Out_OldConstitution);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Constitution

// Begin Class UMSAttributeSet Function OnRep_CritDef
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics
{
	struct MSAttributeSet_eventOnRep_CritDef_Parms
	{
		FGameplayAttributeData OldCritDef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CritDef\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritDef" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCritDef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCritDef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::NewProp_OldCritDef = { "OldCritDef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_CritDef_Parms, OldCritDef), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCritDef_MetaData), NewProp_OldCritDef_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::NewProp_OldCritDef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_CritDef", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::MSAttributeSet_eventOnRep_CritDef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::MSAttributeSet_eventOnRep_CritDef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_CritDef)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritDef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritDef(Z_Param_Out_OldCritDef);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_CritDef

// Begin Class UMSAttributeSet Function OnRep_CritHitChance
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics
{
	struct MSAttributeSet_eventOnRep_CritHitChance_Parms
	{
		FGameplayAttributeData OldCritHitChance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CritHitChance\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritHitChance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCritHitChance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCritHitChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::NewProp_OldCritHitChance = { "OldCritHitChance", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_CritHitChance_Parms, OldCritHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCritHitChance_MetaData), NewProp_OldCritHitChance_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::NewProp_OldCritHitChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_CritHitChance", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::MSAttributeSet_eventOnRep_CritHitChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::MSAttributeSet_eventOnRep_CritHitChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_CritHitChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritHitChance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritHitChance(Z_Param_Out_OldCritHitChance);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_CritHitChance

// Begin Class UMSAttributeSet Function OnRep_CritHitX
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics
{
	struct MSAttributeSet_eventOnRep_CritHitX_Parms
	{
		FGameplayAttributeData OldCritHitX;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CritHitX\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritHitX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCritHitX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldCritHitX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::NewProp_OldCritHitX = { "OldCritHitX", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_CritHitX_Parms, OldCritHitX), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCritHitX_MetaData), NewProp_OldCritHitX_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::NewProp_OldCritHitX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_CritHitX", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::MSAttributeSet_eventOnRep_CritHitX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::MSAttributeSet_eventOnRep_CritHitX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_CritHitX)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldCritHitX);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CritHitX(Z_Param_Out_OldCritHitX);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_CritHitX

// Begin Class UMSAttributeSet Function OnRep_DarkAttack
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics
{
	struct MSAttributeSet_eventOnRep_DarkAttack_Parms
	{
		FGameplayAttributeData OldDarkAttack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DarkAttack\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DarkAttack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDarkAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDarkAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::NewProp_OldDarkAttack = { "OldDarkAttack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_DarkAttack_Parms, OldDarkAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDarkAttack_MetaData), NewProp_OldDarkAttack_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::NewProp_OldDarkAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_DarkAttack", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::MSAttributeSet_eventOnRep_DarkAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::MSAttributeSet_eventOnRep_DarkAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_DarkAttack)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDarkAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DarkAttack(Z_Param_Out_OldDarkAttack);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_DarkAttack

// Begin Class UMSAttributeSet Function OnRep_DarkRes
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics
{
	struct MSAttributeSet_eventOnRep_DarkRes_Parms
	{
		FGameplayAttributeData OldDarkRes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  DarkRes\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DarkRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDarkRes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDarkRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::NewProp_OldDarkRes = { "OldDarkRes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_DarkRes_Parms, OldDarkRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDarkRes_MetaData), NewProp_OldDarkRes_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::NewProp_OldDarkRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_DarkRes", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::MSAttributeSet_eventOnRep_DarkRes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::MSAttributeSet_eventOnRep_DarkRes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_DarkRes)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDarkRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DarkRes(Z_Param_Out_OldDarkRes);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_DarkRes

// Begin Class UMSAttributeSet Function OnRep_Dexterity
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics
{
	struct MSAttributeSet_eventOnRep_Dexterity_Parms
	{
		FGameplayAttributeData OldAgility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Dexterity\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dexterity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAgility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAgility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::NewProp_OldAgility = { "OldAgility", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Dexterity_Parms, OldAgility), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAgility_MetaData), NewProp_OldAgility_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::NewProp_OldAgility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Dexterity", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::MSAttributeSet_eventOnRep_Dexterity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::MSAttributeSet_eventOnRep_Dexterity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Dexterity)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAgility);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Dexterity(Z_Param_Out_OldAgility);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Dexterity

// Begin Class UMSAttributeSet Function OnRep_Dodge
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics
{
	struct MSAttributeSet_eventOnRep_Dodge_Parms
	{
		FGameplayAttributeData OldDodge;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DodgeChance\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DodgeChance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldDodge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldDodge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::NewProp_OldDodge = { "OldDodge", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Dodge_Parms, OldDodge), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldDodge_MetaData), NewProp_OldDodge_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::NewProp_OldDodge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Dodge", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::MSAttributeSet_eventOnRep_Dodge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::MSAttributeSet_eventOnRep_Dodge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Dodge)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldDodge);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Dodge(Z_Param_Out_OldDodge);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Dodge

// Begin Class UMSAttributeSet Function OnRep_EarthRes
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics
{
	struct MSAttributeSet_eventOnRep_EarthRes_Parms
	{
		FGameplayAttributeData OldEarthRes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  EarthRes\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EarthRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldEarthRes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldEarthRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::NewProp_OldEarthRes = { "OldEarthRes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_EarthRes_Parms, OldEarthRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldEarthRes_MetaData), NewProp_OldEarthRes_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::NewProp_OldEarthRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_EarthRes", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::MSAttributeSet_eventOnRep_EarthRes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::MSAttributeSet_eventOnRep_EarthRes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_EarthRes)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldEarthRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EarthRes(Z_Param_Out_OldEarthRes);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_EarthRes

// Begin Class UMSAttributeSet Function OnRep_FireRes
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics
{
	struct MSAttributeSet_eventOnRep_FireRes_Parms
	{
		FGameplayAttributeData OldFireRes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  FireRes\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FireRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldFireRes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldFireRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::NewProp_OldFireRes = { "OldFireRes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_FireRes_Parms, OldFireRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldFireRes_MetaData), NewProp_OldFireRes_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::NewProp_OldFireRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_FireRes", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::MSAttributeSet_eventOnRep_FireRes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::MSAttributeSet_eventOnRep_FireRes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_FireRes)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldFireRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_FireRes(Z_Param_Out_OldFireRes);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_FireRes

// Begin Class UMSAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics
{
	struct MSAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Vital Attribute REP Notifies ----------------- */// Health\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Vital Attribute REP Notifies ----------------- // Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::MSAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::MSAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Health

// Begin Class UMSAttributeSet Function OnRep_HealthRegen
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics
{
	struct MSAttributeSet_eventOnRep_HealthRegen_Parms
	{
		FGameplayAttributeData OldHealthRegen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Regen Attributes REP Notifies --------------------------------------- *///  HealthRegen\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Regen Attributes REP Notifies --------------------------------------- //  HealthRegen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealthRegen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldHealthRegen = { "OldHealthRegen", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_HealthRegen_Parms, OldHealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealthRegen_MetaData), NewProp_OldHealthRegen_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::NewProp_OldHealthRegen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_HealthRegen", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::MSAttributeSet_eventOnRep_HealthRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::MSAttributeSet_eventOnRep_HealthRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_HealthRegen)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegen(Z_Param_Out_OldHealthRegen);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_HealthRegen

// Begin Class UMSAttributeSet Function OnRep_HolyAttack
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics
{
	struct MSAttributeSet_eventOnRep_HolyAttack_Parms
	{
		FGameplayAttributeData OldHolyAttack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  HolyAttack\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HolyAttack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHolyAttack_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHolyAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::NewProp_OldHolyAttack = { "OldHolyAttack", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_HolyAttack_Parms, OldHolyAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHolyAttack_MetaData), NewProp_OldHolyAttack_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::NewProp_OldHolyAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_HolyAttack", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::MSAttributeSet_eventOnRep_HolyAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::MSAttributeSet_eventOnRep_HolyAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_HolyAttack)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHolyAttack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HolyAttack(Z_Param_Out_OldHolyAttack);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_HolyAttack

// Begin Class UMSAttributeSet Function OnRep_HolyRes
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics
{
	struct MSAttributeSet_eventOnRep_HolyRes_Parms
	{
		FGameplayAttributeData OldHolyRes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  HolyRes\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HolyRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHolyRes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHolyRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::NewProp_OldHolyRes = { "OldHolyRes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_HolyRes_Parms, OldHolyRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHolyRes_MetaData), NewProp_OldHolyRes_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::NewProp_OldHolyRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_HolyRes", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::MSAttributeSet_eventOnRep_HolyRes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::MSAttributeSet_eventOnRep_HolyRes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_HolyRes)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHolyRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HolyRes(Z_Param_Out_OldHolyRes);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_HolyRes

// Begin Class UMSAttributeSet Function OnRep_Intelligence
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics
{
	struct MSAttributeSet_eventOnRep_Intelligence_Parms
	{
		FGameplayAttributeData OldIntelligence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Intelligence\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intelligence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldIntelligence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldIntelligence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence = { "OldIntelligence", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Intelligence_Parms, OldIntelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldIntelligence_MetaData), NewProp_OldIntelligence_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::NewProp_OldIntelligence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Intelligence", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::MSAttributeSet_eventOnRep_Intelligence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::MSAttributeSet_eventOnRep_Intelligence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Intelligence)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldIntelligence);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Intelligence(Z_Param_Out_OldIntelligence);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Intelligence

// Begin Class UMSAttributeSet Function OnRep_Karma
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics
{
	struct MSAttributeSet_eventOnRep_Karma_Parms
	{
		FGameplayAttributeData OldKarma;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Karma\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Karma" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldKarma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldKarma;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::NewProp_OldKarma = { "OldKarma", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Karma_Parms, OldKarma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldKarma_MetaData), NewProp_OldKarma_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::NewProp_OldKarma,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Karma", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::MSAttributeSet_eventOnRep_Karma_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::MSAttributeSet_eventOnRep_Karma_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Karma)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldKarma);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Karma(Z_Param_Out_OldKarma);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Karma

// Begin Class UMSAttributeSet Function OnRep_Magic
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics
{
	struct MSAttributeSet_eventOnRep_Magic_Parms
	{
		FGameplayAttributeData OldMagic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Magic\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMagic_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMagic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::NewProp_OldMagic = { "OldMagic", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Magic_Parms, OldMagic), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMagic_MetaData), NewProp_OldMagic_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::NewProp_OldMagic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Magic", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::MSAttributeSet_eventOnRep_Magic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::MSAttributeSet_eventOnRep_Magic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Magic)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMagic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Magic(Z_Param_Out_OldMagic);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Magic

// Begin Class UMSAttributeSet Function OnRep_Mana
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics
{
	struct MSAttributeSet_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mana\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::MSAttributeSet_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::MSAttributeSet_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Mana

// Begin Class UMSAttributeSet Function OnRep_ManaRegen
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics
{
	struct MSAttributeSet_eventOnRep_ManaRegen_Parms
	{
		FGameplayAttributeData OldManaRegen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  ManaRegen\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ManaRegen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldManaRegen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldManaRegen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldManaRegen = { "OldManaRegen", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_ManaRegen_Parms, OldManaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldManaRegen_MetaData), NewProp_OldManaRegen_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::NewProp_OldManaRegen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_ManaRegen", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::MSAttributeSet_eventOnRep_ManaRegen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::MSAttributeSet_eventOnRep_ManaRegen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_ManaRegen)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ManaRegen(Z_Param_Out_OldManaRegen);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_ManaRegen

// Begin Class UMSAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics
{
	struct MSAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  MaxHealth\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxHealth" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::MSAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::MSAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_MaxHealth

// Begin Class UMSAttributeSet Function OnRep_MaxMana
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics
{
	struct MSAttributeSet_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  MaxMana\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxMana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::MSAttributeSet_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::MSAttributeSet_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_MaxMana

// Begin Class UMSAttributeSet Function OnRep_Money
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics
{
	struct MSAttributeSet_eventOnRep_Money_Parms
	{
		FGameplayAttributeData OldMoney;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Character Info REP Notifies ----------------- */// Money\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Character Info REP Notifies ----------------- // Money" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMoney_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMoney;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::NewProp_OldMoney = { "OldMoney", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Money_Parms, OldMoney), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMoney_MetaData), NewProp_OldMoney_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::NewProp_OldMoney,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Money", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::MSAttributeSet_eventOnRep_Money_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::MSAttributeSet_eventOnRep_Money_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Money()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Money_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Money)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMoney);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Money(Z_Param_Out_OldMoney);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Money

// Begin Class UMSAttributeSet Function OnRep_PhysicalRes
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics
{
	struct MSAttributeSet_eventOnRep_PhysicalRes_Parms
	{
		FGameplayAttributeData OldPhysicalRes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Damage Modifiers Attributes REP Notifies --------------------------------------- *///  PhysicalRes\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Damage Modifiers Attributes REP Notifies --------------------------------------- //  PhysicalRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldPhysicalRes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldPhysicalRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::NewProp_OldPhysicalRes = { "OldPhysicalRes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_PhysicalRes_Parms, OldPhysicalRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldPhysicalRes_MetaData), NewProp_OldPhysicalRes_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::NewProp_OldPhysicalRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_PhysicalRes", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::MSAttributeSet_eventOnRep_PhysicalRes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::MSAttributeSet_eventOnRep_PhysicalRes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_PhysicalRes)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldPhysicalRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PhysicalRes(Z_Param_Out_OldPhysicalRes);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_PhysicalRes

// Begin Class UMSAttributeSet Function OnRep_ShockRes
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics
{
	struct MSAttributeSet_eventOnRep_ShockRes_Parms
	{
		FGameplayAttributeData OldShockRes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  ShockRes\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ShockRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldShockRes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldShockRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::NewProp_OldShockRes = { "OldShockRes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_ShockRes_Parms, OldShockRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldShockRes_MetaData), NewProp_OldShockRes_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::NewProp_OldShockRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_ShockRes", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::MSAttributeSet_eventOnRep_ShockRes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::MSAttributeSet_eventOnRep_ShockRes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_ShockRes)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldShockRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ShockRes(Z_Param_Out_OldShockRes);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_ShockRes

// Begin Class UMSAttributeSet Function OnRep_Strength
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics
{
	struct MSAttributeSet_eventOnRep_Strength_Parms
	{
		FGameplayAttributeData OldStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Primary Attribute REP Notifies ----------------- *///  Strength\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Primary Attribute REP Notifies ----------------- //  Strength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength = { "OldStrength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Strength_Parms, OldStrength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStrength_MetaData), NewProp_OldStrength_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::NewProp_OldStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Strength", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::MSAttributeSet_eventOnRep_Strength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::MSAttributeSet_eventOnRep_Strength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Strength)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Strength(Z_Param_Out_OldStrength);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Strength

// Begin Class UMSAttributeSet Function OnRep_WaterRes
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics
{
	struct MSAttributeSet_eventOnRep_WaterRes_Parms
	{
		FGameplayAttributeData OldWaterRes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  WaterRes\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WaterRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldWaterRes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldWaterRes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::NewProp_OldWaterRes = { "OldWaterRes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_WaterRes_Parms, OldWaterRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldWaterRes_MetaData), NewProp_OldWaterRes_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::NewProp_OldWaterRes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_WaterRes", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::MSAttributeSet_eventOnRep_WaterRes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::MSAttributeSet_eventOnRep_WaterRes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_WaterRes)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldWaterRes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WaterRes(Z_Param_Out_OldWaterRes);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_WaterRes

// Begin Class UMSAttributeSet Function OnRep_Wisdom
struct Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics
{
	struct MSAttributeSet_eventOnRep_Wisdom_Parms
	{
		FGameplayAttributeData OldWisdom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  Wisdom\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wisdom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldWisdom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldWisdom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::NewProp_OldWisdom = { "OldWisdom", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSAttributeSet_eventOnRep_Wisdom_Parms, OldWisdom), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldWisdom_MetaData), NewProp_OldWisdom_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::NewProp_OldWisdom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSAttributeSet, nullptr, "OnRep_Wisdom", nullptr, nullptr, Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::MSAttributeSet_eventOnRep_Wisdom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::MSAttributeSet_eventOnRep_Wisdom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSAttributeSet::execOnRep_Wisdom)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldWisdom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Wisdom(Z_Param_Out_OldWisdom);
	P_NATIVE_END;
}
// End Class UMSAttributeSet Function OnRep_Wisdom

// Begin Class UMSAttributeSet
void UMSAttributeSet::StaticRegisterNativesUMSAttributeSet()
{
	UClass* Class = UMSAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_ArmorPen", &UMSAttributeSet::execOnRep_ArmorPen },
		{ "OnRep_Attack", &UMSAttributeSet::execOnRep_Attack },
		{ "OnRep_BlockChance", &UMSAttributeSet::execOnRep_BlockChance },
		{ "OnRep_Charisma", &UMSAttributeSet::execOnRep_Charisma },
		{ "OnRep_Constitution", &UMSAttributeSet::execOnRep_Constitution },
		{ "OnRep_CritDef", &UMSAttributeSet::execOnRep_CritDef },
		{ "OnRep_CritHitChance", &UMSAttributeSet::execOnRep_CritHitChance },
		{ "OnRep_CritHitX", &UMSAttributeSet::execOnRep_CritHitX },
		{ "OnRep_DarkAttack", &UMSAttributeSet::execOnRep_DarkAttack },
		{ "OnRep_DarkRes", &UMSAttributeSet::execOnRep_DarkRes },
		{ "OnRep_Dexterity", &UMSAttributeSet::execOnRep_Dexterity },
		{ "OnRep_Dodge", &UMSAttributeSet::execOnRep_Dodge },
		{ "OnRep_EarthRes", &UMSAttributeSet::execOnRep_EarthRes },
		{ "OnRep_FireRes", &UMSAttributeSet::execOnRep_FireRes },
		{ "OnRep_Health", &UMSAttributeSet::execOnRep_Health },
		{ "OnRep_HealthRegen", &UMSAttributeSet::execOnRep_HealthRegen },
		{ "OnRep_HolyAttack", &UMSAttributeSet::execOnRep_HolyAttack },
		{ "OnRep_HolyRes", &UMSAttributeSet::execOnRep_HolyRes },
		{ "OnRep_Intelligence", &UMSAttributeSet::execOnRep_Intelligence },
		{ "OnRep_Karma", &UMSAttributeSet::execOnRep_Karma },
		{ "OnRep_Magic", &UMSAttributeSet::execOnRep_Magic },
		{ "OnRep_Mana", &UMSAttributeSet::execOnRep_Mana },
		{ "OnRep_ManaRegen", &UMSAttributeSet::execOnRep_ManaRegen },
		{ "OnRep_MaxHealth", &UMSAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxMana", &UMSAttributeSet::execOnRep_MaxMana },
		{ "OnRep_Money", &UMSAttributeSet::execOnRep_Money },
		{ "OnRep_PhysicalRes", &UMSAttributeSet::execOnRep_PhysicalRes },
		{ "OnRep_ShockRes", &UMSAttributeSet::execOnRep_ShockRes },
		{ "OnRep_Strength", &UMSAttributeSet::execOnRep_Strength },
		{ "OnRep_WaterRes", &UMSAttributeSet::execOnRep_WaterRes },
		{ "OnRep_Wisdom", &UMSAttributeSet::execOnRep_Wisdom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSAttributeSet);
UClass* Z_Construct_UClass_UMSAttributeSet_NoRegister()
{
	return UMSAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UMSAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Primary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Primary Attribute -----------------Loads 1st---------------------- */// Strength \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Primary Attribute -----------------Loads 1st---------------------- // Strength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "Primary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Intelligence \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intelligence" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "Primary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dexterity \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dexterity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wisdom_MetaData[] = {
		{ "Category", "Primary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wisdom \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wisdom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constitution_MetaData[] = {
		{ "Category", "Primary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Constitution \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constitution" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[] = {
		{ "Category", "Primary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Charisma \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Charisma" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Karma_MetaData[] = {
		{ "Category", "Primary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Karma \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Karma" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Vitals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Vital Attribute  ---------------Loads 2nd------------------------ *///  Health \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Vital Attribute  ---------------Loads 2nd------------------------ //  Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Vitals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mana\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vitals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Health \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Vitals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Mana\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Mana" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[] = {
		{ "Category", "Damage Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Attack \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[] = {
		{ "Category", "Damage Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Magic \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Magic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolyAttack_MetaData[] = {
		{ "Category", "Damage Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  HolyAttack\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HolyAttack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarkAttack_MetaData[] = {
		{ "Category", "Damage Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  DarkAttack\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DarkAttack" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorPen_MetaData[] = {
		{ "Category", "Damage Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Damage Modifiers Attributes  --------------------------------------- */// ArmorPen \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Damage Modifiers Attributes  --------------------------------------- // ArmorPen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritHitChance_MetaData[] = {
		{ "Category", "Damage Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CritHitChance \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritHitChance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritHitX_MetaData[] = {
		{ "Category", "Damage Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CritHitX \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritHitX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[] = {
		{ "Category", "Damage Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlockChance \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlockChance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritDef_MetaData[] = {
		{ "Category", "Damage Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CritDef \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CritDef" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dodge_MetaData[] = {
		{ "Category", "Damage Modifiers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dodge \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dodge" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalRes_MetaData[] = {
		{ "Category", "Secondary" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Damage Resistances Attributes  --------------------------------------- */// Armor \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Damage Resistances Attributes  --------------------------------------- // Armor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRes_MetaData[] = {
		{ "Category", "Damage Resistances" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FireRes \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FireRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShockRes_MetaData[] = {
		{ "Category", "Damage Resistances" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ShockRes \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ShockRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterRes_MetaData[] = {
		{ "Category", "Damage Resistances" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WaterRes \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WaterRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarthRes_MetaData[] = {
		{ "Category", "Damage Resistances" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// EarthRes \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EarthRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HolyRes_MetaData[] = {
		{ "Category", "Damage Resistances" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HolyRes \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HolyRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DarkRes_MetaData[] = {
		{ "Category", "Damage Resistances" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DarkRes \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DarkRes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegen_MetaData[] = {
		{ "Category", "Regen Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Regen Attributes  --------------------------------------- */// HealthRegen \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Regen Attributes  --------------------------------------- // HealthRegen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegen_MetaData[] = {
		{ "Category", "Regen Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ManaRegen \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ManaRegen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Money_MetaData[] = {
		{ "Category", "Character Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Character Info ----------------- */// Money \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Character Info ----------------- // Money" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDamage_MetaData[] = {
		{ "Category", "Meta Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ----------------- Meta Attributes Attributes  --------------------------------------- */// Incoming Damage \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------- Meta Attributes Attributes  --------------------------------------- // Incoming Damage" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterExperience_MetaData[] = {
		{ "Category", "Meta Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Character Experience \n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/Attributes/MSAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Experience" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wisdom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constitution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Charisma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Karma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Magic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HolyAttack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DarkAttack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorPen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritHitChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritHitX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritDef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dodge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalRes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FireRes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShockRes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaterRes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EarthRes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HolyRes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DarkRes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManaRegen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Money;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_ArmorPen, "OnRep_ArmorPen" }, // 720457468
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Attack, "OnRep_Attack" }, // 2620296165
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_BlockChance, "OnRep_BlockChance" }, // 2785925330
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Charisma, "OnRep_Charisma" }, // 225906134
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Constitution, "OnRep_Constitution" }, // 3521302181
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_CritDef, "OnRep_CritDef" }, // 1981365166
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitChance, "OnRep_CritHitChance" }, // 1231368307
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_CritHitX, "OnRep_CritHitX" }, // 2444924698
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkAttack, "OnRep_DarkAttack" }, // 4063790871
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_DarkRes, "OnRep_DarkRes" }, // 4055481188
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Dexterity, "OnRep_Dexterity" }, // 951650254
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Dodge, "OnRep_Dodge" }, // 2510729621
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_EarthRes, "OnRep_EarthRes" }, // 1397816167
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_FireRes, "OnRep_FireRes" }, // 766276969
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Health, "OnRep_Health" }, // 1402119746
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_HealthRegen, "OnRep_HealthRegen" }, // 732572831
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyAttack, "OnRep_HolyAttack" }, // 4005856337
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_HolyRes, "OnRep_HolyRes" }, // 1917295910
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Intelligence, "OnRep_Intelligence" }, // 2429472532
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Karma, "OnRep_Karma" }, // 1724519229
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Magic, "OnRep_Magic" }, // 2325971586
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 3150979770
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_ManaRegen, "OnRep_ManaRegen" }, // 470970516
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 1238225032
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 2416540369
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Money, "OnRep_Money" }, // 1587961030
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_PhysicalRes, "OnRep_PhysicalRes" }, // 2384188258
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_ShockRes, "OnRep_ShockRes" }, // 2845464043
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Strength, "OnRep_Strength" }, // 1769910923
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_WaterRes, "OnRep_WaterRes" }, // 1884880932
		{ &Z_Construct_UFunction_UMSAttributeSet_OnRep_Wisdom, "OnRep_Wisdom" }, // 3108572738
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Strength = { "Strength", "OnRep_Strength", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Intelligence = { "Intelligence", "OnRep_Intelligence", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Intelligence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Dexterity = { "Dexterity", "OnRep_Dexterity", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Dexterity), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Wisdom = { "Wisdom", "OnRep_Wisdom", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Wisdom), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wisdom_MetaData), NewProp_Wisdom_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Constitution = { "Constitution", "OnRep_Constitution", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Constitution), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constitution_MetaData), NewProp_Constitution_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Charisma = { "Charisma", "OnRep_Charisma", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Charisma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charisma_MetaData), NewProp_Charisma_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Karma = { "Karma", "OnRep_Karma", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Karma), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Karma_MetaData), NewProp_Karma_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Attack = { "Attack", "OnRep_Attack", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Attack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attack_MetaData), NewProp_Attack_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Magic = { "Magic", "OnRep_Magic", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Magic), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magic_MetaData), NewProp_Magic_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_HolyAttack = { "HolyAttack", "OnRep_HolyAttack", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, HolyAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolyAttack_MetaData), NewProp_HolyAttack_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_DarkAttack = { "DarkAttack", "OnRep_DarkAttack", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, DarkAttack), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarkAttack_MetaData), NewProp_DarkAttack_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_ArmorPen = { "ArmorPen", "OnRep_ArmorPen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, ArmorPen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorPen_MetaData), NewProp_ArmorPen_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_CritHitChance = { "CritHitChance", "OnRep_CritHitChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, CritHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritHitChance_MetaData), NewProp_CritHitChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_CritHitX = { "CritHitX", "OnRep_CritHitX", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, CritHitX), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritHitX_MetaData), NewProp_CritHitX_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_BlockChance = { "BlockChance", "OnRep_BlockChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, BlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockChance_MetaData), NewProp_BlockChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_CritDef = { "CritDef", "OnRep_CritDef", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, CritDef), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritDef_MetaData), NewProp_CritDef_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Dodge = { "Dodge", "OnRep_Dodge", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Dodge), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dodge_MetaData), NewProp_Dodge_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_PhysicalRes = { "PhysicalRes", "OnRep_PhysicalRes", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, PhysicalRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalRes_MetaData), NewProp_PhysicalRes_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_FireRes = { "FireRes", "OnRep_FireRes", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, FireRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRes_MetaData), NewProp_FireRes_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_ShockRes = { "ShockRes", "OnRep_ShockRes", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, ShockRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShockRes_MetaData), NewProp_ShockRes_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_WaterRes = { "WaterRes", "OnRep_WaterRes", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, WaterRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterRes_MetaData), NewProp_WaterRes_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_EarthRes = { "EarthRes", "OnRep_EarthRes", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, EarthRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarthRes_MetaData), NewProp_EarthRes_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_HolyRes = { "HolyRes", "OnRep_HolyRes", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, HolyRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HolyRes_MetaData), NewProp_HolyRes_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_DarkRes = { "DarkRes", "OnRep_DarkRes", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, DarkRes), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DarkRes_MetaData), NewProp_DarkRes_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_HealthRegen = { "HealthRegen", "OnRep_HealthRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, HealthRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegen_MetaData), NewProp_HealthRegen_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_ManaRegen = { "ManaRegen", "OnRep_ManaRegen", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, ManaRegen), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegen_MetaData), NewProp_ManaRegen_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Money = { "Money", "OnRep_Money", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, Money), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Money_MetaData), NewProp_Money_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_IncomingDamage = { "IncomingDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, IncomingDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingDamage_MetaData), NewProp_IncomingDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_CharacterExperience = { "CharacterExperience", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAttributeSet, CharacterExperience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterExperience_MetaData), NewProp_CharacterExperience_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Intelligence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Wisdom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Constitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Charisma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Karma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Magic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_HolyAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_DarkAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_ArmorPen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_CritHitChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_CritHitX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_BlockChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_CritDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Dodge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_PhysicalRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_FireRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_ShockRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_WaterRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_EarthRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_HolyRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_DarkRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_HealthRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_ManaRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_Money,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_IncomingDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAttributeSet_Statics::NewProp_CharacterExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSAttributeSet_Statics::ClassParams = {
	&UMSAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMSAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSAttributeSet()
{
	if (!Z_Registration_Info_UClass_UMSAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSAttributeSet.OuterSingleton, Z_Construct_UClass_UMSAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSAttributeSet.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSAttributeSet>()
{
	return UMSAttributeSet::StaticClass();
}
void UMSAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Strength(TEXT("Strength"));
	static const FName Name_Intelligence(TEXT("Intelligence"));
	static const FName Name_Dexterity(TEXT("Dexterity"));
	static const FName Name_Wisdom(TEXT("Wisdom"));
	static const FName Name_Constitution(TEXT("Constitution"));
	static const FName Name_Charisma(TEXT("Charisma"));
	static const FName Name_Karma(TEXT("Karma"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_Mana(TEXT("Mana"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_MaxMana(TEXT("MaxMana"));
	static const FName Name_Attack(TEXT("Attack"));
	static const FName Name_Magic(TEXT("Magic"));
	static const FName Name_HolyAttack(TEXT("HolyAttack"));
	static const FName Name_DarkAttack(TEXT("DarkAttack"));
	static const FName Name_ArmorPen(TEXT("ArmorPen"));
	static const FName Name_CritHitChance(TEXT("CritHitChance"));
	static const FName Name_CritHitX(TEXT("CritHitX"));
	static const FName Name_BlockChance(TEXT("BlockChance"));
	static const FName Name_CritDef(TEXT("CritDef"));
	static const FName Name_Dodge(TEXT("Dodge"));
	static const FName Name_PhysicalRes(TEXT("PhysicalRes"));
	static const FName Name_FireRes(TEXT("FireRes"));
	static const FName Name_ShockRes(TEXT("ShockRes"));
	static const FName Name_WaterRes(TEXT("WaterRes"));
	static const FName Name_EarthRes(TEXT("EarthRes"));
	static const FName Name_HolyRes(TEXT("HolyRes"));
	static const FName Name_DarkRes(TEXT("DarkRes"));
	static const FName Name_HealthRegen(TEXT("HealthRegen"));
	static const FName Name_ManaRegen(TEXT("ManaRegen"));
	static const FName Name_Money(TEXT("Money"));
	const bool bIsValid = true
		&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
		&& Name_Intelligence == ClassReps[(int32)ENetFields_Private::Intelligence].Property->GetFName()
		&& Name_Dexterity == ClassReps[(int32)ENetFields_Private::Dexterity].Property->GetFName()
		&& Name_Wisdom == ClassReps[(int32)ENetFields_Private::Wisdom].Property->GetFName()
		&& Name_Constitution == ClassReps[(int32)ENetFields_Private::Constitution].Property->GetFName()
		&& Name_Charisma == ClassReps[(int32)ENetFields_Private::Charisma].Property->GetFName()
		&& Name_Karma == ClassReps[(int32)ENetFields_Private::Karma].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
		&& Name_Attack == ClassReps[(int32)ENetFields_Private::Attack].Property->GetFName()
		&& Name_Magic == ClassReps[(int32)ENetFields_Private::Magic].Property->GetFName()
		&& Name_HolyAttack == ClassReps[(int32)ENetFields_Private::HolyAttack].Property->GetFName()
		&& Name_DarkAttack == ClassReps[(int32)ENetFields_Private::DarkAttack].Property->GetFName()
		&& Name_ArmorPen == ClassReps[(int32)ENetFields_Private::ArmorPen].Property->GetFName()
		&& Name_CritHitChance == ClassReps[(int32)ENetFields_Private::CritHitChance].Property->GetFName()
		&& Name_CritHitX == ClassReps[(int32)ENetFields_Private::CritHitX].Property->GetFName()
		&& Name_BlockChance == ClassReps[(int32)ENetFields_Private::BlockChance].Property->GetFName()
		&& Name_CritDef == ClassReps[(int32)ENetFields_Private::CritDef].Property->GetFName()
		&& Name_Dodge == ClassReps[(int32)ENetFields_Private::Dodge].Property->GetFName()
		&& Name_PhysicalRes == ClassReps[(int32)ENetFields_Private::PhysicalRes].Property->GetFName()
		&& Name_FireRes == ClassReps[(int32)ENetFields_Private::FireRes].Property->GetFName()
		&& Name_ShockRes == ClassReps[(int32)ENetFields_Private::ShockRes].Property->GetFName()
		&& Name_WaterRes == ClassReps[(int32)ENetFields_Private::WaterRes].Property->GetFName()
		&& Name_EarthRes == ClassReps[(int32)ENetFields_Private::EarthRes].Property->GetFName()
		&& Name_HolyRes == ClassReps[(int32)ENetFields_Private::HolyRes].Property->GetFName()
		&& Name_DarkRes == ClassReps[(int32)ENetFields_Private::DarkRes].Property->GetFName()
		&& Name_HealthRegen == ClassReps[(int32)ENetFields_Private::HealthRegen].Property->GetFName()
		&& Name_ManaRegen == ClassReps[(int32)ENetFields_Private::ManaRegen].Property->GetFName()
		&& Name_Money == ClassReps[(int32)ENetFields_Private::Money].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMSAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSAttributeSet);
UMSAttributeSet::~UMSAttributeSet() {}
// End Class UMSAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEffectProperties::StaticStruct, Z_Construct_UScriptStruct_FEffectProperties_Statics::NewStructOps, TEXT("EffectProperties"), &Z_Registration_Info_UScriptStruct_EffectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEffectProperties), 2584415226U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSAttributeSet, UMSAttributeSet::StaticClass, TEXT("UMSAttributeSet"), &Z_Registration_Info_UClass_UMSAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSAttributeSet), 2133947656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_331653414(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
