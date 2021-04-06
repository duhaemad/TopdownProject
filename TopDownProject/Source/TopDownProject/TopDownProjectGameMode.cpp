// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownProjectGameMode.h"
#include "TopDownProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATopDownProjectGameMode::ATopDownProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
