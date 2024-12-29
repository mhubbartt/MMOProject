#pragma once

#include "NativeGameplayTags.h"
#include "Inventory/InventoryManager/InventoryManager.h"	// For UInventoryManager.h"


namespace MSGlobal
{
#define CUSTOM_DEPTH_RED 250

	// Ground Trace Distance For Animations
	static float GroundTraceDistance = 100000.0f;
	inline FAutoConsoleVariableRef CVar_GroundTraceDistance(TEXT("MSGlobal.GroundTraceDistance"), GroundTraceDistance, TEXT("Distance to trace down when generating ground information."), ECVF_Cheat);

	// Trace against Actors/Components which provide interactions.
#define ECC_Interaction ECC_GameTraceChannel1

	static FDatabaseConnectionDetails DatabaseConnectionDetails("127.0.0.1", "root", "Mph76Dor@", "MmoSystemDB", 3306);
	
	MMOSYSTEM_API inline TArray<FGameplayTag> EquipmentGameplayTagsToSlots = TArray<FGameplayTag>();

	// Primary Attributes Tags  - Loaded First
	
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Constitution);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Dexterity);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Strength);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Charisma);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Wisdom);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Intelligence);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Primary_Karma);

	// Vital Tags  - Loaded Second
	
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Vital_Health);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Vital_Mana);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Vital_MaxHealth);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Vital_MaxMana);


	// Secondary Attributes Tags  - Loaded Third

	// Damage Attributes Tags

	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Damage_Attack);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Damage_Magic);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Damage_HolyAttack);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Damage_DarkAttack);

	// Damage Modifiers Tags
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_DamageModifiers_ArmorPen);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_DamageModifiers_CritHitChance);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_DamageModifiers_CritHitX);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_DamageModifiers_BlockChance);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_DamageModifiers_CritDef);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_DamageModifiers_Dodge);
	

	// Resists Tags
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Resistances_PhysicalRes);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Resistances_EarthRes);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Resistances_FireRes);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Resistances_WaterRes);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Resistances_ShockRes);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Resistances_DarkRes);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Resistances_HolyRes);

	// Regen Modifiers Tags
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Regen_HealthRegen);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Attribute_Regen_ManaRegen);


	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Inventory_Slot_Main);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Inventory_Slot_Bank);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Inventory_Slot_Quest);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Inventory_Slot_Backpack);


	/* Messaging System Tags */
	
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(SystemMessage_Channel_SystemWide);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(SystemMessage_Channel_ClientOnly);

	/* Interaction Component Tags */
	
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Interaction_Option_Pickup);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Interaction_Option_Dialog);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Interaction_Option_Inspect);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Interaction_Option_Use);
	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Interaction_Option_Open);

	MMOSYSTEM_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Status_Crouching);



}
