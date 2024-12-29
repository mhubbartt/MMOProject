// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetSubsystem.h"


UWidgetSubsystem::UWidgetSubsystem()
{
}

void UWidgetSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogTemp, Warning, TEXT("Widget Subsystem Initialized !!!! "));
}
