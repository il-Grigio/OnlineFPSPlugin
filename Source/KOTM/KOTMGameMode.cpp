// Copyright Epic Games, Inc. All Rights Reserved.

#include "KOTMGameMode.h"
#include "KOTMCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKOTMGameMode::AKOTMGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
