// Some copyright should be here...

using System.Diagnostics.CodeAnalysis;
using UnrealBuildTool;
using System.IO;

public class MmoSystem : ModuleRules
{
	public MmoSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				
				// ... add other public dependencies that you statically link with here ...
			}
		);
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"EnhancedInput",
				"UMG",
				"GameplayTasks",
				"GameplayTags",
				"InputCore",
				"AIModule",
				"Niagara",
				"EnhancedInput",
				"GameplayAbilities",
				"NetCore",
				"MotionWarping",
				"Python3",
				"Json",
				"JsonUtilities",
				"MySql",
				"BlueprintGraph",
				"KismetCompiler",
				


				// ... add private dependencies that you statically link with here ...	
			}
		);
		 
	}
}

