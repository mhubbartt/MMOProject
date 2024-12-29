// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "InputActionValue.h"
#include "MmoSystem/AbilitySystem/MSAbilitySystemComponent.h"
#include "MmoSystem/Game/MSPlayerState.h"
#include "PlayerCharacter.generated.h"


class UInputMappingContext;
class UInputAction;
class UMSCameraComponent;
class UNetCharacterMovementComponent;


/**
 * FMSReplicatedAcceleration: Compressed representation of acceleration
 */
USTRUCT()
struct FMSReplicatedAcceleration
{
	GENERATED_BODY()

	UPROPERTY()
	uint8 AccelXYRadians = 0;	// Direction of XY accel component, quantized to represent [0, 2*pi]

	UPROPERTY()
	uint8 AccelXYMagnitude = 0;	//Accel rate of XY component, quantized to represent [0, MaxAcceleration]

	UPROPERTY()
	int8 AccelZ = 0;	// Raw Z accel rate component, quantized to represent [-MaxAcceleration, MaxAcceleration]
};

/** The type we use to send FastShared movement updates. */
USTRUCT()
struct FMSSharedRepMovement
{
	GENERATED_BODY()

	FMSSharedRepMovement();

	bool FillForCharacter(ACharacter* Character);
	bool Equals(const FMSSharedRepMovement& Other, ACharacter* Character) const;

	bool NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess);

	UPROPERTY(Transient)
	FRepMovement RepMovement;

	UPROPERTY(Transient)
	float RepTimeStamp = 0.0f;

	UPROPERTY(Transient)
	uint8 RepMovementMode = 0;

	UPROPERTY(Transient)
	bool bProxyIsJumpForceApplied = false;

	UPROPERTY(Transient)
	bool bIsCrouched = false;
};

template<>
struct TStructOpsTypeTraits<FMSSharedRepMovement> : public TStructOpsTypeTraitsBase2<FMSSharedRepMovement>
{
	enum
	{
		WithNetSerializer = true,
		WithNetSharedSerialization = true,
	};
};

UCLASS(Config = Game, Meta = (ShortTooltip = "The base player character pawn class used by this project."))
class MMOSYSTEM_API APlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:

	// Getters and Setters
	UFUNCTION(BlueprintCallable, Category = "MMO Character")
	FORCEINLINE AMSPlayerState* GetMMOPlayerState() const { return CastChecked<AMSPlayerState>(GetPlayerState(), ECastCheckedType::NullAllowed); }
	UFUNCTION(BlueprintCallable, Category = "MMO Character")
	 AMSPlayerController* GetMMOPlayerController() const ;




	
	// Sets default values for this character's properties
	APlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void ToggleCrouch();
	virtual void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	virtual void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;
	virtual void NotifyControllerChanged() override;

	/** RPCs that is called on frames when default property replication is skipped. This replicates a single movement update to everyone. */
	UFUNCTION(NetMulticast, unreliable)
	void FastSharedReplication(const FMSSharedRepMovement& SharedRepMovement);

	// Last FMSSharedRepMovement we sent, to avoid sending repeatedly.
	FMSSharedRepMovement LastSharedReplication;

	virtual bool UpdateSharedReplication();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;


	UPROPERTY(Transient, ReplicatedUsing = OnRep_ReplicatedAcceleration)
	FMSReplicatedAcceleration ReplicatedAcceleration;

private:
	UFUNCTION()
	void OnRep_ReplicatedAcceleration();

	
	virtual void OnRep_PlayerState() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "NetCharacter|Character", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UMSCameraComponent> CameraComponent;


	// Ability System
	virtual void InitAbilityActorInfo() override;


	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputMappingContext> DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> LookAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> CrouchAction;
};
