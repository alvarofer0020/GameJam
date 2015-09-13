// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "GameJamGame.h"
#include "GameJamGameGameMode.h"
#include "GameJamGameCharacter.h"

AGameJamGameGameMode::AGameJamGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
