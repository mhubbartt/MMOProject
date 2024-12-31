#include "ChatComponent.h"

#include <chrono>

#include "ChatSettings.h"
#include "Python.h"
#include "PythonManager.h"
#include "HAL/PlatformFilemanager.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"



// Global Python lifecycle variables
static std::atomic<int> PythonInstanceCount = 0;
static bool bPythonAvailable = true; // Tracks Python availability

// Thread-safe timestamp generator
FString GetTimestamp()
{
    auto Now = std::chrono::system_clock::now();
    auto Time = std::chrono::system_clock::to_time_t(Now);
    char Buffer[26];
    ctime_s(Buffer, sizeof(Buffer), &Time);
    return FString(Buffer).TrimEnd(); // Trim trailing newline
}

UChatComponent::UChatComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);

    // Use PythonManager for lifecycle management
    PythonManager::GetInstance().Initialize();
}

UChatComponent::~UChatComponent()
{    
    
    PythonManager::GetInstance().Finalize();
    
}


void UChatComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UChatComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(ThisClass, ChatHistory);
}

void UChatComponent::ServerSendMessage_Implementation(const FString& Sender, const FString& Message, const FString& Channel)
{
    if (Message.IsEmpty() || Channel.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid message or channel"));
        return;
    }

    FChatMessage ChatMessage;
    ChatMessage.Sender = Sender;
    ChatMessage.Message = Message;
    ChatMessage.Channel = Channel;
    ChatMessage.Timestamp = FDateTime::Now();

    ModerateMessageAsync(ChatMessage, [this, Sender, ChatMessage](bool bIsApproved)
    {
        if (bIsApproved)
        {
            AddMessage(ChatMessage);
        }
        else
        {
            NotifySender(Sender, FString::Printf(TEXT("Your message was moderated: %s"), *ChatMessage.Message));
        }
    });
}

bool UChatComponent::ServerSendMessage_Validate(const FString& Sender, const FString& Message, const FString& Channel)
{
    return !Message.IsEmpty() && !Channel.IsEmpty();
}

void UChatComponent::ClientReceiveMessage_Implementation(const FChatMessage& ChatMessage)
{
    ChatHistory.Add(ChatMessage);
    // Notify UI or other systems
}

void UChatComponent::AddMessage( FChatMessage ChatMessage)
{
    FScopeLock Lock(&ChatHistoryMutex); // Ensure thread safety

    if (MaxChatHistory == 1)
    {
        ChatHistory.SetNum(1);
        CircularIndex = 0;
        UE_LOG(LogTemp, Log, TEXT("Buffer size is 1. Overwriting the single message with [%s: %s]."), 
               *ChatMessage.Sender, *ChatMessage.Message);
        ChatHistory[CircularIndex] = ChatMessage;
        return;
    }

    if (ChatHistory.Num() < MaxChatHistory)
    {
        ChatHistory.Add(ChatMessage);
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Overwriting message [%s: %s] at CircularIndex %d."),
               *ChatHistory[CircularIndex].Sender, *ChatHistory[CircularIndex].Message, CircularIndex);

        ChatHistory[CircularIndex] = ChatMessage;

        // Log when CircularIndex wraps to 0
        if (CircularIndex == MaxChatHistory - 1)
        {
            UE_LOG(LogTemp, Log, TEXT("CircularIndex wrapped to 0. Buffer is full."));
        }

        CircularIndex = (CircularIndex + 1) % MaxChatHistory;
    }

    UE_LOG(LogTemp, Log, TEXT("Added message [%s: %s] at CircularIndex %d."),
           *ChatMessage.Sender, *ChatMessage.Message, CircularIndex);

 
}

void UChatComponent::OnRep_ChatHistory()
{
    // Notify the client that the chat history has been updated
    UE_LOG(LogTemp, Log, TEXT("Chat history replicated to client."));

    // Update the chat UI (assuming a method exists for this)
    UpdateChatUI(ChatHistory);
}

bool UChatComponent::ModerateMessage(FChatMessage ChatMessage)
{
    if (!PythonManager::GetInstance().IsPythonAvailable())
    {
        UE_LOG(LogTemp, Warning, TEXT("Python unavailable. Skipping moderation."));
        return true; // Allow all messages if moderation is disabled
    }

    // Existing moderation logic...
    const UChatSettings* Settings = GetDefault<UChatSettings>();
    if (Settings->bEnableProfanityFilter)
    {
        for (const FString& Word : Settings->ProhibitedWords)
        {
            if (ChatMessage.Message.Contains(Word))
            {
                ChatMessage.Message = FString::Printf(TEXT("[Moderated]: Your message contains prohibited content."));
                return false; // Message rejected
            }
        }
    }
    return true;
}


void UChatComponent::LogMessageAsync( FChatMessage ChatMessage)
{
    FString LogEntry = FString::Printf(TEXT("[%s] [%s] %s: %s"),
                                       *ChatMessage.Timestamp.ToString(),
                                       *ChatMessage.Channel,
                                       *ChatMessage.Sender,
                                       *ChatMessage.Message);

    FString LogFilePath = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Logs/ChatLog.txt"));

    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [LogEntry, LogFilePath]()
    {
        FFileHelper::SaveStringToFile(LogEntry, *LogFilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
    });
}

void UChatComponent::ReloadChatSettings()
{
    const UChatSettings* Settings = GetDefault<UChatSettings>();

    MaxChatHistory = Settings->MaxChatHistory;

    // Validate MaxChatHistory
    if (MaxChatHistory <= 0)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid MaxChatHistory value: %d. Resetting to default 10."), MaxChatHistory);
        MaxChatHistory = 10; // Reset to a default value
    }

    // Ensure ChatHistory size matches MaxChatHistory
    ChatHistory.SetNum(MaxChatHistory);
    CircularIndex = 0; // Reset CircularIndex
}



void UChatComponent::ModerateMessageAsync( FChatMessage ChatMessage, TFunction<void(bool)> Callback)
{
    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, ChatMessage, Callback]()
    {
        // Perform moderation
        bool bIsApproved = ModerateMessage(ChatMessage);

        // Call the callback on the game thread
        AsyncTask(ENamedThreads::GameThread, [Callback, bIsApproved]()
        {
            Callback(bIsApproved);
        });
    });
}

TArray<FChatMessage> UChatComponent::GetOrderedChatHistory()
{
    FScopeLock Lock(&ChatHistoryMutex);

    TArray<FChatMessage> OrderedHistory;

    if (ChatHistory.Num() < MaxChatHistory)
    {
        return ChatHistory; // No wrapping; return as is
    }

    // Extract messages starting from CircularIndex
    for (int32 i = CircularIndex; i < ChatHistory.Num(); ++i)
    {
        OrderedHistory.Add(ChatHistory[i]);
    }

    // Add messages from the beginning up to CircularIndex
    for (int32 i = 0; i < CircularIndex; ++i)
    {
        OrderedHistory.Add(ChatHistory[i]);
    }

    return OrderedHistory;
}

void UChatComponent::NotifySender(const FString& Sender, const FString& Message)
{
    // Find the player controller associated with the sender
    APlayerController* SenderController = FindPlayerController(Sender);

    if (SenderController)
    {
        // Send the message to the sender
        SenderController->ClientMessage(Message);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Could not find PlayerController for sender: %s"), *Sender);
    }
}

APlayerController* UChatComponent::FindPlayerController(const FString& PlayerName)
{
    for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
    {
        APlayerController* PC = It->Get();
        if (PC && PC->PlayerState && PC->PlayerState->GetPlayerName() == PlayerName)
        {
            return PC;
        }
    }

    return nullptr;
}

void UChatComponent::UpdateChatUI(const TArray<FChatMessage>& UpdatedHistory)
{
    // Iterate through updated chat messages and display them in the UI
    for (const FChatMessage& Message : UpdatedHistory)
    {
        UE_LOG(LogTemp, Log, TEXT("[%s] %s: %s"), *Message.Timestamp.ToString(), *Message.Sender, *Message.Message);
        // Add messages to the UI here
    }
}

void UChatComponent::InitializePython()
{
    int RetryCount = 3; // Number of retries for initialization
    bool bInitialized = false;

    for (int Attempt = 1; Attempt <= RetryCount; ++Attempt)
    {
        Py_Initialize();
        if (Py_IsInitialized())
        {
            UE_LOG(LogTemp, Log, TEXT("[%s] Python initialized successfully on attempt %d."), *GetTimestamp(), Attempt);
            bInitialized = true;
            break;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("[%s] Python initialization failed on attempt %d."), *GetTimestamp(), Attempt);
        }
    }

    if (!bInitialized)
    {
        bPythonAvailable = false;
        UE_LOG(LogTemp, Error, TEXT("[%s] Python failed to initialize after multiple attempts. Disabling Python-dependent features."), *GetTimestamp());
        throw std::runtime_error("Python initialization failed.");
    }
}

void UChatComponent::FinalizePython()
{
    if (bPythonAvailable)
    {
        Py_Finalize();
        if (Py_IsInitialized())
        {
            UE_LOG(LogTemp, Error, TEXT("[%s] Python failed to finalize properly."), *GetTimestamp());
            throw std::runtime_error("Python finalization failed.");
        }
        else
        {
            UE_LOG(LogTemp, Log, TEXT("[%s] Python finalized successfully."), *GetTimestamp());
        }
    }
}

