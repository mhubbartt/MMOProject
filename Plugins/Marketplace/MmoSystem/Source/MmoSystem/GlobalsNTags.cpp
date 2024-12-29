

#include "GlobalsNTags.h"


namespace MSGlobal
{




	UE_DEFINE_GAMEPLAY_TAG(Event_Movement_ADS, "Event.Movement.ADS");

	// Primary Attributes Tags
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Constitution, "Attribute.Primary.Constitution");   
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Dexterity, "Attribute.Primary.Dexterity");      
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Strength, "Attribute.Primary.Strength");       
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Charisma, "Attribute.Primary.Charisma");       
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Wisdom, "Attribute.Primary.Wisdom");         
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Intelligence, "Attribute.Primary.Intelligence");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Primary_Karma, "Attribute.Primary.Karma");

	// Vital Tags                                          
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Vital_Health, "Attribute.Vital.Health");           
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Vital_Mana, "Attribute.Vital.Mana");  
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Vital_MaxHealth, "Attribute.Vital.MaxHealth");    
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Vital_MaxMana, "Attribute.Vital.MaxMana");


// Secondary Attributes Tags

     

	  // Damage Modifiers Tags
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Damage_Attack, "Attribute.Damage.Attack");       
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Damage_Magic, "Attribute.Damage.Magic");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Damage_HolyAttack, "Attribute.Damage.HolyAttack");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Damage_DarkAttack, "Attribute.Damage.DarkAttack");

	// Damage Modifiers Tags
	UE_DEFINE_GAMEPLAY_TAG(Attribute_DamageModifiers_ArmorPen, "Attribute.DamageModifiers.ArmorPen");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_DamageModifiers_CritHitChance, "Attribute.DamageModifiers.CritHitChance");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_DamageModifiers_CritHitX, "Attribute.DamageModifiers.CritHitX");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_DamageModifiers_BlockChance,	"Attribute.DamageModifiers.BlockChance");  
	UE_DEFINE_GAMEPLAY_TAG(Attribute_DamageModifiers_CritDef,		"Attribute.DamageModifiers.CritDef");	
	UE_DEFINE_GAMEPLAY_TAG(Attribute_DamageModifiers_Dodge, "Attribute.DamageModifiers.Dodge");
 
	// Resists Tags
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Resistances_PhysicalRes, "Attribute.Resistances.PhysicalRes");
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Resistances_EarthRes, "Attribute.Resistances.EarthRes");   
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Resistances_FireRes, "Attribute.Resistances.FireRes");    
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Resistances_WaterRes, "Attribute.Resistances.WaterRes");   
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Resistances_ShockRes, "Attribute.Resistances.ShockRes");  
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Resistances_DarkRes, "Attribute.Resistances.DarkRes");    
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Resistances_HolyRes, "Attribute.Resistances.HolyRes");



// Regen Modifiers Tags
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Regen_HealthRegen, "Attribute.Regen.HealthRegen");  
	UE_DEFINE_GAMEPLAY_TAG(Attribute_Regen_ManaRegen, "Attribute.Regen.ManaRegen");


	UE_DEFINE_GAMEPLAY_TAG(Inventory_Slot_Main, "Inventory.Slot.Main");
	UE_DEFINE_GAMEPLAY_TAG(Inventory_Slot_Bank, "Inventory.Slot.Bank");
	UE_DEFINE_GAMEPLAY_TAG(Inventory_Slot_Quest, "Inventory.Slot.Quest");
	UE_DEFINE_GAMEPLAY_TAG(Inventory_Slot_Backpack, "Inventory.Slot.Backpack");


	/* Messaging System Tags */

	UE_DEFINE_GAMEPLAY_TAG(SystemMessage_Channel_SystemWide, "SystemMessage.Channel.SystemWide");
	UE_DEFINE_GAMEPLAY_TAG(SystemMessage_Channel_ClientOnly, "SystemMessage.Channel.ClientOnly");

	/* Interaction Component Tags */

	UE_DEFINE_GAMEPLAY_TAG(Interaction_Option_Pickup, "Interaction.Option.Pickup");
	UE_DEFINE_GAMEPLAY_TAG(Interaction_Option_Dialog, "Interaction.Option.Dialog");
	UE_DEFINE_GAMEPLAY_TAG(Interaction_Option_Open, "Interaction.Option.Open");
	UE_DEFINE_GAMEPLAY_TAG(Interaction_Option_Inspect, "Interaction.Option.Inspect");
	UE_DEFINE_GAMEPLAY_TAG(Interaction_Option_Use, "Interaction.Option.Use");


	UE_DEFINE_GAMEPLAY_TAG(Status_Crouching, "Status.Crouching");
	
}
