// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MmoSystem/Inventory/InvStucsNEnums.h"
#include "InventorySaveBlobStruct.generated.h"


struct FInventorySaveItem;

UCLASS(Abstract)
class UBlobObjectWrapper : public UObject
{
	GENERATED_BODY()
};



USTRUCT(BlueprintType)
struct FInventoryBlobObjectWrapper 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName ItemName = "NONAMEDUDE";

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<FStatsAndEffects> StatsAndEffects = TArray<FStatsAndEffects>();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Condition = -2.0f;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor ITemColor1 = FLinearColor();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor ITemColor2 = FLinearColor();



	
};

USTRUCT(BlueprintType)
struct FInventorySaveBlobStruct
{
	GENERATED_BODY()

	FInventorySaveBlobStruct(): SaveObject()
	{
	} ;

	UPROPERTY(BlueprintReadOnly)
	float BlobVersion = 1.0;  // Has to have matching version with  FInventorySaveItem

	UPROPERTY(BlueprintReadWrite)
	FString CharacterName = "";  // this is the table name

	UPROPERTY(BlueprintReadWrite)
	FInventoryBlobObjectWrapper  SaveObject ;

	

	
	void NetSerialize(FArchive& Ar, TArray<FStatsAndEffects>& StructArray);
	bool DeserializeFromBinary( TArray<uint8>& Data, TArray<FStatsAndEffects>& StructArray);
	bool SerializeToBinary( TArray<FStatsAndEffects>& StructArray,TArray<uint8>& Data);

	
	void TestSerializationAndDeserialization(FName ItemName, TArray<FStatsAndEffects>& Effects, float Condition, FLinearColor Color1, FLinearColor Color2);
	int32 NumElements = 0;

};

USTRUCT(BlueprintType)
struct FInventorySaveItem
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	float BlobVersion = 1.0; // Has to have matching version with  FInventorySaveBlobStruct

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName ItemName = "";

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString UniqueItemID = "";

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 SlotIndex = -1;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FGameplayTag SlotTag = FGameplayTag();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Quantity = 0;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSoftObjectPtr<UStaticItemData> StaticData = nullptr;

	// Add the BlobStruct to handle item data
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FInventorySaveBlobStruct DynamicData  = FInventorySaveBlobStruct();
};