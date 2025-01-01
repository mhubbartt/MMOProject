// Copyright Epic Games, Inc. All Rights Reserved.

#include "MSGameMode.h"

#include "MmoSystem/ChatSystem/ChatComponent.h"


AMSGameMode::AMSGameMode()
{

	ChatComponent = CreateDefaultSubobject<UChatComponent>(TEXT("ChatComponent"));
	ChatComponent->SetIsReplicated(true);


}

void AMSGameMode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);


}
