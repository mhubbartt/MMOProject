// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ChatWidget.generated.h"


struct FChatMessage;
/**
 * 
 */
UCLASS()
class MMOSYSTEM_API UChatWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	// Update the chat messages in the UI
	UFUNCTION(BlueprintCallable, Category = "Chat")
	void UpdateChatMessages(const TArray<FChatMessage>& ChatHistory);

protected:
	// ScrollBox for messages
	UPROPERTY(BlueprintReadWrite,meta = (BindWidget))
	class UScrollBox* ChatScrollBox;

	// Blueprint-exposed method for adding a single message
	UFUNCTION(BlueprintCallable, Category = "Chat")
	void AddChatMessage(const FChatMessage& ChatMessage);
};
