// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "GameFramework/GameMode.h"
#include "libraryGameMode.generated.h"

// The GameMode defines the game being played. It governs the game rules, scoring, what actors
// are allowed to exist in this game type, and who may enter the game.
//
// This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of libraryCharacter

UCLASS(minimalapi)
class AlibraryGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	AlibraryGameMode(const FObjectInitializer& ObjectInitializer);
};
