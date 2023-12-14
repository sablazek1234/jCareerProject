// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class jCareerProject : ModuleRules
{
	public jCareerProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", 
			"EnhancedInput", "AIModule", "GameplayTasks", "NavigationSystem" });
	}
}
