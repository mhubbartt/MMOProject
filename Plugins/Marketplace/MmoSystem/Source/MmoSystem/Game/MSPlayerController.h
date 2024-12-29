// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MSPlayerState.h"
#include "GameFramework/PlayerController.h"
#include "MmoSystem/Camera/MSCameraAssistInterface.h"
#include "MSPlayerController.generated.h"


class UInventoryManager;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMessageReceived, FGameplayTag, MessageTag, FString, Message);

UCLASS()
class MMOSYSTEM_API AMSPlayerController : public APlayerController, public IMSCameraAssistInterface
{
	GENERATED_BODY()
public:
	
	AMSPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void Tick(float DeltaSeconds) override;
	
	//~IMSCameraAssistInterface interface
	virtual void OnCameraPenetratingTarget() override;	
	bool bHideViewTargetPawnNextFrame = false;
	//~End of IMSCameraAssistInterface interface

	//Helper Functions

	AMSPlayerState* GetMMOPlayerState() const;
	UInventoryManager* GetInventoryComponent() const ;

	//~Message Functions
	UFUNCTION(BlueprintCallable,Server,Reliable,  Category = "Messaging")
	void BroadCastMessageToAllClients_Server(FGameplayTag MessageTag, const FString& Message);

	UFUNCTION(BlueprintCallable,Client,Reliable)
	void SendMessage(FGameplayTag MessageTag, const FString& Message);

	FOnMessageReceived OnMessageReceived;
	//~Message Functions End
	

protected:


	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TObjectPtr<UInventoryManager> InventoryComponent;


};
