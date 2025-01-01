#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ChatSettings.generated.h"



UCLASS()
class UChatSettingsAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	FPrimaryAssetId SettingID;
	
};

UCLASS()
class UProhibitedWords : public UChatSettingsAsset
{
	GENERATED_BODY()

public:
	TArray<FString> ProhibitedWords;
	
};



/**
 * Configuration for the chat system, accessible in Project Settings.
 */
UCLASS(Config=Game, DefaultConfig, meta=(DisplayName="Chat Settings"))
class MMOSYSTEM_API UChatSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	// Enable or disable profanity filtering
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Moderation")
	bool bEnableProfanityFilter = true;
	
	// Maximum number of messages in chat history
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Chat")
	int32 MaxChatHistory = 100;

	// Default chat channel
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Chat")
	FString DefaultChannel = "General";

	// Enable or disable chat moderation
	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category="Moderation")
	bool bEnableModeration = true;

	// Prohibited words for moderation
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category="Moderation")
	UProhibitedWords* ProhibitedWords = nullptr;

	// Returns the category for this settings page in Project Settings
	virtual FName GetCategoryName() const override { return FName("Chat Settings"); }

	
};


