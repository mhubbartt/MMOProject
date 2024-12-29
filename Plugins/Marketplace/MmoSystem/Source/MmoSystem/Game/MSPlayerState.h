// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "MmoSystem/AbilitySystem/MSAbilitySystemComponent.h"
#include "MSPlayerState.generated.h"


class UInventoryComponent;
class AMSPlayerController;
class UAttributeSet;
class UAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class MMOSYSTEM_API AMSPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	

	AMSPlayerState();

	

	// Getters and Setters

	FORCEINLINE AMSPlayerState* GetMMOPlayerState() { return this;};
	 AMSPlayerController* GetMMOPlayerController() const ;

	FORCEINLINE UMSAbilitySystemComponent* GetMMOAbilitySystemComponent() const { return Cast<UMSAbilitySystemComponent>(GetAbilitySystemComponent()); };
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const  override;	
	FORCEINLINE UAttributeSet* GetAttributeSet() const { return AttributeSet; };

	// Gets the replicated view rotation of this player, used for spectating
	FRotator GetReplicatedViewRotation() const;

	// Sets the replicated view rotation, only valid on the server
	void SetReplicatedViewRotation(const FRotator& NewRotation);

	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty>& OutLifetimeProps) const override;



protected:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UMSAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UAttributeSet> AttributeSet;


private:

	UPROPERTY(Replicated)
	FRotator ReplicatedViewRotation;
};
