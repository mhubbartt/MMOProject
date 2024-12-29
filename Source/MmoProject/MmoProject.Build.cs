// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MmoProject : ModuleRules
{
	public MmoProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","UMG","Slate","SlateCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		 PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore","GameplayTags" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		PrivateIncludePathModuleNames.AddRange(
			new string[] {
				"MainFrame",
				
			});
	}
}
