// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingGameSystemCPGameMode.h"
#include "ShootingGameSystemCPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingGameSystemCPGameMode::AShootingGameSystemCPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/BP_EyeCharCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
