// Fill out your copyright notice in the Description page of Project Settings.


#include "MSAttributeSet.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GameplayEffectExtension.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"
#include "MmoSystem/GlobalsNTags.h"


using namespace MSGlobal;

UMSAttributeSet::UMSAttributeSet()
{



	

// Primary Attributes
	TagsToAttributes.Add(Attribute_Primary_Charisma, GetCharismaAttribute);
	TagsToAttributes.Add(Attribute_Primary_Constitution, GetConstitutionAttribute);
	TagsToAttributes.Add(Attribute_Primary_Dexterity, GetDexterityAttribute);
	TagsToAttributes.Add(Attribute_Primary_Intelligence, GetIntelligenceAttribute);
	TagsToAttributes.Add(Attribute_Primary_Strength, GetStrengthAttribute);
	TagsToAttributes.Add(Attribute_Primary_Wisdom, GetWisdomAttribute);
	TagsToAttributes.Add(Attribute_Primary_Karma, GetKarmaAttribute);

	

// Vital Attributes
	TagsToAttributes.Add(Attribute_Vital_Health, GetHealthAttribute);
	TagsToAttributes.Add(Attribute_Vital_Mana, GetManaAttribute);
	TagsToAttributes.Add(Attribute_Vital_MaxHealth, GetMaxHealthAttribute);
	TagsToAttributes.Add(Attribute_Vital_MaxMana, GetMaxManaAttribute);

	

// Secondary Attributes

	// Damage Attributes

	TagsToAttributes.Add(Attribute_Damage_Attack, GetAttackAttribute);          
	TagsToAttributes.Add(Attribute_Damage_Magic, GetMagicAttribute);            
	TagsToAttributes.Add(Attribute_Damage_HolyAttack, GetHolyAttackAttribute);  
	TagsToAttributes.Add(Attribute_Damage_DarkAttack, GetDarkAttackAttribute);  


	// Damage Modifiers Attributes
	
	TagsToAttributes.Add(Attribute_DamageModifiers_ArmorPen, GetArmorPenAttribute);
	TagsToAttributes.Add(Attribute_DamageModifiers_CritHitChance, GetCritHitChanceAttribute);
	TagsToAttributes.Add(Attribute_DamageModifiers_CritHitX, GetCritHitXAttribute);
	TagsToAttributes.Add(Attribute_DamageModifiers_CritDef, GetCritDefAttribute);
	TagsToAttributes.Add(Attribute_DamageModifiers_BlockChance, GetBlockChanceAttribute);
	TagsToAttributes.Add(Attribute_DamageModifiers_Dodge, GetDodgeAttribute);
	

	
	// Damage Resistances Attributes

	TagsToAttributes.Add(Attribute_Resistances_PhysicalRes, GetPhysicalResAttribute);
	TagsToAttributes.Add(Attribute_Resistances_HolyRes, GetHolyResAttribute);
	TagsToAttributes.Add(Attribute_Resistances_EarthRes, GetEarthResAttribute);
	TagsToAttributes.Add(Attribute_Resistances_FireRes, GetFireResAttribute);	
	TagsToAttributes.Add(Attribute_Resistances_ShockRes, GetShockResAttribute);
	TagsToAttributes.Add(Attribute_Resistances_WaterRes, GetWaterResAttribute);
	TagsToAttributes.Add(Attribute_Resistances_DarkRes, GetDarkResAttribute);	
	


	

	// Regen Attributes
	TagsToAttributes.Add(Attribute_Regen_HealthRegen, GetHealthRegenAttribute);
	TagsToAttributes.Add(Attribute_Regen_ManaRegen, GetManaRegenAttribute);

	
		
    InitCritHitX(1.5f);
}

void UMSAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	

	// Primary Attributes
	
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Strength, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Intelligence, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Dexterity, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Wisdom, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Constitution, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Charisma, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Karma, COND_None, REPNOTIFY_Always);

	// Vital Attributes	

	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);


	// Secondary Attributes

	  // Damage Attributes
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Attack, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Magic, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, HolyAttack, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, DarkAttack, COND_None, REPNOTIFY_Always);

	  // Damage Modifiers Attributes
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, ArmorPen, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, CritHitChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, CritHitX, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, BlockChance, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, CritDef, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Dodge, COND_None, REPNOTIFY_Always);

	  // Resistances Attributes	
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, PhysicalRes, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, FireRes, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, ShockRes, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, WaterRes, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, EarthRes, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, HolyRes, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, DarkRes, COND_None, REPNOTIFY_Always);


	  // Regen Attributes
	 
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, ManaRegen, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, HealthRegen, COND_None, REPNOTIFY_Always);		

	
	

	  // Character Info
	DOREPLIFETIME_CONDITION_NOTIFY(UMSAttributeSet, Money, COND_None, REPNOTIFY_Always);
	
	
}

void UMSAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);

	// -------------    Health   -------------------
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
	}

	// -------------    Mana   -------------------
	if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxMana());
	}
}

void UMSAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FEffectProperties Props;
	SetEffectProperties(Data,Props);
	

	if (Data.EvaluatedData.Attribute == GetKarmaAttribute())
	{
		SetKarma(	FMath::Clamp(GetKarma(), -10000.f, 10000.f)); 
	}

	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(	FMath::Clamp(GetHealth(), 0.f, GetMaxHealth())); 
	}
	if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(	FMath::Clamp(GetMana(), 0.f, GetMaxMana())); 
	}

/*
	if (Data.EvaluatedData.Attribute == GetIncomingDamageAttribute())
	{
		const float LocalIncomingDamage = GetIncomingDamage();
		SetIncomingDamage(0.f);
		if (LocalIncomingDamage > 0.F)
		{
			const float NewHealth = GetHealth() - LocalIncomingDamage;
			SetHealth(	FMath::Clamp(NewHealth, 0.f, GetMaxHealth()));

			const bool BFatal = NewHealth <= 0.f;

			if (BFatal)
			{
				
				ICombatInterface* CombatInterface = Cast<ICombatInterface>(Props.TargetAvatarActor);
				if (CombatInterface)
				{
					int32 XP = CombatInterface->GetXPAward();
					
					FGameplayEventData Payload;
					Payload.EventTag = CharaterInfo_CharacterExperience;
					Payload.EventMagnitude = XP;
				
					UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(Props.SourceCharacter, CharaterInfo_CharacterExperience, Payload);
					CombatInterface->Die();
				}
			}
			else
			{
				if (Props.TargetASC)
				{
					FGameplayTagContainer Tags;
					Tags.AddTag(Effect_Montage_HitReact);
					Props.TargetASC->TryActivateAbilitiesByTag(Tags);
				}
				
			}
			if ( Props.TargetCharacter)
			{
				for (auto Controller =  GetWorld()->GetControllerIterator(); Controller; ++Controller)
				{
					if (Controller && Cast<AFFGamePlayerController>(*Controller))
					{
						auto EffectContext = static_cast<FFfGameplayEffectContext*>(Props.EffectContextHandle.Get());
						auto bBlocked = EffectContext->IsBlocked();
						auto bCritical = EffectContext->IsCritialHit();
						auto bXP = EffectContext->IsXP();
						const auto DamageText = EffectContext->GetDamageText();
						const auto TextToColor = EffectContext->GetTextToColor();
					
						Cast<AFFGamePlayerController>(*Controller)->ShowDamageText(LocalIncomingDamage,Props.TargetCharacter,bCritical,bBlocked, bXP,DamageText,TextToColor);
					}
				}
			}
		}
		
	}
	if (Data.EvaluatedData.Attribute == GetCharacterExperienceAttribute())
	{
		AFFGameCharacter* Character = Cast<AFFGameCharacter>(Props.SourceAvatarActor);
		AFFGamePlayerState* FFGamePlayerState = Cast<AFFGamePlayerState>(Character);
		 IPlayerInterface* PlayerInterface = Cast<IPlayerInterface>(Character);
		 if (PlayerInterface)
		{
		 	
			PlayerInterface->AddXPGain(GetCharacterExperience());		 	
			SetCharacterExperience(0);
			if (FFGamePlayerState)
			{
				SetCritHitX(GetCritHitXByLevel( FFGamePlayerState->GetPlayerLevel()));
			}
		}
	}
	*/
}


















void UMSAttributeSet::OnRep_Strength(const FGameplayAttributeData& OldStrength) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Strength, OldStrength);
}

void UMSAttributeSet::OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Intelligence, OldIntelligence);
}

void UMSAttributeSet::OnRep_Dexterity(const FGameplayAttributeData& OldDexterity) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Dexterity, OldDexterity);
}

void UMSAttributeSet::OnRep_Wisdom(const FGameplayAttributeData& OldWisdom) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Wisdom, OldWisdom);
}

void UMSAttributeSet::OnRep_Constitution(const FGameplayAttributeData& OldConstitution) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Constitution, OldConstitution);
}

void UMSAttributeSet::OnRep_Charisma(const FGameplayAttributeData& OldCharisma) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Charisma, OldCharisma);
}
void UMSAttributeSet::OnRep_Karma(const FGameplayAttributeData& OldKarma) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Karma, OldKarma);
}





void UMSAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Health, OldHealth);
}

void UMSAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, MaxHealth, OldMaxHealth);
}

void UMSAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Mana, OldMana);
}

void UMSAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, MaxMana, OldMaxMana);
}





void UMSAttributeSet::OnRep_Magic(const FGameplayAttributeData& OldMagic) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Magic, OldMagic);
}

void UMSAttributeSet::OnRep_Attack(const FGameplayAttributeData& OldAttack) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Attack, OldAttack);
}

void UMSAttributeSet::OnRep_HolyAttack(const FGameplayAttributeData& OldHolyAttack) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, HolyAttack, OldHolyAttack);
}

void UMSAttributeSet::OnRep_DarkAttack(const FGameplayAttributeData& OldDarkAttack) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, DarkAttack, OldDarkAttack);
}






void UMSAttributeSet::OnRep_ArmorPen(const FGameplayAttributeData& OldArmorPen) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, ArmorPen, OldArmorPen);
}

void UMSAttributeSet::OnRep_BlockChance(const FGameplayAttributeData& OldBlockChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, BlockChance, OldBlockChance);
}

void UMSAttributeSet::OnRep_Dodge(const FGameplayAttributeData& OldDodge) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Dodge, OldDodge);
}

void UMSAttributeSet::OnRep_CritDef(const FGameplayAttributeData& OldCritDef) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, CritDef, OldCritDef);
}

void UMSAttributeSet::OnRep_CritHitChance(const FGameplayAttributeData& OldCritHitChance) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, CritHitChance, OldCritHitChance);
}

void UMSAttributeSet::OnRep_CritHitX(const FGameplayAttributeData& OldCritHitX) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, CritHitX, OldCritHitX);
}


void UMSAttributeSet::OnRep_PhysicalRes(const FGameplayAttributeData& OldPhysicalRes) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, PhysicalRes, OldPhysicalRes);
}

void UMSAttributeSet::OnRep_FireRes(const FGameplayAttributeData& OldFireRes) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, FireRes, OldFireRes);
}

void UMSAttributeSet::OnRep_ShockRes(const FGameplayAttributeData& OldShockRes) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, ShockRes, OldShockRes);
}

void UMSAttributeSet::OnRep_WaterRes(const FGameplayAttributeData& OldWaterRes) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, WaterRes, OldWaterRes);
}

void UMSAttributeSet::OnRep_EarthRes(const FGameplayAttributeData& OldEarthRes) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, EarthRes, OldEarthRes);
}

void UMSAttributeSet::OnRep_HolyRes(const FGameplayAttributeData& OldHolyRes) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, HolyRes, OldHolyRes);
}

void UMSAttributeSet::OnRep_DarkRes(const FGameplayAttributeData& OldDarkRes) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, DarkRes, OldDarkRes);
}






void UMSAttributeSet::OnRep_HealthRegen(const FGameplayAttributeData& OldHealthRegen) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, HealthRegen, OldHealthRegen);
}

void UMSAttributeSet::OnRep_ManaRegen(const FGameplayAttributeData& OldManaRegen) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, ManaRegen, OldManaRegen);
}





void UMSAttributeSet::OnRep_Money(const FGameplayAttributeData& OldMoney) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMSAttributeSet, Money, OldMoney);
}


void UMSAttributeSet::SetEffectProperties(const FGameplayEffectModCallbackData& Data, FEffectProperties& Props)const 
{

	Props.EffectContextHandle = Data.EffectSpec.GetContext();
    Props.SourceASC = Props.EffectContextHandle.GetOriginalInstigatorAbilitySystemComponent();

	if(IsValid(Props.SourceASC) && Props.SourceASC->AbilityActorInfo.IsValid() && Props.SourceASC->AbilityActorInfo->AvatarActor.IsValid())
	{
		Props.SourceAvatarActor = Props.SourceASC->AbilityActorInfo->AvatarActor.Get();
		Props.SourceController = Props.SourceASC->AbilityActorInfo->PlayerController.Get();
				
		if (Props.SourceAvatarActor== nullptr && Props.SourceAvatarActor != nullptr)
		{
			if (const APawn* Pawn = Cast<APawn>(Props.SourceAvatarActor))
			{
				Props.SourceController = Pawn->GetController();
			}
		}
		if (Props.SourceController)
		{
			Props.SourceCharacter = Cast<ACharacter>(Props.SourceController->GetPawn());
		}
	}
if(Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
	Props.TargetAvatarActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
	Props.TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();	
	Props.TargetCharacter = Cast<ACharacter>(Props.TargetAvatarActor);
	Props.TargetASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(Props.TargetAvatarActor);
	}
	
}

float UMSAttributeSet::GetCritHitXByLevel(int32 Level)
{
	
		
		if (Level < 20)
		{
			return 1.5f;
		}
		if (Level < 40)
		{
			return 2.0f;
		}
		if (Level < 60)
		{
			return 2.5f;
		}
		if (Level < 80)
		{
			return 3.0f;
		}		
	
	return 4.0f;
}


