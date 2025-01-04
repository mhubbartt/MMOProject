#include "ChatManager.h"

#include "ChatSystem.h"
#include "MmoSystem/Game/MSPlayerController.h"

UChatManager* UChatManager::Instance = nullptr;

UChatManager* UChatManager::Get()
{
	if (!Instance)
	{
		Instance = NewObject<UChatManager>();
		Instance->AddToRoot(); // Prevent garbage collection
	}
	return Instance;
}

void UChatManager::BeginDestroy()
{
	DestroyInstance();
	UObject::BeginDestroy();
}

void UChatManager::RegisterPlayerToRoom(const FString& RoomName, AMSPlayerController* Player)
{
	if (!Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot register null player to room %s"), *RoomName);
		return;
	}

	FRWScopeLock TryWriteLock(ChatRoomMutex, SLT_Write); // Acquire a write lock

	if (!GlobalChatRooms.Contains(RoomName))
	{
		GlobalChatRooms.Add(RoomName, TSet<AMSPlayerController*>());
	}

	if (!GlobalChatRooms[RoomName].Contains(Player))
	{
		GlobalChatRooms[RoomName].Add(Player);
		UE_LOG(LogTemp, Log, TEXT("Player %s registered to room %s"), *Player->GetName(), *RoomName);
	}
}

void UChatManager::UnregisterPlayerFromRoom(const FString& RoomName, AMSPlayerController* Player)
{
	if (!Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot unregister null player from room %s"), *RoomName);
		return;
	}

	FRWScopeLock TryWriteLock(ChatRoomMutex, SLT_Write); // Acquire a write lock

	if (!GlobalChatRooms.Contains(RoomName))
	{
		UE_LOG(LogTemp, Warning, TEXT("Room %s does not exist"), *RoomName);
		return;
	}

	if (!GlobalChatRooms[RoomName].Contains(Player))
	{
		UE_LOG(LogTemp, Warning, TEXT("Player %s is not in room %s"), *Player->GetName(), *RoomName);
		return;
	}

	GlobalChatRooms[RoomName].Remove(Player);
	UE_LOG(LogTemp, Log, TEXT("Player %s removed from room %s"), *Player->GetName(), *RoomName);

	if (GlobalChatRooms[RoomName].Num() == 0)
	{
		GlobalChatRooms.Remove(RoomName);
	}
}

void UChatManager::BroadcastMessageToRoom(const FString& RoomName, const FChatMessage& ChatMessage)
{
	FRWScopeLock TryReadLock(ChatRoomMutex, SLT_Write); // Acquire a read lock

	if (!GlobalChatRooms.Contains(RoomName))
	{
		UE_LOG(LogTemp, Warning, TEXT("Room %s does not exist"), *RoomName);
		return;
	}

	for (AMSPlayerController* Player : GlobalChatRooms[RoomName])
	{
		if (Player)
		{
			if (UChatSystem* ChatSystem = Player->GetChatComponent())
			{
				ChatSystem->ClientReceiveChatMessage(ChatMessage);
			}
		}
	}
}
bool UChatManager::IsPlayerInRoom(const FString& RoomName, AMSPlayerController* Player) const
{
	if (!Player)
	{
		UE_LOG(LogTemp, Warning, TEXT("Null player reference provided for room %s"), *RoomName);
		return false;
	}

	FRWScopeLock TryReadLock(ChatRoomMutex, SLT_Write); // Acquire a read lock

	if (!GlobalChatRooms.Contains(RoomName))
	{
		UE_LOG(LogTemp, Warning, TEXT("Room %s does not exist"), *RoomName);
		return false;
	}

	return GlobalChatRooms[RoomName].Contains(Player);
}
void UChatManager::DestroyInstance()
{
	if (Instance)
	{
		Instance->RemoveFromRoot(); // Allow garbage collection
		Instance = nullptr;
	}
}
void UChatManager::PrintCurrentChannelsToScreen() const
{
	if (GEngine)
	{
		FString Channels;
		{
			FRWScopeLock ReadLock(ChatRoomMutex, SLT_Write); // Acquire read lock

			for (const auto& Room : GlobalChatRooms)
			{
				Channels += Room.Key + TEXT(", ");
			}
		}

		if (Channels.IsEmpty())
		{
			Channels = TEXT("No active channels");
		}
		else
		{
			Channels.RemoveAt(Channels.Len() - 2); // Remove trailing comma and space
		}

		// Print to the screen
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Active Channels: ") + Channels);
	}
}