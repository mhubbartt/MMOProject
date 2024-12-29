// Fill out your copyright notice in the Description page of Project Settings.


#include "InventorySaveBlobStruct.h"
#include "MmoSystem/SystemMessages/LoggingMacros.h"
#include "Serialization/BufferArchive.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"

using namespace MSGlobal;


void FInventorySaveBlobStruct::NetSerialize(FArchive& Ar, TArray<FStatsAndEffects>& StructArray)
{
	
	if (Ar.IsSaving())
	{	

		if (SaveObject.ItemName != "NONAMEDUDE")
		{
			Ar << SaveObject.ItemName;
			UE_LOG(LogMSInventorySystem, Warning, TEXT("ItemName Serialization Completed."));
		}
		 NumElements = StructArray.Num();		
		if (NumElements > 0)
		{
			// Write the number of elements first
			Ar << NumElements;
			// Write each struct
			for (FStatsAndEffects Struct : StructArray)
			{
				Ar << Struct;
			}			
			UE_LOG(LogMSInventorySystem, Warning, TEXT("StatsAndEffects Serialization Completed."));
		}
		if (SaveObject.Condition != -2.0f)
		{
			Ar << SaveObject.Condition;
			UE_LOG(LogMSInventorySystem, Warning, TEXT("Condition Serialization Completed."));
		}

		Ar << SaveObject.ITemColor1 ;
		Ar << SaveObject.ITemColor2 ;
					
		
		UE_LOG(LogMSInventorySystem, Warning, TEXT("Serialization Completed."));
	
	}

	if (Ar.IsLoading())
	{
		// Load the basic stats
		Ar << SaveObject.ItemName;

		
		Ar << NumElements;

		if (NumElements > 0)
		{
			StructArray.Empty(NumElements);
			for (int32 i = 0; i < NumElements; i++)
			{
				FStatsAndEffects Struct;
				Ar << Struct;
				StructArray.Add(Struct);
			}
			UE_LOG(LogMSInventorySystem, Warning, TEXT("StatsAndEffects Deserialization Completed."));
		}		
		
		Ar << SaveObject.Condition;
		Ar << SaveObject.ITemColor1 ;
		Ar << SaveObject.ITemColor2 ;		

		UE_LOG(LogMSInventorySystem, Warning, TEXT("Deserialization Completed."));
	}
	
}

bool FInventorySaveBlobStruct::DeserializeFromBinary( TArray<uint8>& Data, TArray<FStatsAndEffects>& StructArray)
{
	FMemoryReader MemoryReader(Data, true);
	 FObjectAndNameAsStringProxyArchive ProxyArchive(MemoryReader, true);
	NetSerialize(ProxyArchive,StructArray);

	return !MemoryReader.IsError();
}

bool FInventorySaveBlobStruct::SerializeToBinary( TArray<FStatsAndEffects>& StructArray, TArray<uint8>& Data)
{
	FBufferArchive BufferArchive(true);
	FObjectAndNameAsStringProxyArchive ProxyArchive(BufferArchive, true);
	NetSerialize(ProxyArchive,StructArray); // Use ArchiveUObject for serialization
	if (BufferArchive.Num() > 0)
	{
		Data.Append(BufferArchive.GetData(), BufferArchive.Num());
		return true;
	}
	return false;
}
void FInventorySaveBlobStruct::TestSerializationAndDeserialization(FName ItemName,  TArray<FStatsAndEffects>& Effects, float Condition, FLinearColor Color1, FLinearColor Color2)
{
	// Set up the SaveObject
	SaveObject.ItemName = ItemName;
	SaveObject.Condition = Condition;
	SaveObject.ITemColor1 = Color1;
	SaveObject.ITemColor2 = Color2;

	// Serialize the data
	TArray<uint8> BinaryData;
	if (SerializeToBinary(Effects, BinaryData))
	{
		UE_LOG(LogMSInventorySystem, Log, TEXT("Serialization successful for item: %s"), *ItemName.ToString());
	}
	else
	{
		UE_LOG(LogMSInventorySystem, Error, TEXT("Serialization failed for item: %s"), *ItemName.ToString());
		return; // Stop further processing
	}

	// Deserialize the data
	TArray<FStatsAndEffects> DeserializedEffects;
	if (DeserializeFromBinary(BinaryData, DeserializedEffects))
	{
		UE_LOG(LogMSInventorySystem, Log, TEXT("Deserialization successful for item: %s"), *ItemName.ToString());

		// Log the deserialized data
		for (const FStatsAndEffects& Effect : DeserializedEffects)
		{
			UE_LOG(LogMSInventorySystem, Log, TEXT("StatTag: %s, StatAmount: %d, GameplayEffect: %s"),
				   *Effect.StatTag.ToString(),
				   Effect.StatAmount,
				   Effect.GameplayEffect ? *Effect.GameplayEffect->GetName() : TEXT("None"));
		}
	}
	else
	{
		UE_LOG(LogMSInventorySystem, Error, TEXT("Deserialization failed for item: %s"), *ItemName.ToString());
	}
}