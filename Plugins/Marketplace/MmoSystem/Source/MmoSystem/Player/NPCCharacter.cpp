// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCCharacter.h"


// Sets default values
ANPCCharacter::ANPCCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANPCCharacter::PerformInteraction_Implementation(AActor* CharacterReference)
{
	
}




