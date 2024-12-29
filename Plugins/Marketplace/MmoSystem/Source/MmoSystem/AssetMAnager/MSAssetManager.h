#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "MSAssetManager.generated.h"

UCLASS()
class MMOSYSTEM_API UMSAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	// Singleton access to the Asset Manager
	static UMSAssetManager& Get();

	// Asynchronous loading of an asset
	template <typename T>
	void LoadItemAssetAsync(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback);

	// Load asset by FPrimaryAssetId (synchronous for comparison)
	template <typename T>
	T* LoadItemAsset(const FPrimaryAssetId& AssetId);

	// Debug method to print all loaded assets
	void PrintLoadedAssets() const;

protected:
	// Called during initial loading
	virtual void StartInitialLoading() override;

	// Preload a list of assets (e.g., for initialization)
	void PreloadAssets(const TArray<FPrimaryAssetId>& AssetIds);

private:
	// Cache for loaded assets
	UPROPERTY()
	TMap<FPrimaryAssetId, UPrimaryDataAsset*> LoadedAssets;

	// Log errors for invalid assets
	void LogInvalidAsset(const FPrimaryAssetId& AssetId, const FString& Reason) const;
};



