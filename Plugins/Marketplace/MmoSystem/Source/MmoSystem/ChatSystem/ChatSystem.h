#pragma once

#include "CoreMinimal.h"
#include "ChatMessage.h"
#include "GameFramework/Actor.h"
#include "ChatSystem.generated.h"

class ULuaManager;
class AMSPlayerController;
struct FChatMessage;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageReceived, const FChatMessage& , ChatMessage);
UCLASS()
class MMOSYSTEM_API UChatSystem : public UActorComponent
{
    GENERATED_BODY()

public:
    UChatSystem();

    UFUNCTION(BlueprintCallable,Server, Reliable, WithValidation)
    void ServerSendChatMessage(const FString& Message);

    UFUNCTION(BlueprintCallable,Client, Reliable)
    void ClientReceiveChatMessage(const FChatMessage& ChatMessage);

    UFUNCTION(BlueprintCallable,Server, Reliable)
    void JoinChatRoom(const FString& RoomName);

    UFUNCTION(BlueprintCallable,Server, Reliable)
    void LeaveChatRoom(const FString& RoomName);
    FChatMessage& GetLastReceivedMessage() 
    {
        return LastReceivedMessage;
    };

    UPROPERTY(BlueprintAssignable,BlueprintCallable)
    FOnMessageReceived OnMessageReceived;

protected:
    virtual void BeginPlay() override;

private:
    void BroadcastMessage(const FChatMessage& ChatMessage);
    void ParseCommand(const FString& Command);

    
    TMap<FString, TSet<AMSPlayerController*>> ChatRooms; // RoomName -> Players
     FChatMessage LastReceivedMessage;

    /** Lua Manager */
    static ULuaManager* LuaManager;
};
