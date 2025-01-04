#pragma once

#include "CoreMinimal.h"
#include "ChatMessage.h"
#include "Blueprint/UserWidget.h"
#include "ChatWidget.generated.h"

class AMSPlayerController;

UCLASS()
class MMOSYSTEM_API UChatWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable)
    void SendMessage();

    UFUNCTION(BlueprintCallable)
    void AddMessageToChatHistory(const FChatMessage& Message);
      

protected:
    UPROPERTY(Blueprintable,BlueprintReadWrite,meta = (BindWidget))
    class UEditableTextBox* InputField;

    UPROPERTY(Blueprintable,BlueprintReadWrite,meta = (BindWidget))
    class UScrollBox* ChatHistory;

    UPROPERTY(Blueprintable,BlueprintReadWrite)
    AMSPlayerController * PlayerController;
};
