// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSProjectGameModeBase.h"
#include <Runtime/Engine/Classes/Engine/Engine.h>

void
AFPSProjectGameModeBase::StartPlay()
{
    Super::StartPlay();
    if (GEngine)
    {
        // Display a debug message for five seconds.
        // The -1 "Key" value argument prevents the message from being updated or refreshed.
        GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
    }
}
