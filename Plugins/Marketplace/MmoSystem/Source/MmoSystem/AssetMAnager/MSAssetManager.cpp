#include "MSAssetManager.h"
#include "Engine/Engine.h"

UMSAssetManager& UMSAssetManager::Get()
{
    UMSAssetManager* Manager = Cast<UMSAssetManager>(GEngine->AssetManager);
    if (!Manager)
    {
        UE_LOG(LogTemp, Fatal, TEXT("Invalid AssetManager class in Engine!"));
    }
    return *Manager;
}

template <typename T>
void UMSAssetManager::LoadItemAssetAsync(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback)
{
    // Get the asset path from the Primary Asset ID
    FSoftObjectPath AssetPath = GetPrimaryAssetPath(AssetId);

    if (!AssetPath.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Invalid asset path for async load."));
        Callback(nullptr);
        return;
    }

    // Use the StreamableManager to asynchronously load the asset
    FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
    TSharedPtr<FStreamableHandle> Handle = StreamableManager.RequestAsyncLoad(
        AssetPath,
        [this, AssetId, Callback, AssetPath]() // Lambda executed when loading is complete
        {
            UObject* LoadedObject = AssetPath.ResolveObject();

            if (!LoadedObject)
            {
                LogInvalidAsset(AssetId, TEXT("Failed to resolve the asset after async load."));
                Callback(nullptr);
                return;
            }

            // Cache the loaded asset
            UPrimaryDataAsset* LoadedAsset = Cast<UPrimaryDataAsset>(LoadedObject);
            if (LoadedAsset)
            {
                LoadedAssets.Add(AssetId, LoadedAsset);
                Callback(Cast<T>(LoadedAsset));
            }
            else
            {
                LogInvalidAsset(AssetId, TEXT("Loaded object is not a UPrimaryDataAsset."));
                Callback(nullptr);
            }
        },
        FStreamableManager::AsyncLoadHighPriority
    );

    if (!Handle.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Failed to create a valid handle for async load."));
        Callback(nullptr);
    }
}

template <typename T>
T* UMSAssetManager::LoadItemAsset(const FPrimaryAssetId& AssetId)
{
    // Synchronous loading for comparison
    if (LoadedAssets.Contains(AssetId))
    {
        return Cast<T>(LoadedAssets[AssetId]);
    }

    FSoftObjectPath AssetPath = GetPrimaryAssetPath(AssetId);

    if (!AssetPath.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Invalid asset path for sync load."));
        return nullptr;
    }

    FStreamableManager& Manager = UAssetManager::GetStreamableManager();
    UObject* LoadedObject = Manager.LoadSynchronous(AssetPath);

    if (!LoadedObject)
    {
        LogInvalidAsset(AssetId, TEXT("Failed to load asset synchronously."));
        return nullptr;
    }

    UPrimaryDataAsset* LoadedAsset = Cast<UPrimaryDataAsset>(LoadedObject);
    if (LoadedAsset)
    {
        LoadedAssets.Add(AssetId, LoadedAsset);
        return Cast<T>(LoadedAsset);
    }

    LogInvalidAsset(AssetId, TEXT("Loaded object is not a UPrimaryDataAsset."));
    return nullptr;
}

void UMSAssetManager::LogInvalidAsset(const FPrimaryAssetId& AssetId, const FString& Reason) const
{
    UE_LOG(LogTemp, Error, TEXT("Asset ID: %s - %s"), *AssetId.ToString(), *Reason);
}

void UMSAssetManager::StartInitialLoading()
{
    Super::StartInitialLoading();

    UE_LOG(LogTemp, Log, TEXT("UMSAssetManager: StartInitialLoading called."));

    // Example: Preload some critical assets during initialization
    TArray<FPrimaryAssetId> InitialAssets = {
        FPrimaryAssetId("Item.HealthPotion"),
        FPrimaryAssetId("Item.Sword"),
        FPrimaryAssetId("Item.Shield")
    };

    PreloadAssets(InitialAssets);
    PrintLoadedAssets();
};

void UMSAssetManager::PrintLoadedAssets() const
{
    UE_LOG(LogTemp, Log, TEXT("Loaded Assets:"));
    for (const auto& Pair : LoadedAssets)
    {
        if (Pair.Value)
        {
            UE_LOG(LogTemp, Log, TEXT(" - %s (Type: %s)"), *Pair.Key.ToString(), *Pair.Value->GetClass()->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT(" - %s (Invalid Asset)"), *Pair.Key.ToString());
        }
    }
}

void UMSAssetManager::PreloadAssets(const TArray<FPrimaryAssetId>& AssetIds)
{
    for (const FPrimaryAssetId& AssetId : AssetIds)
    {
        // Load each asset synchronously to ensure it's available
        UPrimaryDataAsset* Asset = LoadItemAsset<UPrimaryDataAsset>(AssetId);
        if (!Asset)
        {
            LogInvalidAsset(AssetId, TEXT("Failed to preload asset."));
        }
    }
}
