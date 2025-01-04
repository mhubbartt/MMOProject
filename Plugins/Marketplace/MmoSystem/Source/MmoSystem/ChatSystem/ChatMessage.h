#pragma once

#include "CoreMinimal.h"
#include "ChatMessage.generated.h"

USTRUCT(BlueprintType)
struct MMOSYSTEM_API FChatMessage
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite)
    FString Sender;

    UPROPERTY(BlueprintReadWrite)
    FString MessageContent;

    UPROPERTY(BlueprintReadWrite)
    FDateTime Timestamp;

    FChatMessage() : Sender(TEXT("")), MessageContent(TEXT("")), Timestamp(FDateTime::Now()) {}
};
