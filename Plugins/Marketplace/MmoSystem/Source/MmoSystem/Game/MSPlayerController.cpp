// Fill out your copyright notice in the Description page of Project Settings.


#include "MSPlayerController.h"
#include "MSPlayerState.h"
#include "GameFramework/GameStateBase.h"
#include "MmoSystem/Camera/MSPlayerCameraManager.h"
#include "MmoSystem/Inventory/InventoryManager/InventoryManager.h"
#include "MmoSystem/SystemMessages/LoggingMacros.h"
#include "MmoSystem/ULoggerMacros.h"

using namespace MSGlobal;
using namespace ULoggerSystem;

AMSPlayerController::AMSPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)


{


	InventoryComponent = CreateDefaultSubobject<UInventoryManager>("InventoryComponent");
	InventoryComponent->SetIsReplicated(true);
	
	PlayerCameraManagerClass = AMSPlayerCameraManager::StaticClass();
}

void AMSPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	AMSPlayerState* MMOlayerState = GetMMOPlayerState();

	if (PlayerCameraManager && MMOlayerState)
	{
		APawn* TargetPawn = PlayerCameraManager->GetViewTargetPawn();

		if (TargetPawn)
		{
			// Update view rotation on the server so it replicates
			if (HasAuthority() || TargetPawn->IsLocallyControlled())
			{
				MMOlayerState->SetReplicatedViewRotation(TargetPawn->GetViewRotation());
			}

			
			// Update the target view rotation if the pawn isn't locally controlled
			if (!TargetPawn->IsLocallyControlled())
			{
				MMOlayerState = TargetPawn->GetPlayerState<AMSPlayerState>();
				if (MMOlayerState)
				{
					// Get it from the spectated pawn's player state, which may not be the same as the PC's playerstate
					TargetViewRotation = MMOlayerState->GetReplicatedViewRotation();
				}
			}
		}
	}
}

// Camera Manager Interface
void AMSPlayerController::OnCameraPenetratingTarget()
{
	bHideViewTargetPawnNextFrame = true;
}





void AMSPlayerController::SendMessage_Implementation(FGameplayTag MessageTag, const FString& Message)
{

	MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "SendMessageToClient.Broadcast");
		
	OnMessageReceived.Broadcast(MessageTag, Message);
	
}

void AMSPlayerController::BroadCastMessageToAllClients_Server_Implementation(FGameplayTag MessageTag, const FString& Message)
{	
	MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "BroadCastMessageToAllClients_Server_Implementation");
	for (auto PlayerIt : GetWorld()->GetGameState()->PlayerArray)
	{
		AMSPlayerController* Controller = Cast<AMSPlayerController>(PlayerIt->GetOwningController());
		FString NewMessage =( Message + " " + PlayerIt->GetPlayerName());
		Controller->SendMessage(MessageTag, NewMessage);
		MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "BroadCastMessageToAllClients_Server_Implementation %s", *PlayerIt->GetPlayerName());
	}
}

// Helper Functions
AMSPlayerState* AMSPlayerController::GetMMOPlayerState() const
{
	return CastChecked<AMSPlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}

UInventoryManager* AMSPlayerController::GetInventoryComponent() const
{
	return InventoryComponent;
}