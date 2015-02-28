// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "library.h"
#include "libraryGameMode.h"
#include "libraryCharacter.h"

AlibraryGameMode::AlibraryGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
