// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlayerAnimInstance.h"
#include "AbilitySystemGlobals.h"
#include "MmoSystem/Player/NetCharacterMovementComponent.h"
#include "MmoSystem/Player/PlayerCharacter.h"
#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif



#include UE_INLINE_GENERATED_CPP_BY_NAME(PlayerAnimInstance)


UPlayerAnimInstance::UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UPlayerAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* ASC)
{
	check(ASC);

	GameplayTagPropertyMap.Initialize(this, ASC);
}

#if WITH_EDITOR
EDataValidationResult UPlayerAnimInstance::IsDataValid(FDataValidationContext& Context) const
{
	Super::IsDataValid(Context);

	GameplayTagPropertyMap.IsDataValid(this, Context);

	return ((Context.GetNumErrors() > 0) ? EDataValidationResult::Invalid : EDataValidationResult::Valid);
}
#endif // WITH_EDITOR

void UPlayerAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* OwningActor = GetOwningActor())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor))
		{
			InitializeWithAbilitySystem(ASC);
		}
	}
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	const APlayerCharacter* Character = Cast<APlayerCharacter>(GetOwningActor());
	if (!Character)
	{
		return;
	}

	UNetCharacterMovementComponent* CharMoveComp = CastChecked<UNetCharacterMovementComponent>(Character->GetCharacterMovement());
	const FNetCharacterGroundInfo& GroundInfo = CharMoveComp->GetGroundInfo();
	GroundDistance = GroundInfo.GroundDistance;
}

