// Copyright Wilbur Productions

#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "MmoSystem/Interfaces/InteractionInterface.h"
#include "MmoSystem/Inventory/InvStucsNEnums.h"
#include "WorldActor.generated.h"


struct FDynamicItemData;
class UStaticItemData;
class APlayerCharacter;
class UInventoryComponent;
class UProjectileMovementComponent;
class UWidgetComponent;
class UPostProcessComponent;
class USpringArmComponent;
class UNiagaraComponent;
class UBoxComponent;
struct FGameplayTag;
class UAbilitySystemComponent;
struct FActiveGameplayEffectHandle;
class UGameplayEffect;
class IInteractionInterface;

UENUM()
enum class EEffectApplicationPolicy
{
	ApplyOnOverlap,
	ApplyOnEndOverlap,
	DoNotApply
};


UENUM()
enum class EEffectRemovalPolicy 
{
	RemoveOnEndOverlap,
	DoNotRemove
};


UCLASS()
class MMOSYSTEM_API AWorldActor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()

public:
	AWorldActor();




	
				/* =======  IInteraction Interface Variables and Functions  ======= */


	// IInteractionInterface Start		
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Actor|Interaction Options")
	float MaxDistance = 5;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "World Actor|Interaction Options")
	bool bShowWidget = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction|Interaction Options")
	FGameplayTag InteractionTag;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction|Interaction Options")
	FText InteractionText;
	virtual void InteractionHighLightActor_Implementation() override;
	virtual void InteractionUnHighLightActor_Implementation() override;
	virtual void ShowInteractionOptions_Implementation() override;
	virtual void HideInteractionOptions_Implementation() override;
	virtual bool IsWithinDistance_Implementation() override;	
	virtual void PerformInteraction_Implementation(AActor* CharacterReference) override;

	
	// IInteractionInterface End


  

protected:
	virtual void BeginPlay() override;


					/* =======  Ability System Component Variables and Functions  ======= */

	// Current Active Effects
	UPROPERTY()
	TMap<FActiveGameplayEffectHandle, TObjectPtr<UAbilitySystemComponent>> ActiveEffectHandles;


	// Apply Effect Functions
	UFUNCTION(BlueprintCallable, Category="World Actor|Functions")
	void ApplyEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> GameplayEffectClass);

	UFUNCTION(BlueprintCallable, Category = "World Actor|Functions")
	virtual void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
							UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
							bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, Category = "World Actor|Functions")
	virtual void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	// Can Apply Effect Boolean's
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	bool bDestroyActorOnEffectApplication;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	bool bApplyEffectsToEnemies = false;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	bool bApplyEffectsToNPCs = false;


	

	
									/* =======  Effect Classes  ======= */

	// Instant Effects
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="World Actor|Overlap Effects")
	TSubclassOf<UGameplayEffect> InstantGameplayEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	EEffectApplicationPolicy InstantEffectApplicationPolicy = EEffectApplicationPolicy::DoNotApply;


	// Duration Effects
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	TSubclassOf<UGameplayEffect> DurationGameplayEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	EEffectApplicationPolicy DurationEffectApplicationPolicy = EEffectApplicationPolicy::DoNotApply;


	// Infinite Effects
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	TSubclassOf<UGameplayEffect> InfiniteGameplayEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	EEffectApplicationPolicy InfiniteEffectApplicationPolicy = EEffectApplicationPolicy::DoNotApply;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "World Actor|Overlap Effects")
	EEffectRemovalPolicy InfiniteEffectRemovalPolicy = EEffectRemovalPolicy::RemoveOnEndOverlap;


	

						/* =======  InventoryList Component Variables  ======= */



	friend class UInventoryComponent;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "World Actor|InventoryList")
	bool bIsPickup = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "World Actor|InventoryList")
	FName ItemName = "";
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "World Actor|InventoryList")
	bool bCanAddToInventory = false;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "World Actor|InventoryList")
	TObjectPtr<UStaticItemData> ItemID ;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "World Actor|InventoryList")
	FDynamicItemData DynamicItemData = {}; ;

	
								/* =======  Root Component Variables  ======= */

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<USceneCaptureComponent2D> SceneCaptureComponent2D;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UStaticMeshComponent> StaticMesh;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UNiagaraComponent> Niagara;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UBoxComponent> Box;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<USpringArmComponent> RenderBoom;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UPostProcessComponent> PostProcessComponent;

	/** Please add a variable description */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category="Default")
	TObjectPtr<UWidgetComponent> InteractionWidget;
};
