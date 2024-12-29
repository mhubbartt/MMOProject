// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "MSAttributeSet.generated.h"



#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


USTRUCT()
struct FEffectProperties
{
	GENERATED_BODY()

	FEffectProperties() {}

	FGameplayEffectContextHandle EffectContextHandle;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> SourceASC = nullptr;

	UPROPERTY()
	TObjectPtr<AActor> SourceAvatarActor = nullptr;

	UPROPERTY()
	TObjectPtr<AController> SourceController = nullptr;
	
	UPROPERTY()
	TObjectPtr<ACharacter> SourceCharacter = nullptr;

	UPROPERTY()
	TObjectPtr<AActor> TargetAvatarActor = nullptr;

	UPROPERTY()
	TObjectPtr<AController> TargetController = nullptr;

	UPROPERTY()
	TObjectPtr<ACharacter> TargetCharacter = nullptr;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> TargetASC = nullptr;
	
	
};



/**
 * 
 */
UCLASS()
class MMOSYSTEM_API UMSAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UMSAttributeSet();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	TMap<FGameplayTag, FGameplayAttribute(*)()> TagsToAttributes;

	



	
	

/* ----------------- Primary Attribute -----------------Loads 1st---------------------- */

	// Strength 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Strength,  Category="Primary")
	FGameplayAttributeData Strength;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Strength);

	// Intelligence 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Intelligence, Category="Primary")
	FGameplayAttributeData Intelligence;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Intelligence);

	// Dexterity 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Dexterity, Category="Primary")
	FGameplayAttributeData Dexterity;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Dexterity);

	// Wisdom 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Wisdom, Category="Primary")
	FGameplayAttributeData Wisdom;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Wisdom);

	// Constitution 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Constitution, Category="Primary")
	FGameplayAttributeData Constitution;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Constitution);

	// Charisma 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Charisma, Category="Primary")
	FGameplayAttributeData Charisma;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Charisma);

	// Karma 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Karma, Category="Primary")
	FGameplayAttributeData Karma;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Karma);

	

/* ----------------- Vital Attribute  ---------------Loads 2nd------------------------ */ 

	//  Health 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category="Vitals")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Health);

	// Mana
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Mana, Category = "Vitals")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Mana);

	// Max Stat Attributes

	// Max Health 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth, Category = "Vitals")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, MaxHealth);

	// Max Mana
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMana, Category = "Vitals")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, MaxMana);


/* ----------------- Secondary Attributes  ------------------Loads 3rd--------------------- */
	





	
    // Damage Attributes Attributes



	// Attack 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Attack, Category="Damage Attributes")
	FGameplayAttributeData Attack;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Attack);
	
	// Magic 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Magic, Category="Damage Attributes")
	FGameplayAttributeData Magic;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Magic);
	
	//  HolyAttack
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_HolyAttack, Category = "Damage Attributes")
	FGameplayAttributeData HolyAttack;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, HolyAttack);

	//  DarkAttack
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DarkAttack, Category = "Damage Attributes")
	FGameplayAttributeData DarkAttack;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, DarkAttack);
	
	
	



	/* ----------------- Damage Modifiers Attributes  --------------------------------------- */

	// ArmorPen 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ArmorPen, Category="Damage Modifiers")
	FGameplayAttributeData ArmorPen;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, ArmorPen);

	// CritHitChance 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CritHitChance, Category="Damage Modifiers")
	FGameplayAttributeData CritHitChance;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, CritHitChance);

	// CritHitX 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CritHitX, Category="Damage Modifiers")
	FGameplayAttributeData CritHitX;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, CritHitX);

	// BlockChance 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BlockChance, Category="Damage Modifiers")
	FGameplayAttributeData BlockChance;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, BlockChance);


	// CritDef 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CritDef, Category="Damage Modifiers")
	FGameplayAttributeData CritDef;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, CritDef);

	// Dodge 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Dodge, Category="Damage Modifiers")
	FGameplayAttributeData Dodge;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Dodge);


	/* ----------------- Damage Resistances Attributes  --------------------------------------- */

	// Armor 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_PhysicalRes, Category="Secondary")
	FGameplayAttributeData PhysicalRes;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, PhysicalRes);

	// FireRes 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_FireRes, Category="Damage Resistances")
	FGameplayAttributeData FireRes;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, FireRes);

	// ShockRes 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ShockRes, Category="Damage Resistances")
	FGameplayAttributeData ShockRes;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, ShockRes);

	// WaterRes 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_WaterRes, Category="Damage Resistances")
	FGameplayAttributeData WaterRes;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, WaterRes);

	// EarthRes 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_EarthRes, Category="Damage Resistances")
	FGameplayAttributeData EarthRes;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, EarthRes);

	// HolyRes 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_HolyRes, Category="Damage Resistances")
	FGameplayAttributeData HolyRes;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, HolyRes);

	// DarkRes 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_DarkRes, Category="Damage Resistances")
	FGameplayAttributeData DarkRes;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, DarkRes);
	


	/* ----------------- Regen Attributes  --------------------------------------- */
	
	// HealthRegen 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_HealthRegen, Category="Regen Attributes")
	FGameplayAttributeData HealthRegen;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, HealthRegen);
	
	// ManaRegen 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ManaRegen, Category="Regen Attributes")
	FGameplayAttributeData ManaRegen;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, ManaRegen);

	

	/* ----------------- Character Info ----------------- */

	// Money 
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Money, Category="Character Info")
	FGameplayAttributeData Money;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, Money);



	/* ----------------- Meta Attributes Attributes  --------------------------------------- */
	// Incoming Damage 
	UPROPERTY(BlueprintReadOnly,  Category = "Meta Attributes")
	FGameplayAttributeData IncomingDamage;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, IncomingDamage);

	// Character Experience 
	UPROPERTY(BlueprintReadOnly,Category="Meta Attributes")
	FGameplayAttributeData CharacterExperience;
	ATTRIBUTE_ACCESSORS(UMSAttributeSet, CharacterExperience);	

	



	

	

/* -------------------------------------- Attribute REP Notifies Functions -------------------------------------- */
	



	/* ----------------- Primary Attribute REP Notifies ----------------- */

	
	//  Strength
	UFUNCTION()
	void OnRep_Strength(const FGameplayAttributeData& OldStrength) const;

	//  Intelligence
	UFUNCTION()
	void OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence) const;

	//  Dexterity
	UFUNCTION()
	void OnRep_Dexterity(const FGameplayAttributeData& OldAgility) const;

	//  Wisdom
	UFUNCTION()
	void OnRep_Wisdom(const FGameplayAttributeData& OldWisdom) const;

	//  Constitution
	UFUNCTION()
	void OnRep_Constitution(const FGameplayAttributeData& OldConstitution) const;

	//  Charisma
	UFUNCTION()
	void OnRep_Charisma(const FGameplayAttributeData& OldCharisma) const;

	//  Karma
	UFUNCTION()
	void OnRep_Karma(const FGameplayAttributeData& OldKarma) const;	





	/* ----------------- Vital Attribute REP Notifies ----------------- */

	// Health
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;

	// Mana
	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldMana) const;

	//  MaxHealth
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	//  MaxMana
	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const;





	/* ----------------- Secondary Attribute REP Notifies ----------------- */




	//  Attack
	UFUNCTION()
	void OnRep_Attack(const FGameplayAttributeData& OldAttack) const;

	//  Magic
	UFUNCTION()
	void OnRep_Magic(const FGameplayAttributeData& OldMagic) const;

	//  HolyAttack
	UFUNCTION()
	void OnRep_HolyAttack(const FGameplayAttributeData& OldHolyAttack) const;

	// DarkAttack
	UFUNCTION()
	void OnRep_DarkAttack(const FGameplayAttributeData& OldDarkAttack) const;


	/* ----------------- Damage Modifiers REP Notifies --------------------------------------- */
	// ArmorPen
	UFUNCTION()
	void OnRep_ArmorPen(const FGameplayAttributeData& OldArmorPen) const;

	// CritHitChance
	UFUNCTION()
	void OnRep_CritHitChance(const FGameplayAttributeData& OldCritHitChance) const;

	// CritHitX
	UFUNCTION()
	void OnRep_CritHitX(const FGameplayAttributeData& OldCritHitX) const;

	// BlockChance
	UFUNCTION()
	void OnRep_BlockChance(const FGameplayAttributeData& OldBlockChance) const;

	// DodgeChance
	UFUNCTION()
	void OnRep_Dodge(const FGameplayAttributeData& OldDodge) const;

	// CritDef
	UFUNCTION()
	void OnRep_CritDef(const FGameplayAttributeData& OldCritDef) const;

	

	/* ----------------- Damage Modifiers Attributes REP Notifies --------------------------------------- */

	//  PhysicalRes
	UFUNCTION()
	void OnRep_PhysicalRes(const FGameplayAttributeData& OldPhysicalRes) const;
	
	//  FireRes
	UFUNCTION()
	void OnRep_FireRes(const FGameplayAttributeData& OldFireRes) const;

	//  ShockRes
	UFUNCTION()
	void OnRep_ShockRes(const FGameplayAttributeData& OldShockRes) const;

	//  WaterRes
	UFUNCTION()
	void OnRep_WaterRes(const FGameplayAttributeData& OldWaterRes) const;

	//  EarthRes
	UFUNCTION()
	void OnRep_EarthRes(const FGameplayAttributeData& OldEarthRes) const;

	//  HolyRes
	UFUNCTION()
	void OnRep_HolyRes(const FGameplayAttributeData& OldHolyRes) const;

	//  DarkRes
	UFUNCTION()
	void OnRep_DarkRes(const FGameplayAttributeData& OldDarkRes) const;
	

	
	
	/* ----------------- Regen Attributes REP Notifies --------------------------------------- */
	
	//  HealthRegen
	UFUNCTION()
	void OnRep_HealthRegen(const FGameplayAttributeData& OldHealthRegen) const;

	//  ManaRegen
	UFUNCTION()
	void OnRep_ManaRegen(const FGameplayAttributeData& OldManaRegen) const;


	



	/* ----------------- Character Info REP Notifies ----------------- */

	// Money
	UFUNCTION()
	void OnRep_Money(const FGameplayAttributeData& OldMoney) const;

	

private:
	void SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props) const ;

	float GetCritHitXByLevel(int32 Level) ;
	
};



