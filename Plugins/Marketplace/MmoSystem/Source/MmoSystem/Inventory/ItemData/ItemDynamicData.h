#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayEffect.h" 
#include "ItemDynamicData.generated.h"








USTRUCT(BlueprintType)
struct FStatsAndEffects
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag StatTag = FGameplayTag();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StatAmount = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UGameplayEffect> GameplayEffect = nullptr;

	// Serialization and deserialization logic
	friend FArchive& operator<<(FArchive& Ar, FStatsAndEffects& Struct)
	{
		// Serialize the StatTag and StatAmount
		Ar << Struct.StatTag;
		Ar << Struct.StatAmount;

		// Serialize the GameplayEffect class reference
		UClass* GameplayEffectClass = Struct.GameplayEffect.Get();
		Ar << GameplayEffectClass;

		// Update the TSubclassOf from the deserialized class reference
		if (Ar.IsLoading())
		{
			Struct.GameplayEffect = GameplayEffectClass;
		}

		return Ar;
	}
};



USTRUCT(BlueprintType,Blueprintable)
struct FDynamicItemData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FName ItemName = "NONAMEDUDE";

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TArray<FStatsAndEffects> StatsAndEffects = TArray<FStatsAndEffects>();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float Condition = -2.0f;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor ITemColor1 = FColor();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FLinearColor ITemColor2 = FColor();
	
};