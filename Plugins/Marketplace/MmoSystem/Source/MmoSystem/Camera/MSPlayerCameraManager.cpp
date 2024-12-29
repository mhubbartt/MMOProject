// Copyright Epic Games, Inc. All Rights Reserved.

#include "MSPlayerCameraManager.h"

#include "Async/TaskGraphInterfaces.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "MSCameraComponent.h"
#include "MSUICameraManagerComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MSPlayerCameraManager)

class FDebugDisplayInfo;

static FName UICameraComponentName(TEXT("UICamera"));

AMSPlayerCameraManager::AMSPlayerCameraManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultFOV = MS_CAMERA_DEFAULT_FOV;
	ViewPitchMin = MS_CAMERA_DEFAULT_PITCH_MIN;
	ViewPitchMax = MS_CAMERA_DEFAULT_PITCH_MAX;

	UICamera = CreateDefaultSubobject<UMSUICameraManagerComponent>(UICameraComponentName);
}

UMSUICameraManagerComponent* AMSPlayerCameraManager::GetUICameraComponent() const
{
	return UICamera;
}

void AMSPlayerCameraManager::UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime)
{
	// If the UI Camera is looking at something, let it have priority.
	if (UICamera->NeedsToUpdateViewTarget())
	{
		Super::UpdateViewTarget(OutVT, DeltaTime);
		UICamera->UpdateViewTarget(OutVT, DeltaTime);
		return;
	}

	Super::UpdateViewTarget(OutVT, DeltaTime);
}

void AMSPlayerCameraManager::DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos)
{
	check(Canvas);

	FDisplayDebugManager& DisplayDebugManager = Canvas->DisplayDebugManager;

	DisplayDebugManager.SetFont(GEngine->GetSmallFont());
	DisplayDebugManager.SetDrawColor(FColor::Yellow);
	DisplayDebugManager.DrawString(FString::Printf(TEXT("PlayerCameraManager: %s"), *GetNameSafe(this)));

	Super::DisplayDebug(Canvas, DebugDisplay, YL, YPos);

	const APawn* Pawn = (PCOwner ? PCOwner->GetPawn() : nullptr);

	if (const UMSCameraComponent* CameraComponent = UMSCameraComponent::FindCameraComponent(Pawn))
	{
		CameraComponent->DrawDebug(Canvas);
	}
}

