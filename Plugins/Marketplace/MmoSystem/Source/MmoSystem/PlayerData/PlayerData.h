// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MmoSystem/Inventory/InventoryManager/InventorySaveBlobStruct.h"
#include "PlayerData.generated.h"


UENUM(BlueprintType)
enum EPlayerGender : uint8
{
	
	Male,
	Female
};

UENUM(BlueprintType)
enum ECharClass : uint8
{
	Unset,
	Combat,
	Healer,
	Tradesman
};




USTRUCT(BlueprintType)
struct FCharBaseInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString SurName;
	
	UPROPERTY()
	TEnumAsByte<EPlayerGender> Gender = Male;
	
	UPROPERTY()
	TEnumAsByte<ECharClass> Class = Unset;
	
};

 UCLASS(BlueprintType, Blueprintable)
 class UPlayerData : public UBlobObjectWrapper
 {
 	GENERATED_BODY()

 public:

 	UPROPERTY(BlueprintReadWrite)
 	FCharBaseInfo BaseInfo = FCharBaseInfo();
 	
 };
