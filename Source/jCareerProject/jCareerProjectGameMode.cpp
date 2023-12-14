// Copyright Epic Games, Inc. All Rights Reserved.

#include "jCareerProjectGameMode.h"
#include "jCareerProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AjCareerProjectGameMode::AjCareerProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
