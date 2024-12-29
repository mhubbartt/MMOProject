// Fill out your copyright notice in the Description page of Project Settings.


#include "MSHUD.h"
#include "MSPlayerState.h"
#include "MmoSystem/UI/WidgetSystemController.h"


AMSHUD::AMSHUD()
{
	
}



UWidgetSystemController* AMSHUD::GetWidgetSystemController(const FWidgetControllerParams& WCParams)
{
	if (WidgetSystemController == nullptr)
	{
		WidgetSystemController = NewObject<UWidgetSystemController>(this, WidgetSystemControllerClass);
		WidgetSystemController->SetWidgetControllerParams(WCParams);;
		WidgetSystemController->BindCallbacksToDependencies();
		WidgetSystemControllerSet();
		
	}

	return WidgetSystemController;
}

void AMSHUD::BeginPlay()
{
	Super::BeginPlay();

	
}
void AMSHUD::InitWidgetSystemController(APlayerController* PC, APlayerState* PS, UAbilitySystemComponent* ASC, UAttributeSet* AS,UInventoryComponent* IC)
{

	// checkf(OverlayWidgetClass, TEXT("Overlay Widget class uninitailized, please fill out BP_myhud"));
	checkf(WidgetSystemControllerClass, TEXT("Widget System controller class uninitailized, please fill out BP_AMMOHUD"));

		

	const FWidgetControllerParams WidgetControllerParams(PC,PS,ASC,AS,IC);
	GetWidgetSystemController(WidgetControllerParams);
	
	
}