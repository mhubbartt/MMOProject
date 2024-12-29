// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTags.h"
#include "NativeGameplayTags.h"

namespace MSGlobal
{
	
	/** Declare gameplay tags for item types */
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_None);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_Equippable);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_Consumable);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_QuestItem);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_Material);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_SkillItem);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_Key);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_Mount);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_Pet);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_Cosmetic);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemType_Miscellaneous);


	/** Declare gameplay tags for handedness */
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Handedness_Right);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Handedness_Left);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Handedness_Ambidextrous);

	/** Declare gameplay tags for item rarity */
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemRarity_Common);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemRarity_Uncommon);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemRarity_Rare);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemRarity_Epic);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(ItemRarity_Legendary);
	
}
