// Copyright Epic Games, Inc. All Rights Reserved.

#include "TowerDefenceGameMode.h"
#include "TowerDefencePlayerController.h"
#include "TowerDefenceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATowerDefenceGameMode::ATowerDefenceGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATowerDefencePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}