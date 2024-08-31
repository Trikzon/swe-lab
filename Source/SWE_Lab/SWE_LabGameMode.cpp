// Copyright Epic Games, Inc. All Rights Reserved.

#include "SWE_LabGameMode.h"
#include "SWE_LabCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASWE_LabGameMode::ASWE_LabGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
