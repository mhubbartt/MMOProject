using UnrealBuildTool;
using System.IO;

public class LuaCore : ModuleRules
{
    public LuaCore(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        string LibraryPath = Path.GetFullPath(Path.Combine(ModuleDirectory, "include/"));
     

        PublicIncludePaths.Add(LibraryPath);

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            // string LibraryName = "MySQL"; // Replace with the actual name of your library without file extension
            string LibraryFile = Path.Combine(ModuleDirectory, "Lua54" + ".lib");
            PublicAdditionalLibraries.Add(LibraryFile);



            RuntimeDependencies.Add("$(BinaryOutputDir)/Lua54.dll", Path.Combine(ModuleDirectory, "Lua54.dll"));
        
        


        }
    }
}