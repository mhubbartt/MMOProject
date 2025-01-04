#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ChatSettings.generated.h"



/**
 * Configuration for the chat system, accessible in Project Settings.
 */
UCLASS(Config=Game, DefaultConfig, meta=(DisplayName="Chat Settings"))
class MMOSYSTEM_API UChatSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	
	// Enable or disable profanity filtering
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Player Settings")
	bool bEnableProfanityFilter = true;

	// Default chat channel
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Player Settings")
	FString DefaultChannel = "General";

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Player Settings")
	int32 LocalMaxChatHistory = 1000;


	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="System Settings")
	TArray<FString> DefaultChannels = {"General", "Trade", "Help"};

	// Maximum number of messages in chat history
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="System Settings")
	int32 MaxChatHistory = 10000;

	// Enable or disable chat moderation
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="System Settings")
	bool bEnableModeration = true;

	// Prohibited words for moderation
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category="System Settings")
	TArray<FString> ProhibitedWords = {"badword1", "badword2", "badword3"};

	// Maximum number of messages in chat history
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="System Settings")
	FDirectoryPath LogDirectory = FDirectoryPath( FPaths::ProjectLogDir() + TEXT("Logs"));

	// Maximum number of messages in chat history
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="System Settings")
	FFilePath LogFileName = FFilePath( TEXT("ChatLog.log"));

	


	// Returns the category for this settings page in Project Settings
	virtual FName GetCategoryName() const override { return FName("Chat Settings"); }

	
};


