// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class re_assign5 : ModuleRules
{
	public re_assign5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
