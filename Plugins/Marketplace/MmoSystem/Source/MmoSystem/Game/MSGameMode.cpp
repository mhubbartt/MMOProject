// Copyright Epic Games, Inc. All Rights Reserved.

#include "MSGameMode.h"

#include "MSPlayerController.h"
#include "MmoSystem/ChatSystem/ChatManager.h"
#include "MmoSystem/ChatSystem/ChatSystem.h"


void AMSGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	AMSPlayerController* MSController = Cast<AMSPlayerController>(NewPlayer);
	if (MSController)
	{
		UChatSystem* ChatSystem = MSController->GetChatComponent();
		if (ChatSystem)
		{
			ChatSystem->JoinChatRoom("GlobalRoom");
		}
	}
}

AMSGameMode::AMSGameMode()
{

	ChatManager = CreateDefaultSubobject<UChatManager>("ChatManager");
}

void AMSGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	ChatManager->PrintCurrentChannelsToScreen();
}
