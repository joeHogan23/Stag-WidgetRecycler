using UnrealBuildTool;

public class WidgetRecyclerEditor : ModuleRules
{
    public WidgetRecyclerEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
        PublicDependencyModuleNames.AddRange(
	        new string[]
	        {
		        "Core",
		        "UnrealEd",
		        "KismetCompiler",
		        "GraphEditor",
		        "BlueprintGraph",
		        "EditorStyle",
		        "UMG",
		        "UMGEditor",
		        "WidgetRecycler"
	        }
        );
			
		
        PrivateDependencyModuleNames.AddRange(
	        new string[]
	        {
		        "CoreUObject",
		        "Engine",
		        "Slate",
		        "SlateCore",
	        }
        );
    }
}