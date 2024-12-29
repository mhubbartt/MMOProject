// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetActor_Trace.h"
#include "BaseAbility.generated.h"


/**
 * 
 */
UCLASS()
class MMOSYSTEM_API ABaseAbility : public AGameplayAbilityTargetActor_Trace
{
	GENERATED_BODY()
	
	virtual FHitResult PerformTrace(AActor* InSourceActor) override;
	
	
};
