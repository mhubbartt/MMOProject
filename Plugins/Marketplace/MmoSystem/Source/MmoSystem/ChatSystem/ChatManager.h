#pragma once

#include "CoreMinimal.h"
#include "ChatManager.generated.h"

struct FChatMessage;
class UChatSystem;
class AMSPlayerController;

UCLASS()
class MMOSYSTEM_API UChatManager : public UObject
{
	GENERATED_BODY()

public:

	
	static UChatManager* Get();

	virtual void BeginDestroy() override;

	void RegisterPlayerToRoom(const FString& RoomName, AMSPlayerController* Player);
	void UnregisterPlayerFromRoom(const FString& RoomName, AMSPlayerController* Player);
	void BroadcastMessageToRoom(const FString& RoomName, const FChatMessage& ChatMessage);
	bool IsPlayerInRoom(const FString& RoomName, AMSPlayerController* Player) const;
	void DestroyInstance();
	void PrintCurrentChannelsToScreen() const;

private:
	static UChatManager* Instance;

	TMap<FString, TSet<AMSPlayerController*>> GlobalChatRooms; // RoomName -> Players

	mutable FRWLock  ChatRoomMutex; // Mutex for thread-safe operations
};
