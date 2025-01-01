// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MSGameMode.generated.h"

class PythonManager;
class UChatComponent;

UCLASS(minimalapi)
class AMSGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AMSGameMode();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Chat", meta = (AllowPrivateAccess = "true"))
	UChatComponent* ChatComponent;


};



