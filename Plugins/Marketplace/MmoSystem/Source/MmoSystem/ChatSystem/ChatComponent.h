#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChatComponent.generated.h"

USTRUCT(BlueprintType)
struct FChatMessage
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Chat")
	FString Sender;

	UPROPERTY(BlueprintReadWrite, Category = "Chat")
	FString Message;

	UPROPERTY(BlueprintReadWrite, Category = "Chat")
	FString Channel;

	UPROPERTY(BlueprintReadWrite, Category = "Chat")
	FDateTime Timestamp;
};



/**
 * Chat Component for managing chat messages
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MMOSYSTEM_API UChatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Constructor
	UChatComponent();
	virtual ~UChatComponent() override;
	

	
	// Add a chat message
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSendMessage(const FString& Sender, const FString& Message, const FString& Channel);

	// Receive a chat message
	UFUNCTION(Client, Reliable)
	void ClientReceiveMessage(const FChatMessage& ChatMessage);

	// Add a message locally
	UFUNCTION(BlueprintCallable, Category = "Chat")
	void AddMessage( FChatMessage ChatMessage);
	
	UFUNCTION(BlueprintCallable, Category = "Chat")
	void NotifySender(const FString& Sender, const FString& Message);
	APlayerController* FindPlayerController(const FString& PlayerName);

	UFUNCTION(BlueprintCallable, Category = "Chat")
	void ReloadChatSettings();
	void ModerateMessageAsync( FChatMessage ChatMessage, TFunction<void(bool)> Callback);

	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Chat")
	int32 MaxChatHistory = 100;

	TArray<FChatMessage> GetOrderedChatHistory();
	void UpdateChatUI(const TArray<FChatMessage>& UpdatedHistory);
	void InitializePython();
	void FinalizePython();

	FCriticalSection ChatHistoryMutex; 

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

private:

	UPROPERTY(ReplicatedUsing=OnRep_ChatHistory)	
	TArray<FChatMessage> ChatHistory; // Fixed-size buffer for chat messages



	int32 CircularIndex = 0; // Tracks the current position



	// Replication handler
	UFUNCTION()
	void OnRep_ChatHistory();

	// Thread-safe Python moderation
	bool ModerateMessage(FChatMessage ChatMessage);

	// Asynchronous logging
	void LogMessageAsync( FChatMessage ChatMessage);
};