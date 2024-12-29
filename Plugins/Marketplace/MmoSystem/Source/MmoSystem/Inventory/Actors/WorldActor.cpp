// Copyright Wilbur Productions


#include "WorldActor.h"
#include "GameplayEffectTypes.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "NiagaraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "MmoSystem/GlobalsNTags.h"
#include "MmoSystem/Game/MSPlayerController.h"
#include "MmoSystem/Inventory/InventoryComponent.h"
#include "MmoSystem/Player/PlayerCharacter.h"


using namespace MSGlobal;

AWorldActor::AWorldActor()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	SetRootComponent(CreateDefaultSubobject<USceneComponent>("SceneRoot"));

	Box = CreateDefaultSubobject<UBoxComponent>("OverLap Box");
	Box->SetupAttachment(RootComponent);
	Box->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Box->SetCollisionResponseToAllChannels(ECR_Ignore);
	Box->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	StaticMesh->SetupAttachment(Box);
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	RenderBoom = CreateDefaultSubobject<USpringArmComponent>("Icon Texture Capture RenderBoom");
	RenderBoom->SetupAttachment(StaticMesh);	
	SceneCaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>("Icon Texture Capture");
	SceneCaptureComponent2D->SetupAttachment(RenderBoom);
	
	Niagara = CreateDefaultSubobject<UNiagaraComponent>("Niagara");
	Niagara->SetupAttachment(StaticMesh);

	// IInteractionInterface Begin
	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>("PostProcessComponent");
	PostProcessComponent->SetupAttachment(StaticMesh);
	if (!PostProcessComponent->Settings.WeightedBlendables.Array.IsEmpty())
	{
		for (int32 i = 0, count = PostProcessComponent->Settings.WeightedBlendables.Array.Num(); i < count; ++i)
			PostProcessComponent->Settings.WeightedBlendables.Array[i].Weight = 0.0f;
	}

	InteractionWidget = CreateDefaultSubobject<UWidgetComponent>("InteractionWidget");
	InteractionWidget->SetupAttachment(RootComponent);
	InteractionWidget->SetVisibility(false);

	
	
	
	
	Box->OnComponentBeginOverlap.AddDynamic( this,&AWorldActor::OnOverlap);
	Box->OnComponentEndOverlap.AddDynamic( this, &AWorldActor::OnEndOverlap);
	
		
}



void AWorldActor::BeginPlay()
{
	Super::BeginPlay();	
	
}

void AWorldActor::ApplyEffectToTarget(AActor* TargetActor, TSubclassOf<UGameplayEffect> GameplayEffectClass)
{

	


	if (TargetActor->ActorHasTag("NPC") && !bApplyEffectsToNPCs || TargetActor->ActorHasTag("Enemy") && !bApplyEffectsToEnemies){return;}


	/**
	 This Libary is for the Ability system Interface. It has Premade Methods( or ""Functions"")(has blueprint classes),
	 To assist in C++ and Blueprints

                       UAbilitySystemComponent
	 **/

	// Returns Ability System Component
	UAbilitySystemComponent*  TargetASC =  UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);


	// Does Target have an Ability System Component?
	if (TargetASC == nullptr)
	{
		return;  // If NOT, Do nothing and return
	}



	check(GameplayEffectClass) // Verify Has Gameplay Effect Class


	// Makes a Gameplay Effect context Handle and Adds options to it
	FGameplayEffectContextHandle EffectContextHandle = TargetASC->MakeEffectContext();
	EffectContextHandle.AddSourceObject(this);

	// Compile the Spec Handle makes Variable for reference  ** Data ** is the Variable to dereference to gain the information
	const FGameplayEffectSpecHandle EffectSpecHandle = TargetASC->MakeOutgoingSpec(GameplayEffectClass, 1.0f, EffectContextHandle);


	// todo: for damage like fire
	 // for (TTuple<FGameplayTag, FScalableFloat>& Pair  : DamageTypeMap)
	 // {
	 // 	const float ScaledDamage = Pair.Value.GetValueAtLevel(EffectSpecHandle.Data.Get()->GetLevel());
	 // 	UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(EffectSpecHandle, Pair.Key ,ScaledDamage);
	 // }

	const FActiveGameplayEffectHandle ActiveEffectHandle =TargetASC->ApplyGameplayEffectSpecToSelf(*EffectSpecHandle.Data.Get());

	const bool bIsInfiniteEffect = EffectSpecHandle.Data.Get()->Def.Get()->DurationPolicy == EGameplayEffectDurationType::Infinite;

	if (bIsInfiniteEffect && InfiniteEffectRemovalPolicy == EEffectRemovalPolicy::RemoveOnEndOverlap)
	{		
		ActiveEffectHandles.Add(ActiveEffectHandle, TargetASC);
	}
	if (bDestroyActorOnEffectApplication && !bIsInfiniteEffect)
	{
		Destroy();
	}
}

void AWorldActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor->ActorHasTag("NPC") && !bApplyEffectsToNPCs || OtherActor->ActorHasTag("Enemy") && !bApplyEffectsToEnemies){return;}

	

	
	if (bCanAddToInventory && bIsPickup && OtherActor->HasAuthority())
	{
		auto Character = Cast<APlayerCharacter>(OtherActor);
		auto PlayerController = Cast<AMSPlayerController>(Character->GetController());		
		if (!PlayerController ){return;}
		PlayerController->GetInventoryComponent()->AddItemToInventory(ItemName,ItemID,DynamicItemData,1);
		// TODO: Add Item to Inventory bool for destroy
		Destroy();			
	}
		

	if (InstantEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(OtherActor, InstantGameplayEffectClass);
	}

	if (DurationEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(OtherActor, DurationGameplayEffectClass);
	}

	if (InfiniteEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnOverlap)
	{
		ApplyEffectToTarget(OtherActor, InfiniteGameplayEffectClass);
	}
}

void AWorldActor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

	if (OtherActor->ActorHasTag("NPC") && !bApplyEffectsToNPCs || OtherActor->ActorHasTag("Enemy") && !bApplyEffectsToEnemies){return;}

	if (InstantEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(OtherActor, InstantGameplayEffectClass);
	}

	if (DurationEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(OtherActor, DurationGameplayEffectClass);
	}

	if (InfiniteEffectApplicationPolicy == EEffectApplicationPolicy::ApplyOnEndOverlap)
	{
		ApplyEffectToTarget(OtherActor, InfiniteGameplayEffectClass);
	}
	if (InfiniteEffectRemovalPolicy == EEffectRemovalPolicy::RemoveOnEndOverlap)
	{
		UAbilitySystemComponent* TargetAsc = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(OtherActor);

		if (!IsValid(TargetAsc)) return;

		TArray<FActiveGameplayEffectHandle> HandlesToRemove;
		for (TTuple<FActiveGameplayEffectHandle, UAbilitySystemComponent*> HandlePair:ActiveEffectHandles)
		{
			if (TargetAsc == HandlePair.Value)
			{
				TargetAsc->RemoveActiveGameplayEffect(HandlePair.Key, 1);

				HandlesToRemove.Add(HandlePair.Key);
			}
		}
		for (FActiveGameplayEffectHandle& Handle:HandlesToRemove)
			{

			ActiveEffectHandles.FindAndRemoveChecked(Handle);

			}
		
		
	}
}






                                      // IInteraction Interface Functions


/*
 *----------------------------------- Highlight Actor Functions ------------------------------------------
*/




void AWorldActor::InteractionHighLightActor_Implementation()
{

	if (!PostProcessComponent->Settings.WeightedBlendables.Array.IsEmpty())
	{
		for (int32 i = 0, count = PostProcessComponent->Settings.WeightedBlendables.Array.Num(); i < count; ++i)
			PostProcessComponent->Settings.WeightedBlendables.Array[i].Weight = 1.0f;
	}
	StaticMesh->SetRenderCustomDepth(true);	
	StaticMesh->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AWorldActor::InteractionUnHighLightActor_Implementation()
{

	if (!PostProcessComponent->Settings.WeightedBlendables.Array.IsEmpty())
	{
		for (int32 i = 0, count = PostProcessComponent->Settings.WeightedBlendables.Array.Num(); i < count; ++i)
			PostProcessComponent->Settings.WeightedBlendables.Array[i].Weight = 0.0f;
	}
	StaticMesh->SetRenderCustomDepth(false);	
	StaticMesh->SetCustomDepthStencilValue(0);	
}

void AWorldActor::ShowInteractionOptions_Implementation()
{
	if (bShowWidget)
	{
		if (InteractionWidget)
		{				
			InteractionWidget->SetVisibility(true);
		}
		
	}
}


/*
 *----------------------------------- Can Interact Functions ------------------------------------------
*/


void AWorldActor::HideInteractionOptions_Implementation()
{
		InteractionWidget->SetVisibility(false);;
		
}



bool AWorldActor::IsWithinDistance_Implementation() 
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		if (const APawn* PlayerPawn = PlayerController->GetPawn())
		{
			const float Distance = FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
			return Distance <= MaxDistance;
		}
	}
	return false;
}

void AWorldActor::PerformInteraction_Implementation(AActor* CharacterReference)
{


	
	if (bCanAddToInventory && CharacterReference->HasAuthority())
	{
		auto Character = Cast<APlayerCharacter>(CharacterReference);
		auto PlayerController = Cast<AMSPlayerController>(Character->GetController());		
		if (!PlayerController){return;}
		PlayerController->GetInventoryComponent()->AddItemToInventory(ItemName,ItemID,DynamicItemData,1);
		// TODO: Add Item to Inventory bool for destroy
		Destroy();	
	}
	 

	
}








