// Copyright Chris Swezy, Dion Tryban, Jake Younan. All Rights Reserved.

using UnrealBuildTool;

public class Babylon : ModuleRules
{
	public Babylon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {"GameplayAbilities", "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
