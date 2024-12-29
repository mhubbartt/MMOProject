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

	// Load asset by FPrimaryAssetId
	template <typename T>
	T* LoadItemAsset(const FPrimaryAssetId& AssetId);

	// Preload a list of assets (e.g., for initialization)
	void PreloadAssets(const TArray<FPrimaryAssetId>& AssetIds);

	// Debug method to print all loaded assets
	void PrintLoadedAssets() const;

protected:
	// Called during initial loading
	virtual void StartInitialLoading() override;

private:

	
	// Map to store already loaded assets for faster retrieval
	UPROPERTY()
	TMap<FPrimaryAssetId, UPrimaryDataAsset*> LoadedAssets;
};
