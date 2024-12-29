// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemTypeTags.h"


namespace MSGlobal
{

	/** Define gameplay tags for item types */
	UE_DEFINE_GAMEPLAY_TAG(ItemType_None, "ItemType.None");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_Equippable, "ItemType.Equippable");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_Consumable, "ItemType.Consumable");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_QuestItem, "ItemType.QuestItem");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_Material, "ItemType.Material");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_SkillItem, "ItemType.SkillItem");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_Key, "ItemType.Key");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_Mount, "ItemType.Mount");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_Pet, "ItemType.Pet");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_Cosmetic, "ItemType.Cosmetic");
	UE_DEFINE_GAMEPLAY_TAG(ItemType_Miscellaneous, "ItemType.Miscellaneous");


	/** Define gameplay tags for handedness */
	UE_DEFINE_GAMEPLAY_TAG(Handedness_Right, "Handedness.Right");
	UE_DEFINE_GAMEPLAY_TAG(Handedness_Left, "Handedness.Left");
	UE_DEFINE_GAMEPLAY_TAG(Handedness_Ambidextrous, "Handedness.Ambidextrous");

	/** Define gameplay tags for item rarity */
	UE_DEFINE_GAMEPLAY_TAG(ItemRarity_Common, "ItemRarity.Common");
	UE_DEFINE_GAMEPLAY_TAG(ItemRarity_Uncommon, "ItemRarity.Uncommon");
	UE_DEFINE_GAMEPLAY_TAG(ItemRarity_Rare, "ItemRarity.Rare");
	UE_DEFINE_GAMEPLAY_TAG(ItemRarity_Epic, "ItemRarity.Epic");
	UE_DEFINE_GAMEPLAY_TAG(ItemRarity_Legendary, "ItemRarity.Legendary");
	
}