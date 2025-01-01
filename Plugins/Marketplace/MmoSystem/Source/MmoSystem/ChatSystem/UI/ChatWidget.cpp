#include "ChatWidget.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "MmoSystem/ChatSystem/ChatComponent.h"

void UChatWidget::UpdateChatMessages(const TArray<FChatMessage>& ChatHistory)
{
	if (!ChatScrollBox) return;

	ChatScrollBox->ClearChildren();

	for (const FChatMessage& Message : ChatHistory)
	{
		AddChatMessage(Message);
	}
}

void UChatWidget::AddChatMessage(const FChatMessage& ChatMessage)
{
	if (!ChatScrollBox) return;
	
	UTextBlock* MessageText = NewObject<UTextBlock>(this);
	FString FormattedMessage = FString::Printf(TEXT("[%s] %s: %s"),
	                                           *ChatMessage.Timestamp.ToString(),
											   *ChatMessage.Sender,
											   *ChatMessage.Message);

	MessageText->SetText(FText::FromString(FormattedMessage));
	ChatScrollBox->AddChild(MessageText);
}
