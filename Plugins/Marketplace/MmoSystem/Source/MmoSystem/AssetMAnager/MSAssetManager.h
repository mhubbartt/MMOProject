#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "MSAssetManager.generated.h"

/**
 * Custom Asset Manager for managing game assets and their dependencies.
 * 
 * This class provides functionality for loading assets synchronously and asynchronously,
 * preloading dependencies, and debugging the state of loaded assets.
 */
UCLASS()
class MMOSYSTEM_API UMSAssetManager : public UAssetManager
{
    GENERATED_BODY()

public:
    
    /**
 * Start periodic cleanup of LoadedAssets.
 * This sets up a recurring timer to invoke CleanupLoadedAssets at regular intervals.
 * 
 * @param Interval The time interval (in seconds) between cleanups.
 */
    void StartPeriodicCleanup(float Interval);
    void StopPeriodicCleanup();

    /**
         * Dynamically clean up unused or invalid assets from the cache.
         * This function checks for assets that are no longer valid or in use and removes them from the LoadedAssets map.
         */
        void CleanupLoadedAssets();
    /**
     * Get the singleton instance of the Asset Manager.
     *
     * @return The singleton instance of the `UMSAssetManager`.
     */
    static UMSAssetManager& Get();

    /**
     * Load an asset synchronously.
     *
     * @tparam T The type of the asset to load (e.g., UTexture2D, UStaticMesh).
     * @param AssetId The primary asset ID identifying the asset to load.
     * @return A pointer to the loaded asset, or nullptr if the asset could not be loaded.
     */
    template <typename T>
    T* LoadItemAsset(const FPrimaryAssetId& AssetId);

    /**
     * Load an asset asynchronously.
     *
     * @tparam T The type of the asset to load (e.g., UTexture2D, UStaticMesh).
     * @param AssetId The primary asset ID identifying the asset to load.
     * @param Callback A function to call once the asset is loaded. The callback receives
     *        a pointer to the loaded asset, or nullptr if loading failed.
     */
    template <typename T>
    void LoadItemAssetAsync(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback);
    
    // Load an asset asynchronously with retries
    template <typename T>
    void LoadItemAssetAsyncWithRetry(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback, int32 RetryCount);

    // Load an asset asynchronously with a timeout
    template <typename T>
    void LoadItemAssetAsyncWithTimeout(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback, float TimeoutSeconds);
    /**
     * Preload a list of assets and their dependencies.
     *
     * This method ensures that all specified assets and their associated dependencies
     * are loaded into memory. It performs recursive dependency resolution.
     *
     * @param AssetIds An array of primary asset IDs representing the assets to preload.
     */
    void PreloadAssets(const TArray<FPrimaryAssetId>& AssetIds);

    /**
     * Debug: Print all loaded assets.
     *
     * Outputs a list of all currently loaded assets to the log, including their primary
     * asset IDs and associated metadata. Useful for debugging the asset loading system.
     */
    void PrintLoadedAssets() const;

protected:

    UPROPERTY(BlueprintReadWrite)
    float PeriodicCleanupInterval = 120.0f;

    /** Timer handle for scheduling dynamic cleanup. */
    FTimerHandle CleanupTimerHandle;    
    
    /**
     * Called during the initial loading process.
     *
     * Override this function to specify initial assets to preload when the game starts.
     */
    virtual void StartInitialLoading() override;

private:
    /**
     * Helper function for recursive dependency preloading.
     *
     * This function loads the specified asset and recursively resolves and loads all
     * its dependencies. Ensures that each asset is loaded only once.
     *
     * @param AssetId The primary asset ID of the asset to preload.
     * @param LoadedSet A set of asset IDs that have already been loaded, used to prevent
     *        redundant loading of the same asset.
     */
    void PreloadAssetWithDependencies(const FPrimaryAssetId& AssetId, TSet<FPrimaryAssetId>& LoadedSet);

    /**
 * Log invalid asset information for debugging.
 *
 * @param AssetId The primary asset ID of the invalid asset.
 * @param Reason A description of why the asset is considered invalid.
 * @param Context Additional context for the error, such as the calling function name.
 */
    void LogInvalidAsset(const FPrimaryAssetId& AssetId, const FString& Reason, const FString& Context = TEXT("")) const;




    /**
     * Cache for loaded assets to prevent redundant loading.
     *
     * This map associates primary asset IDs with their corresponding loaded data assets.
     * It helps optimize loading by avoiding duplicate load operations.
     */
    UPROPERTY()
    TMap<FPrimaryAssetId, UPrimaryDataAsset*> LoadedAssets;
};