// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "InteractionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MMOSYSTEM_API IInteractionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Interaction Interface")
	void PerformInteraction(AActor* CharacterReference); // Actor that is being interacted with
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Interaction Interface")
	void InteractionHighLightActor();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Interaction Interface")
	void InteractionUnHighLightActor();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Interaction Interface")
	void ShowInteractionOptions();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Interaction Interface")
	void HideInteractionOptions();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Interaction Interface")
	bool IsWithinDistance();
};
