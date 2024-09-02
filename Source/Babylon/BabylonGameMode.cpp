// Copyright Epic Games, Inc. All Rights Reserved.

#include "BabylonGameMode.h"
#include "BabylonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABabylonGameMode::ABabylonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
