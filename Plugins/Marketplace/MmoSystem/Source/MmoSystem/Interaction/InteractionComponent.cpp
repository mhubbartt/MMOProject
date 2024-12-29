// Copyright Epic Games, Inc. All Rights Reserved.

#include "InteractionComponent.h"
#include "Async/TaskGraphInterfaces.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"

using namespace MSGlobal;


UInteractionComponent::UInteractionComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
}

FHitResult UInteractionComponent::PerformTrace(AActor* CharacterRef, bool& BlockingHit)
{
	if (TraceCount > 0)
	{
		TraceCount--;
		return FHitResult();
	}
	TraceCount = TraceFPSTiming;
	bool bTraceComplex = false;
	TArray<AActor*> ActorsToIgnore;

	ActorsToIgnore.Add(CharacterRef);

	FCollisionQueryParams Params;
	Params.bReturnPhysicalMaterial = true;
	Params.AddIgnoredActors(ActorsToIgnore);
	

	FVector TraceStart = CharacterRef->GetActorLocation();
	FVector TraceEnd = TraceStart + CharacterRef->GetActorForwardVector() * MaxRange;
	AimWithPlayerController(CharacterRef, Params, TraceStart, TraceEnd, bTraceComplex);		//Effective on server and launching client only

	// ------------------------------------------------------

	FHitResult ReturnHitResult;
	auto World = CharacterRef->GetWorld();
	World->LineTraceSingleByChannel(ReturnHitResult, TraceStart, TraceEnd, ECC_Interaction, Params);
	//Default to end of trace line if we don't hit anything.
	if (!ReturnHitResult.bBlockingHit)
	{
		ReturnHitResult.Location = TraceEnd;
	}


#if ENABLE_DRAW_DEBUG
	if (bDebug)
	{
		
		DrawDebugLine(GetWorld(), TraceStart, TraceEnd, DebugColor);
		DrawDebugSphere(GetWorld(), TraceEnd, DebugSphereRadius, DebugSphereSegments, DebugColor);
	}
#endif // ENABLE_DRAW_DEBUG
	BlockingHit = ReturnHitResult.bBlockingHit;
	return ReturnHitResult;
}
void UInteractionComponent::AimWithPlayerController(const AActor* InSourceActor, FCollisionQueryParams Params, const FVector& TraceStart, FVector& OutTraceEnd, bool bIgnorePitch) const
{


	APlayerController* PC = InSourceActor->GetWorld()->GetFirstPlayerController();
	check(PC);

	FVector ViewStart;
	FRotator ViewRot;
	PC->GetPlayerViewPoint(ViewStart, ViewRot);

	const FVector ViewDir = ViewRot.Vector();
	FVector ViewEnd = ViewStart + (ViewDir * MaxRange);

	ClipCameraRayToAbilityRange(ViewStart, ViewDir, TraceStart, MaxRange, ViewEnd);

	FHitResult HitResult;
	auto World = InSourceActor->GetWorld();
	World->LineTraceSingleByChannel(HitResult, ViewStart, ViewEnd, ECC_Interaction, Params);

	const bool bUseTraceResult = HitResult.bBlockingHit && (FVector::DistSquared(TraceStart, HitResult.Location) <= (MaxRange * MaxRange));

	const FVector AdjustedEnd = (bUseTraceResult) ? HitResult.Location : ViewEnd;

	FVector AdjustedAimDir = (AdjustedEnd - TraceStart).GetSafeNormal();
	if (AdjustedAimDir.IsZero())
	{
		AdjustedAimDir = ViewDir;
	}

	if (!bTraceAffectsAimPitch && bUseTraceResult)
	{
		FVector OriginalAimDir = (ViewEnd - TraceStart).GetSafeNormal();

		if (!OriginalAimDir.IsZero())
		{
			// Convert to angles and use original pitch
			const FRotator OriginalAimRot = OriginalAimDir.Rotation();

			FRotator AdjustedAimRot = AdjustedAimDir.Rotation();
			AdjustedAimRot.Pitch = OriginalAimRot.Pitch;

			AdjustedAimDir = AdjustedAimRot.Vector();
		}
	}

	OutTraceEnd = TraceStart + (AdjustedAimDir * MaxRange);
}

bool UInteractionComponent::ClipCameraRayToAbilityRange(const FVector& CameraLocation, const FVector& CameraDirection, const FVector& AbilityCenter, float AbilityRange, FVector& ClippedPosition)
{
	FVector CameraToCenter = AbilityCenter - CameraLocation;
	float DotToCenter = FVector::DotProduct(CameraToCenter, CameraDirection);
	if (DotToCenter >= 0)		//If this fails, we're pointed away from the center, but we might be inside the sphere and able to find a good exit point.
	{
		float DistanceSquared = CameraToCenter.SizeSquared() - (DotToCenter * DotToCenter);
		float RadiusSquared = (AbilityRange * AbilityRange);
		if (DistanceSquared <= RadiusSquared)
		{
			float DistanceFromCamera = FMath::Sqrt(RadiusSquared - DistanceSquared);
			float DistanceAlongRay = DotToCenter + DistanceFromCamera;						//Subtracting instead of adding will get the other intersection point
			ClippedPosition = CameraLocation + (DistanceAlongRay * CameraDirection);		//Cam aim point clipped to range sphere
			return true;
		}
	}
	return false;
}


