// Copyright Wilbur Productions


#include "BaseUserWidget.h"

#include "WidgetController.h"
#include "Net/UnrealNetwork.h"


void UBaseUserWidget::SetWidgetController(UObject* InWidgetController)
{

	WidgetController = Cast<UWidgetController>(InWidgetController);
	WidgetControllerSet();
}




