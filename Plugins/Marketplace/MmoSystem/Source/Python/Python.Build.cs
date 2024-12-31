using UnrealBuildTool;
using System.IO;

public class Python : ModuleRules
{
    public Python(ReadOnlyTargetRules Target) : base(Target)
    {
	    PrivateDependencyModuleNames.AddRange(new string[] { "MmoSystem" });
	    Type = ModuleType.External;

        string PythonPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "Python/"));
        string IncludePath = Path.GetFullPath(Path.Combine(ModuleDirectory, "include/"));
        // Include Python headers and libraries
        PublicIncludePaths.Add(IncludePath);


   }
}
