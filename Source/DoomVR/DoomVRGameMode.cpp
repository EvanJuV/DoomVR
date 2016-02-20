// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "DoomVR.h"
#include "DoomVRGameMode.h"
#include "DoomVRHUD.h"
#include "DoomVRCharacter.h"

ADoomVRGameMode::ADoomVRGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ADoomVRHUD::StaticClass();
}
