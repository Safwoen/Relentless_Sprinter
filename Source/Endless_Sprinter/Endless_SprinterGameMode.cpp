// Copyright Epic Games, Inc. All Rights Reserved.

#include "Endless_SprinterGameMode.h"
#include "Endless_SprinterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEndless_SprinterGameMode::AEndless_SprinterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
