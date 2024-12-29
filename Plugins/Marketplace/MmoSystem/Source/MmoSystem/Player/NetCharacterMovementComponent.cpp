// Fill out your copyright notice in the Description page of Project Settings.


#include "NetCharacterMovementComponent.h"

#include "Components/CapsuleComponent.h"
#include "MmoSystem/GlobalsNTags.h"


using namespace MSGlobal;

UNetCharacterMovementComponent::UNetCharacterMovementComponent(const FObjectInitializer& ObjectInitializer)
    :Super(ObjectInitializer)
{
    
}
void UNetCharacterMovementComponent::SimulateMovement(float DeltaTime)
{
    if (bHasReplicatedAcceleration)
    {
        // Preserve our replicated acceleration
        const FVector OriginalAcceleration = Acceleration;
        Super::SimulateMovement(DeltaTime);
        Acceleration = OriginalAcceleration;
    }
    else
    {
        Super::SimulateMovement(DeltaTime);
    }
}

void UNetCharacterMovementComponent::SetReplicatedAcceleration(const FVector& InAcceleration)
{
    bHasReplicatedAcceleration = true;
    Acceleration = InAcceleration;
}

bool UNetCharacterMovementComponent::CanAttemptJump() const
{
    return Super::CanAttemptJump();
}

//============================================================================================
//Replication
//============================================================================================

//Set input flags on character from saved inputs
void UNetCharacterMovementComponent::UpdateFromCompressedFlags(uint8 Flags)//Client only
{
    Super::UpdateFromCompressedFlags(Flags);

    
}

 FNetworkPredictionData_Client* UNetCharacterMovementComponent::GetPredictionData_Client() const
{
    
    check(PawnOwner != NULL);
   // check(PawnOwner->GetLocalRole() < ROLE_Authority);

  if (ClientPredictionData == nullptr)
    {
        UNetCharacterMovementComponent* MutableThis = const_cast<UNetCharacterMovementComponent*>(this);

        MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_MyMovement(*this);
        MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
        MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
    }

    return ClientPredictionData;
}

void FSavedMove_MyMovement::Clear()
{
    Super::Clear();

    
}

uint8 FSavedMove_MyMovement::GetCompressedFlags() const
{
    uint8 Result = Super::GetCompressedFlags();

    return Result;
}

bool FSavedMove_MyMovement::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{

    return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void FSavedMove_MyMovement::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel,  FNetworkPredictionData_Client_Character& ClientData)
{
    Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);

    UNetCharacterMovementComponent* CharMov = Cast<UNetCharacterMovementComponent>(Character->GetCharacterMovement());
    if (CharMov)
    {
        
    }
}

void FSavedMove_MyMovement::PrepMoveFor(class ACharacter* Character)
{
    Super::PrepMoveFor(Character);

    UNetCharacterMovementComponent* CharMov = Cast<UNetCharacterMovementComponent>(Character->GetCharacterMovement());
    if (CharMov)
    {
        
    }
}

FNetworkPredictionData_Client_MyMovement::FNetworkPredictionData_Client_MyMovement(const UCharacterMovementComponent& ClientMovement)
: Super(ClientMovement)
{

}

FSavedMovePtr FNetworkPredictionData_Client_MyMovement::AllocateNewMove()
{
    return FSavedMovePtr(new FSavedMove_MyMovement());
}

const FNetCharacterGroundInfo& UNetCharacterMovementComponent::GetGroundInfo()
{
    if (!CharacterOwner || (GFrameCounter == CachedGroundInfo.LastUpdateFrame))
    {
        return CachedGroundInfo;
    }

    if (MovementMode == MOVE_Walking)
    {
        CachedGroundInfo.GroundHitResult = CurrentFloor.HitResult;
        CachedGroundInfo.GroundDistance = 0.0f;
    }
    else
    {
        const UCapsuleComponent* CapsuleComp = CharacterOwner->GetCapsuleComponent();
        check(CapsuleComp);

        const float CapsuleHalfHeight = CapsuleComp->GetUnscaledCapsuleHalfHeight();
        const ECollisionChannel CollisionChannel = (UpdatedComponent ? UpdatedComponent->GetCollisionObjectType() : ECC_Pawn);
        const FVector TraceStart(GetActorLocation());
        const FVector TraceEnd(TraceStart.X, TraceStart.Y, (TraceStart.Z - MSGlobal::GroundTraceDistance - CapsuleHalfHeight));

        FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(LyraCharacterMovementComponent_GetGroundInfo), false, CharacterOwner);
        FCollisionResponseParams ResponseParam;
        InitCollisionParams(QueryParams, ResponseParam);

        FHitResult HitResult;
        GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, CollisionChannel, QueryParams, ResponseParam);

        CachedGroundInfo.GroundHitResult = HitResult;
        CachedGroundInfo.GroundDistance = MSGlobal::GroundTraceDistance;

        if (MovementMode == MOVE_NavWalking)
        {
            CachedGroundInfo.GroundDistance = 0.0f;
        }
        else if (HitResult.bBlockingHit)
        {
            CachedGroundInfo.GroundDistance = FMath::Max((HitResult.Distance - CapsuleHalfHeight), 0.0f);
        }
    }

    CachedGroundInfo.LastUpdateFrame = GFrameCounter;

    return CachedGroundInfo;
}