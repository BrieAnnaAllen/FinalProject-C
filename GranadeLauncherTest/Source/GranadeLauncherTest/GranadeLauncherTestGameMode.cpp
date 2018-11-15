// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GranadeLauncherTestGameMode.h"
#include "GranadeLauncherTestHUD.h"
#include "GranadeLauncherTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGranadeLauncherTestGameMode::AGranadeLauncherTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGranadeLauncherTestHUD::StaticClass();
}
