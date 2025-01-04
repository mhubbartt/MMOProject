#include "ChatSystem.h"

#include "ChatManager.h"
#include "ChatMessage.h"
#include "LuaManager.h"
#include "MmoSystem/Game/MSPlayerController.h"


ULuaManager* UChatSystem::LuaManager = nullptr;
UChatSystem::UChatSystem()
{

    if (!LuaManager)
    {
        LuaManager = NewObject<ULuaManager>();
        LuaManager->InitializeLua();
    }
    
}

void UChatSystem::BeginPlay()
{
    Super::BeginPlay();    
}

void UChatSystem::ServerSendChatMessage_Implementation(const FString& Message)
{
    if (Message.StartsWith(TEXT("/")))
    {
        ParseCommand(Message);
        return;
    }

    FChatMessage NewMessage;
    NewMessage.Sender = GetOwner()->GetName(); // Assuming the owner is a PlayerController
    NewMessage.MessageContent = Message;
    NewMessage.Timestamp = FDateTime::Now();

    BroadcastMessage(NewMessage);
}

bool UChatSystem::ServerSendChatMessage_Validate(const FString& Message)
{
    return true; // Add validation logic as needed
}

void UChatSystem::ClientReceiveChatMessage_Implementation(const FChatMessage& ChatMessage)
{
    // Store the last received message
    LastReceivedMessage = ChatMessage;

    // Broadcast to UI or any listener
    OnMessageReceived.Broadcast(ChatMessage);
}

void UChatSystem::BroadcastMessage(const FChatMessage& ChatMessage)
{
    FString CurrentRoom = "GlobalRoom"; // Replace with the player's current room logic.
    UChatManager::Get()->BroadcastMessageToRoom(CurrentRoom, ChatMessage);
}

void UChatSystem::JoinChatRoom_Implementation(const FString& RoomName)
{
    AMSPlayerController* PlayerController = Cast<AMSPlayerController>(GetOwner());
    if (PlayerController)
    {
        UChatManager::Get()->RegisterPlayerToRoom(RoomName, PlayerController);
    }
}

void UChatSystem::LeaveChatRoom_Implementation(const FString& RoomName)
{
    AMSPlayerController* PlayerController = Cast<AMSPlayerController>(GetOwner());
    if (PlayerController)
    {
        UChatManager::Get()->UnregisterPlayerFromRoom(RoomName, PlayerController);
    }
}

void UChatSystem::ParseCommand(const FString& Command)
{
    TArray<FString> Parsed;
    Command.ParseIntoArray(Parsed, TEXT(" "), true);

    if (Parsed[0] == TEXT("/whisper") && Parsed.Num() > 2)
    {
        FString TargetPlayer = Parsed[1];
        FString PrivateMessage = FString::Join(Parsed[2].Mid(2), TEXT(" "));

        // Handle private message logic
    }
    else if (Parsed[0] == TEXT("/join") && Parsed.Num() > 1)
    {
        JoinChatRoom(Parsed[1]);
    }
}
