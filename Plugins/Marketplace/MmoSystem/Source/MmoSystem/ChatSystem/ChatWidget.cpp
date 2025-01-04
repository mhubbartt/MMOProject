#include "ChatWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "ChatSystem.h"
#include "MmoSystem/Game/MSPlayerController.h"

void UChatWidget::SendMessage()
{
    if (InputField && !InputField->GetText().IsEmpty())
    {
        FString Message = InputField->GetText().ToString();
        InputField->SetText(FText::GetEmpty());
        
        if (PlayerController)
        {
            PlayerController->GetChatComponent()->ServerSendChatMessage(Message);
        }
    }
}

void UChatWidget::AddMessageToChatHistory(const FChatMessage& Message)
{
    if (ChatHistory)
    {
        UTextBlock* MessageBlock = NewObject<UTextBlock>(ChatHistory);
        MessageBlock->SetText(FText::FromString(FString::Printf(TEXT("%s: %s"), *Message.Sender, *Message.MessageContent)));
        ChatHistory->AddChild(MessageBlock);
    }
}