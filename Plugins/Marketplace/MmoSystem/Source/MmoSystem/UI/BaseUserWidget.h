// Copyright Wilbur Productions

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseUserWidget.generated.h"


class UWidgetController;

UCLASS(BlueprintType, Blueprintable)
class MMOSYSTEM_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetWidgetController(UObject* InWidgetController);

	UPROPERTY(BlueprintReadWrite)
	TObjectPtr<UWidgetController> WidgetController;
	

protected:

	UFUNCTION(BlueprintImplementableEvent)
	void WidgetControllerSet();

	
};
