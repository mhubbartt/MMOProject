// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerDataSubsystem.h"
#include "PlayerData.h"
UPlayerDataSubsystem& UPlayerDataSubsystem::Get(const UObject* WorldContextObject)
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::Assert);
	check(World);
	UPlayerDataSubsystem* Router = UGameInstance::GetSubsystem<UPlayerDataSubsystem>(World->GetGameInstance());
	check(Router);
	return *Router;
}