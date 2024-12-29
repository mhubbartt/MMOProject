// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Attributes/MSAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef MMOSYSTEM_MSAttributeSet_generated_h
#error "MSAttributeSet.generated.h already included, missing '#pragma once' in MSAttributeSet.h"
#endif
#define MMOSYSTEM_MSAttributeSet_generated_h

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEffectProperties_Statics; \
	MMOSYSTEM_API static class UScriptStruct* StaticStruct();


template<> MMOSYSTEM_API UScriptStruct* StaticStruct<struct FEffectProperties>();

#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Money); \
	DECLARE_FUNCTION(execOnRep_ManaRegen); \
	DECLARE_FUNCTION(execOnRep_HealthRegen); \
	DECLARE_FUNCTION(execOnRep_DarkRes); \
	DECLARE_FUNCTION(execOnRep_HolyRes); \
	DECLARE_FUNCTION(execOnRep_EarthRes); \
	DECLARE_FUNCTION(execOnRep_WaterRes); \
	DECLARE_FUNCTION(execOnRep_ShockRes); \
	DECLARE_FUNCTION(execOnRep_FireRes); \
	DECLARE_FUNCTION(execOnRep_PhysicalRes); \
	DECLARE_FUNCTION(execOnRep_CritDef); \
	DECLARE_FUNCTION(execOnRep_Dodge); \
	DECLARE_FUNCTION(execOnRep_BlockChance); \
	DECLARE_FUNCTION(execOnRep_CritHitX); \
	DECLARE_FUNCTION(execOnRep_CritHitChance); \
	DECLARE_FUNCTION(execOnRep_ArmorPen); \
	DECLARE_FUNCTION(execOnRep_DarkAttack); \
	DECLARE_FUNCTION(execOnRep_HolyAttack); \
	DECLARE_FUNCTION(execOnRep_Magic); \
	DECLARE_FUNCTION(execOnRep_Attack); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_Karma); \
	DECLARE_FUNCTION(execOnRep_Charisma); \
	DECLARE_FUNCTION(execOnRep_Constitution); \
	DECLARE_FUNCTION(execOnRep_Wisdom); \
	DECLARE_FUNCTION(execOnRep_Dexterity); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Strength);


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSAttributeSet(); \
	friend struct Z_Construct_UClass_UMSAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMSAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MmoSystem"), NO_API) \
	DECLARE_SERIALIZER(UMSAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Strength=NETFIELD_REP_START, \
		Intelligence, \
		Dexterity, \
		Wisdom, \
		Constitution, \
		Charisma, \
		Karma, \
		Health, \
		Mana, \
		MaxHealth, \
		MaxMana, \
		Attack, \
		Magic, \
		HolyAttack, \
		DarkAttack, \
		ArmorPen, \
		CritHitChance, \
		CritHitX, \
		BlockChance, \
		CritDef, \
		Dodge, \
		PhysicalRes, \
		FireRes, \
		ShockRes, \
		WaterRes, \
		EarthRes, \
		HolyRes, \
		DarkRes, \
		HealthRegen, \
		ManaRegen, \
		Money, \
		NETFIELD_REP_END=Money	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMSAttributeSet) \
public:


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMSAttributeSet(UMSAttributeSet&&); \
	UMSAttributeSet(const UMSAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMSAttributeSet) \
	NO_API virtual ~UMSAttributeSet();


#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_60_PROLOG
#define FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_63_INCLASS_NO_PURE_DECLS \
	FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MMOSYSTEM_API UClass* StaticClass<class UMSAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AbilitySystem_Attributes_MSAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
