// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonDemoGameMode.h"
#include "ThirdPersonDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonDemoGameMode::AThirdPersonDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
