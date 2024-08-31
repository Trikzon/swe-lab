// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SWE_Lab : ModuleRules
{
	public SWE_Lab(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
