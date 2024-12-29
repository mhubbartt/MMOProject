// Fill out your copyright notice in the Description page of Project Settings.


#include "MSPlayerState.h"

#include "AbilitySystemComponent.h"
#include "MSPlayerController.h"
#include "MmoSystem/AbilitySystem/MSAbilitySystemComponent.h"
#include "MmoSystem/AbilitySystem/Attributes/MSAttributeSet.h"
#include "Net/UnrealNetwork.h"


AMSPlayerState::AMSPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UMSAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UMSAttributeSet>("AttributeSet");
	
	SetNetUpdateFrequency(60);
	SetMinNetUpdateFrequency(30);
}

AMSPlayerController* AMSPlayerState::GetMMOPlayerController() const
{ return Cast<AMSPlayerController>(GetOwningController()); };

UAbilitySystemComponent* AMSPlayerState::GetAbilitySystemComponent() const
{
	return  AbilitySystemComponent;
}

FRotator AMSPlayerState::GetReplicatedViewRotation() const
{
	// Could replace this with custom replication
	return ReplicatedViewRotation;
}

void AMSPlayerState::SetReplicatedViewRotation(const FRotator& NewRotation)
{
	if (NewRotation != ReplicatedViewRotation)
	{
		MARK_PROPERTY_DIRTY_FROM_NAME(ThisClass, ReplicatedViewRotation, this);
		ReplicatedViewRotation = NewRotation;
	}
}

void AMSPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ThisClass, ReplicatedViewRotation, COND_SimulatedOnly);
}
