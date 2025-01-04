// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MSPlayerState.h"
#include "GameFramework/PlayerController.h"
#include "MmoSystem/Camera/MSCameraAssistInterface.h"
#include "MSPlayerController.generated.h"


class UChatSystem;
class UChatComponent;
class UInventoryManager;




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
	UInventoryManager* GetInventoryComponent() const;
	UChatSystem* GetChatComponent() const;

	

protected:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInventoryManager> InventoryComponent;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UChatSystem> ChatComponent;

};
