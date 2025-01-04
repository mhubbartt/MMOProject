// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MSGameMode.generated.h"


class UChatManager;


UCLASS(minimalapi)
class AMSGameMode : public AGameMode
{
	GENERATED_BODY()

	virtual void PostLogin(APlayerController* NewPlayer) override;

public:
	
	AMSGameMode();

	virtual void Tick(float DeltaSeconds) override;
UPROPERTY()
	UChatManager *ChatManager;
};



