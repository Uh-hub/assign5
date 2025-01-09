// Copyright Epic Games, Inc. All Rights Reserved.

#include "re_assign5GameMode.h"
#include "re_assign5Character.h"
#include "UObject/ConstructorHelpers.h"

Are_assign5GameMode::Are_assign5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
