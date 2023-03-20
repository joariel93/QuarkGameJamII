// Copyright Epic Games, Inc. All Rights Reserved.

#include "WinThePigGameMode.h"
#include "WinThePigCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWinThePigGameMode::AWinThePigGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
