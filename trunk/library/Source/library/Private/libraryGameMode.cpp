// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "libraryPrivate.h"
#include "libraryGameMode.h"
#include "libraryCharacter.h"

AlibraryGameMode::AlibraryGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our character
	DefaultPawnClass = AlibraryCharacter::StaticClass();	
}
