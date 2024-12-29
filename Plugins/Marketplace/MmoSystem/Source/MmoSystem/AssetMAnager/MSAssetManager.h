#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "MSAssetManager.generated.h"

/**
 * Custom Asset Manager for managing game assets and their dependencies.
 */
UCLASS()
class MMOSYSTEM_API UMSAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	// Get the singleton instance of the Asset Manager
	static UMSAssetManager& Get();

	// Load an asset synchronously
	template <typename T>
	T* LoadItemAsset(const FPrimaryAssetId& AssetId);

	// Load an asset asynchronously
	template <typename T>
	void LoadItemAssetAsync(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback);

	// Preload a list of assets and their dependencies
	void PreloadAssets(const TArray<FPrimaryAssetId>& AssetIds);

	// Debug: Print all loaded assets
	void PrintLoadedAssets() const;

protected:
	// Called during the initial loading process
	virtual void StartInitialLoading() override;

private:
	// Helper function for recursive dependency preloading
	void PreloadAssetWithDependencies(const FPrimaryAssetId& AssetId, TSet<FPrimaryAssetId>& LoadedSet);

	// Log invalid assets for debugging
	void LogInvalidAsset(const FPrimaryAssetId& AssetId, const FString& Reason) const;

	// Cache for loaded assets to prevent redundant loading
	UPROPERTY()
	TMap<FPrimaryAssetId, UPrimaryDataAsset*> LoadedAssets;
};

