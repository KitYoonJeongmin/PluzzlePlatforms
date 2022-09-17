// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzlePlatfromsGameMode.h"
#include "PuzzlePlatfromsCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzlePlatfromsGameMode::APuzzlePlatfromsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
