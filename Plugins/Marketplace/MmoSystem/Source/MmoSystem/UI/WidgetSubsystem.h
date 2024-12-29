// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WidgetSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class MMOSYSTEM_API UWidgetSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	UWidgetSubsystem();
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	
};
