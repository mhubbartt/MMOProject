// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WidgetController.h"
#include "WidgetSystemController.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInventoryUpdatedWCDelegate);

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class MMOSYSTEM_API UWidgetSystemController : public UWidgetController
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintAssignable,BlueprintCallable)
	FInventoryUpdatedWCDelegate OnInventoryUpdated;
	
	virtual void BindCallbacksToDependencies() override;

	virtual void BroadCastInitValues() override;
};
