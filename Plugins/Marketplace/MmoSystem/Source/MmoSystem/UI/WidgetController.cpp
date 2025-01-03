// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetController.h"


void UWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
	InventoryComponent = WCParams.InventoryComponent;	
}

void UWidgetController::BroadCastInitValues()
{
}

void UWidgetController::BindCallbacksToDependencies()
{
}
