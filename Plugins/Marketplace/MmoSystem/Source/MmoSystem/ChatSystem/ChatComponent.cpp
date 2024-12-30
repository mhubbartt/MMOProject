#include "ChatComponent.h"
#include "Python.h"
#include "GameFramework/Actor.h"
#include "Net/UnrealNetwork.h"




UChatComponent::UChatComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(true);
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

    if (ModerateMessage(ChatMessage))
    {
        ChatHistory.Add(ChatMessage);
        OnRep_ChatHistory();
    }
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

void UChatComponent::AddMessage(const FChatMessage& ChatMessage)
{
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

bool UChatComponent::ModerateMessage(FChatMessage& ChatMessage)
{
    // Initialize the Python interpreter
    Py_Initialize();

    // Python script to define moderation function
    FString PythonScript = R"(
def moderate_message(sender, message, channel):
    prohibited_words = ["badword1", "badword2"]
    for word in prohibited_words:
        if word in message.lower():
            return f"[Moderated]: {sender}, your message contains prohibited content."
    return message
)";

    // Execute the Python script
    PyRun_SimpleString(TCHAR_TO_UTF8(*PythonScript));

    // Retrieve the defined function
    PyObject* pModule = PyImport_AddModule("__main__"); // Add or get the __main__ module
    PyObject* pFunc = PyObject_GetAttrString(pModule, "moderate_message");

    if (pFunc && PyCallable_Check(pFunc))
    {
        // Prepare arguments for the Python function
        PyObject* pArgs = PyTuple_Pack(3,
            PyUnicode_FromString(TCHAR_TO_UTF8(*ChatMessage.Sender)),
            PyUnicode_FromString(TCHAR_TO_UTF8(*ChatMessage.Message)),
            PyUnicode_FromString(TCHAR_TO_UTF8(*ChatMessage.Channel))
        );

        // Call the Python function
        PyObject* pResult = PyObject_CallObject(pFunc, pArgs);

        if (pResult)
        {
            FString Result = UTF8_TO_TCHAR(PyUnicode_AsUTF8(pResult));
            Py_DECREF(pResult);

            // If the result is different, moderation rejected or modified the message
            if (!Result.IsEmpty() && Result != ChatMessage.Message)
            {
                ChatMessage.Message = Result;
                Py_DECREF(pArgs);
                Py_DECREF(pFunc);
                Py_Finalize();
                return false; // Message was moderated
            }
        }
        else
        {
            PyErr_Print(); // Log Python errors
        }

        Py_DECREF(pArgs);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to find or call the Python function."));
        PyErr_Print();
    }

    Py_DECREF(pFunc);
    Py_Finalize();

    return true; // Message passed moderation

}

void UChatComponent::LogMessageAsync(const FChatMessage& ChatMessage)
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
