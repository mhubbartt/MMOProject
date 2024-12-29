// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MmoSystem/GlobalsNTags.h"

#include "InteractionComponent.generated.h"

class AActor;



/** Intermediate base class for all interaction target actors. */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent),Blueprintable)
class UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	 UInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());


	/* Interaction Trace Functions*/
	UFUNCTION(BlueprintCallable,Category= "Interaction Component")	
	virtual FHitResult PerformTrace(AActor* CharacterRef, bool& BlockingHit);
	void AimWithPlayerController(const AActor* InSourceActor, FCollisionQueryParams Params, const FVector& TraceStart, FVector& OutTraceEnd,
								bool bIgnorePitch) const;
	static bool ClipCameraRayToAbilityRange(const FVector& CameraLocation, const FVector& CameraDirection, const FVector& AbilityCenter,
	                                        float AbilityRange, FVector& ClippedPosition);




protected:

	// Debug Options
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Debug Options")
	bool bDebug = false;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category= "Debug Options")
	float DebugSphereRadius = 30.0f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category= "Debug Options")
	float DebugSphereSegments = 16.0f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category= "Debug Options")
	FColor DebugColor = FColor::Green;

	// Interaction Range Trace End
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category= "Trace Options")
	int32 MaxRange = 300;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category= "Trace Options")
	bool bTraceAffectsAimPitch = true;


	// this sets the trace frequency, sets how many frames are skipped
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category= "Trace Options")
	int32 TraceFPSTiming = 0;

	UPROPERTY()
	int32 TraceCount = 0;
};
