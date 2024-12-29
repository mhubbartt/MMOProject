// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MSGameInstance.generated.h"

//class UFileLogger;
/**
 * 
 */
UCLASS()
class MMOSYSTEM_API UMSGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	//UFUNCTION(BlueprintCallable)
	//void SetFileLogger(UFileLogger* Logger) { FileLogger = Logger; }

	//UFUNCTION(BlueprintCallable,BlueprintPure)
	//UFileLogger *GetFileLogger() const { return FileLogger; }
	

	
private:
	virtual void Init() override;

	// UPROPERTY()	
	// UFileLogger* FileLogger;
};
