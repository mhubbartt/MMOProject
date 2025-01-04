// Fill out your copyright notice in the Description page of Project Settings.


#include "MSPlayerController.h"
#include "MSPlayerState.h"
#include "MmoSystem/Camera/MSPlayerCameraManager.h"
#include "MmoSystem/Inventory/InventoryManager/InventoryManager.h"
#include "MmoSystem/ChatSystem/ChatSystem.h"

using namespace MSGlobal;

AMSPlayerController::AMSPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)


{

	ChatComponent = CreateDefaultSubobject<UChatSystem>("ChatSystem");
	ChatComponent->SetIsReplicated(true);

	InventoryComponent = CreateDefaultSubobject<UInventoryManager>("InventoryComponent");
	InventoryComponent->SetIsReplicated(true);
	
	PlayerCameraManagerClass = AMSPlayerCameraManager::StaticClass();
}

void AMSPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	AMSPlayerState* PlayerStatelocal = GetMMOPlayerState();

	if (PlayerCameraManager && PlayerStatelocal)
	{
		if (APawn* TargetPawn = PlayerCameraManager->GetViewTargetPawn())
		{
			// Update view rotation on the server so it replicates
			if (HasAuthority() || TargetPawn->IsLocallyControlled())
			{
				PlayerStatelocal->SetReplicatedViewRotation(TargetPawn->GetViewRotation());
			}

			
			// Update the target view rotation if the pawn isn't locally controlled
			if (!TargetPawn->IsLocallyControlled())
			{
				PlayerState = TargetPawn->GetPlayerState<AMSPlayerState>();
				if (PlayerState)
				{
					// Get it from the spectated pawn's player state, which may not be the same as the PC's PlayerState
					TargetViewRotation = PlayerStatelocal->GetReplicatedViewRotation();
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

// Helper Functions
AMSPlayerState* AMSPlayerController::GetMMOPlayerState() const
{
	return CastChecked<AMSPlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}

UInventoryManager* AMSPlayerController::GetInventoryComponent() const
{
	return InventoryComponent;
}

UChatSystem* AMSPlayerController::GetChatComponent() const
{
	return ChatComponent;
}

