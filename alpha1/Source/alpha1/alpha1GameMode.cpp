// Copyright Epic Games, Inc. All Rights Reserved.

#include "alpha1GameMode.h"
#include "alpha1Character.h"
#include "UObject/ConstructorHelpers.h"

Aalpha1GameMode::Aalpha1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
