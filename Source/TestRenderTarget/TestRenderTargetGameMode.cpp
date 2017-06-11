// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestRenderTargetGameMode.h"
#include "TestRenderTargetPlayerController.h"
#include "TestRenderTargetCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestRenderTargetGameMode::ATestRenderTargetGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATestRenderTargetPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}