// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerData.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlayerDataSubsystem.generated.h"


UCLASS()
class MMOSYSTEM_API UPlayerDataSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	
	static UPlayerDataSubsystem& Get(const UObject* WorldContextObject);
	
	UPROPERTY()
	bool bIsPlayerDataLoaded = false;

private:
	
	FCharBaseInfo PlayerData = FCharBaseInfo();
	
};
