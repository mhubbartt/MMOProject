#include "MSAssetManager.h"
#include "Engine/Engine.h"
#include "MmoSystem/Inventory/ItemData/BasePrimaryItem.h"

UMSAssetManager& UMSAssetManager::Get()
{
	UMSAssetManager* Manager = Cast<UMSAssetManager>(GEngine->AssetManager);
	if (!Manager)
	{
		UE_LOG(LogTemp, Fatal, TEXT("Invalid AssetManager class in Engine!"));
	}
	return *Manager;
}

void UMSAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UE_LOG(LogTemp, Warning, TEXT("UMSAssetManager: Initialized."));
}

template <typename T>
T* UMSAssetManager::LoadItemAsset(const FPrimaryAssetId& AssetId)
{
	// Check if the asset is already loaded
	if (LoadedAssets.Contains(AssetId))
	{
		return Cast<T>(LoadedAssets[AssetId]);
	}

	// Get the asset path from the Primary Asset ID
	FSoftObjectPath AssetPath = GetPrimaryAssetPath(AssetId);

	if (AssetPath.IsValid())
	{
		// Use the StreamableManager to load the asset
		FStreamableManager& Manager = UAssetManager::GetStreamableManager();
		UObject* LoadedObject = Manager.LoadSynchronous(AssetPath);

		if (LoadedObject)
		{
			// Cache the loaded asset for future use
			UPrimaryDataAsset* LoadedAsset = Cast<UPrimaryDataAsset>(LoadedObject);
			if (LoadedAsset)
			{
				LoadedAssets.Add(AssetId, LoadedAsset);
				return Cast<T>(LoadedAsset);
			}
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Failed to load asset with ID: %s"), *AssetId.ToString());
	return nullptr;
}

void UMSAssetManager::PreloadAssets(const TArray<FPrimaryAssetId>& AssetIds)
{
	for (const FPrimaryAssetId& AssetId : AssetIds)
	{
		LoadItemAsset<UBasePrimaryItem>(AssetId);
	}
}

void UMSAssetManager::PrintLoadedAssets() const
{
	UE_LOG(LogTemp, Log, TEXT("Loaded Assets:"));
	for (const auto& Pair : LoadedAssets)
	{
		UE_LOG(LogTemp, Log, TEXT(" - %s"), *Pair.Key.ToString());
	}
}
