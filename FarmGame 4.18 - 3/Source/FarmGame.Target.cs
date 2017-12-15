// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class FarmGameTarget : TargetRules
{
	public FarmGameTarget(TargetInfo Target) : base (Target)
	{
		Type = TargetType.Game;
        ExtraModuleNames.Add("FarmGame");
	}

	//
	// TargetRules interface.
	//

}
