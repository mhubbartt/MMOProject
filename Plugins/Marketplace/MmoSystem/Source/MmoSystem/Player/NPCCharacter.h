// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "MmoSystem/Interfaces/InteractionInterface.h"
#include "NPCCharacter.generated.h"

UCLASS()
class MMOSYSTEM_API ANPCCharacter : public ABaseCharacter, public IInteractionInterface
{
	GENERATED_BODY()

public:
	
	ANPCCharacter();
	virtual void Tick(float DeltaTime) override;


	// InteractionInterface
	virtual void PerformInteraction_Implementation(AActor* CharacterReference) override;
	
protected:

	virtual void BeginPlay() override;



};
