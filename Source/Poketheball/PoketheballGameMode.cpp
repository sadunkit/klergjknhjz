// Copyright Epic Games, Inc. All Rights Reserved.

#include "PoketheballGameMode.h"
#include "PoketheballCharacter.h"
#include "UObject/ConstructorHelpers.h"

APoketheballGameMode::APoketheballGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
