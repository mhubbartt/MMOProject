#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ChatComponent.generated.h"


class UChatSettings;





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


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChatHistoryUpdated, const TArray<FChatMessage>&, UpdatedHistory);
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
	APlayerController* FindPlayerController(const FString& PlayerName);

	
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

	UFUNCTION(BlueprintCallable, Category = "Chat")
	void ReloadChatSettings();
	
	UFUNCTION(BlueprintCallable, Category = "Chat")
	TArray<FChatMessage> GetOrderedChatHistory();
	
	UFUNCTION(BlueprintCallable, Category = "Chat")
	void UpdateChatUI(const TArray<FChatMessage>& UpdatedHistory);


	
	// Delegates
	UPROPERTY(BlueprintAssignable, Category = "Chat")
	FOnChatHistoryUpdated OnChatHistoryUpdated;




protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	// Replication handler
	UFUNCTION()
	void OnRep_ChatHistory();

	
	bool ModerateMessage(FChatMessage ChatMessage);
	void ModerateMessageAsync( FChatMessage ChatMessage, TFunction<void(bool)> Callback);
	void LogMessageAsync( FChatMessage ChatMessage);

private:

	UPROPERTY(ReplicatedUsing=OnRep_ChatHistory)	
	TArray<FChatMessage> ChatHistory; // Fixed-size buffer for chat messages

	int32 CircularIndex = 0; // Tracks the current position
	
	FCriticalSection ChatHistoryMutex;
	UPROPERTY()
	UChatSettings* ChatSettings = nullptr;
};