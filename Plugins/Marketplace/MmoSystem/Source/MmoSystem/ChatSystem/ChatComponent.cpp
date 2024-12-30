#include "ChatComponent.h"

#include "ChatSettings.h"
#include "Python.h"
#include "HAL/PlatformFilemanager.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"



UChatComponent::UChatComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);
    Py_Initialize(); // Initialize Python once
}

UChatComponent::~UChatComponent()
{
    Py_Finalize(); // Finalize Python when the component is destroyed
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

    ModerateMessageAsync(ChatMessage, [this, Sender, Channel, ChatMessage](bool bIsApproved)
    {
        if (bIsApproved)
        {
            AddMessage(ChatMessage);
        }
        else
        {
            if (APlayerController* PC = Cast<APlayerController>(GetOwner()))
            {
                PC->ClientMessage(FString::Printf(TEXT("Your message was moderated: %s"), *ChatMessage.Message));
            }

            FChatMessage ModerationNotice;
            ModerationNotice.Sender = TEXT("System");
            ModerationNotice.Message = FString::Printf(TEXT("%s's message was moderated."), *Sender);
            ModerationNotice.Channel = Channel;
            ModerationNotice.Timestamp = FDateTime::Now();

            AddMessage(ModerationNotice);
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
    FScopeLock Lock(&ChatHistoryMutex); // Lock the mutex

    const UChatSettings* Settings = GetDefault<UChatSettings>();
    const int32 MaxMessages = Settings->MaxChatHistory;

    if (ChatHistory.Num() >= MaxMessages)
    {
        ChatHistory.RemoveAt(0);
    }

    ChatHistory.Add(ChatMessage);
    LogMessageAsync(ChatMessage);
}

void UChatComponent::OnRep_ChatHistory()
{
    for (const FChatMessage& Message : ChatHistory)
    {
        // Notify UI or other systems
    }
}

bool UChatComponent::ModerateMessage(FChatMessage ChatMessage)
{
    const UChatSettings* Settings = GetDefault<UChatSettings>();

    if (!Py_IsInitialized())
    {
        UE_LOG(LogTemp, Warning, TEXT("Python is not initialized. Falling back to C++ moderation."));

        // Fallback moderation logic
        for (const FString& Word : Settings->ProhibitedWords)
        {
            if (ChatMessage.Message.Contains(Word))
            {
                ChatMessage.Message = FString::Printf(TEXT("[Moderated]: Your message contains prohibited content."));
                return false; // Message rejected
            }
        }

        return true; // Message passed moderation
    }

    // Python moderation logic
    FString ProhibitedWordsString = FString::Join(Settings->ProhibitedWords, TEXT(", "));
    FString PythonScript = FString::Printf(TEXT(R"(
prohibited_words = [%s]
def moderate_message(sender, message, channel):
    for word in prohibited_words:
        if word in message.lower():
            return f"[Moderated]: {sender}, your message contains prohibited content."
    return message
)"), *ProhibitedWordsString);

    PyRun_SimpleString(TCHAR_TO_UTF8(*PythonScript));

    PyObject* pModule = PyImport_AddModule("__main__");
    PyObject* pFunc = PyObject_GetAttrString(pModule, "moderate_message");

    if (pFunc && PyCallable_Check(pFunc))
    {
        PyObject* pArgs = PyTuple_Pack(3,
            PyUnicode_FromString(TCHAR_TO_UTF8(*ChatMessage.Sender)),
            PyUnicode_FromString(TCHAR_TO_UTF8(*ChatMessage.Message)),
            PyUnicode_FromString(TCHAR_TO_UTF8(*ChatMessage.Channel))
        );

        PyObject* pResult = PyObject_CallObject(pFunc, pArgs);

        if (pResult)
        {
            FString Result = UTF8_TO_TCHAR(PyUnicode_AsUTF8(pResult));
            Py_DECREF(pResult);

            if (!Result.IsEmpty() && Result != ChatMessage.Message)
            {
                ChatMessage.Message = Result;
                return false; // Moderation rejected the message
            }
        }
        else
        {
            PyErr_Print(); // Log Python errors
        }

        Py_XDECREF(pArgs);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to call Python moderation function."));
        PyErr_Print();
    }

    return true; // Allow message if Python fails
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
    UE_LOG(LogTemp, Log, TEXT("Settings Reloaded: MaxChatHistory = %d, DefaultChannel = %s, Moderation = %s"),
           Settings->MaxChatHistory,
           *Settings->DefaultChannel,
           Settings->bEnableModeration ? TEXT("Enabled") : TEXT("Disabled"));
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