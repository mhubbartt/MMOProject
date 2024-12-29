// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InvStucsNEnums.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FInventoryUpdated);
DECLARE_DYNAMIC_DELEGATE_OneParam(FInventoryLoaded, bool, bSuccess);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FInventorySaved, bool, bSuccess, FString, Message);

struct FInvEntry;


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MMOSYSTEM_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UInventoryComponent(const FObjectInitializer& ObjectInitializer);
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void InitializeComponent() override;

	//~UObject Replication
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void ReadyForReplication() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;




	/*  Debug Functions */
	UPROPERTY(EditAnywhere)
	bool bShowDebug = false;
	void DebugInventory();

	//Getters

	UFUNCTION(BlueprintCallable, Category = "A WPU Inventory Component|Functions")
	TArray<FInvEntry> GetInventory() { return InventoryList.Inventory; }
	UFUNCTION(BlueprintCallable, Category = "A WPU Inventory Component|Functions")
	FInventoryList GetInventoryList() { return InventoryList; }
	UFUNCTION(BlueprintCallable, Category = "A WPU Inventory Component|Functions")
	int32 GetInventorySize() { return InventorySize; }






	/*  Main Editor Functions */

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "A WPU Inventory Manager|Functions")
	void AddItemToInventory(FName ItemName, UStaticItemData* StaticItemData, FDynamicItemData
							DynamicItemData, int32 Quantity);

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "A WPU Inventory Manager|Functions")
	void RemoveItemFromInventory(FName UniqueItemID, int32 QuantityToRemove, bool bDestroyAll = false, bool bIsConsumed = true);





	//~Delegates
	FInventoryUpdated InventoryUpdateDelegate;
	FInventoryLoaded InventoryLoadedDelegate;

protected:

	// Async loading inventory
	UPROPERTY()
	bool bIsInventoryLoaded = false;
	UPROPERTY()
	TObjectPtr<UInventoryComponent> PendingInventoryComponent = nullptr;
	FName PendingPlayerName = NAME_None;

private:

	UPROPERTY(Replicated)
	FInventoryList InventoryList;

	UPROPERTY(EditAnywhere)
	int32 InventorySize = 5;


};



