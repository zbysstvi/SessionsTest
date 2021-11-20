// Copyright Epic Games, Inc. All Rights Reserved.

#include "SessionsTestGameMode.h"
#include "SessionsTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASessionsTestGameMode::ASessionsTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
