// Copyright Epic Games, Inc. All Rights Reserved.

#include "CharacterGameMode.h"
#include "CharacterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACharacterGameMode::ACharacterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
