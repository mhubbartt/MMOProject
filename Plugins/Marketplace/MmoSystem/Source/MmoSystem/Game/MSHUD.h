// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MSPlayerState.h"
#include "GameFramework/HUD.h"
#include "MmoSystem/UI/WidgetController.h"
#include "MSHUD.generated.h"

class UWidgetSystemController;
class UWidgetController;




/**
 * 
 */
UCLASS()
class MMOSYSTEM_API AMSHUD : public AHUD
{
	GENERATED_BODY()
	
public:

	AMSHUD();



	//	WidgetSystemController
	void InitWidgetSystemController(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC,
									UAttributeSet* AS, UInventoryComponent* IC);
	UFUNCTION(Blueprintable)
	UWidgetSystemController* GetWidgetSystemController(const FWidgetControllerParams& WCParams); 

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UWidgetSystemController> WidgetSystemController;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UWidgetSystemController> WidgetSystemControllerClass;

	UFUNCTION(BlueprintImplementableEvent)
	void WidgetSystemControllerSet();

protected:

	virtual void BeginPlay() override;

	
};
