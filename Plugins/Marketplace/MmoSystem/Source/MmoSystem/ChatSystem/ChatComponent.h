#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "ChatComponent.generated.h"

USTRUCT(BlueprintType)
struct FChatMessage : public FFastArraySerializerItem
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

USTRUCT(BlueprintType)
struct FChatHistory : public FFastArraySerializer
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FChatMessage> Messages;

	void AddMessage(const FChatMessage& NewMessage)
	{
		Messages.Add(NewMessage);
		MarkItemDirty(Messages.Last());
	}
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

	// Add a chat message
	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSendMessage(const FString& Sender, const FString& Message, const FString& Channel);

	// Receive a chat message
	UFUNCTION(Client, Reliable)
	void ClientReceiveMessage(const FChatMessage& ChatMessage);

	// Add a message locally
	UFUNCTION(BlueprintCallable, Category = "Chat")
	void AddMessage(const FChatMessage& ChatMessage);

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

private:
	// Chat history
	UPROPERTY(ReplicatedUsing = OnRep_ChatHistory)
	TArray<FChatMessage> ChatHistory;

	// Replication handler
	UFUNCTION()
	void OnRep_ChatHistory();

	// Thread-safe Python moderation
	bool ModerateMessage(FChatMessage& ChatMessage);

	// Asynchronous logging
	void LogMessageAsync(const FChatMessage& ChatMessage);
};