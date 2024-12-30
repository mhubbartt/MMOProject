#include "MSAssetManager.h"
#include "Engine/StreamableManager.h"
#include "MmoSystem/StrucNEnumhHeaders.h"
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
T* UMSAssetManager::LoadItemAsset(const FPrimaryAssetId& AssetId)
{
    if (LoadedAssets.Contains(AssetId))
    {
        UPrimaryDataAsset* CachedAsset = LoadedAssets[AssetId];
        if (CachedAsset && CachedAsset->IsValidLowLevel())
        {
            return Cast<T>(CachedAsset);
        }
        else
        {
            LogInvalidAsset(AssetId, TEXT("Invalid cached asset"), TEXT("LoadItemAsset"));
            LoadedAssets.Remove(AssetId); // Remove invalid cache entry
        }
    }

    FSoftObjectPath AssetPath = GetPrimaryAssetPath(AssetId);
    if (!AssetPath.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Invalid asset path"), TEXT("LoadItemAsset"));
        return nullptr;
    }

    FStreamableManager& Manager = UAssetManager::GetStreamableManager();
    UObject* LoadedObject = Manager.LoadSynchronous(AssetPath);

    if (!LoadedObject)
    {
        LogInvalidAsset(AssetId, TEXT("Failed to load asset synchronously"), TEXT("LoadItemAsset"));
        return nullptr;
    }

    UPrimaryDataAsset* LoadedAsset = Cast<UPrimaryDataAsset>(LoadedObject);
    if (LoadedAsset)
    {
        LoadedAssets.Add(AssetId, LoadedAsset);
        return Cast<T>(LoadedAsset);
    }

    LogInvalidAsset(AssetId, TEXT("Loaded object is not a UPrimaryDataAsset"), TEXT("LoadItemAsset"));
    return nullptr;
}

template <typename T>
void UMSAssetManager::LoadItemAssetAsync(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback)
{
    FSoftObjectPath AssetPath = GetPrimaryAssetPath(AssetId);

    if (!AssetPath.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Invalid asset path for async load."));
        Callback(nullptr);
        return;
    }

    FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
    TSharedPtr<FStreamableHandle> Handle = StreamableManager.RequestAsyncLoad(
        AssetPath,
        [this, AssetId, Callback, AssetPath]()
        {
            UObject* LoadedObject = AssetPath.ResolveObject();

            if (!LoadedObject)
            {
                LogInvalidAsset(AssetId, TEXT("Failed to resolve the asset after async load."));
                Callback(nullptr);
                return;
            }

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

void UMSAssetManager::PreloadAssets(const TArray<FPrimaryAssetId>& AssetIds)
{
    TSet<FPrimaryAssetId> LoadedSet;

    for (const FPrimaryAssetId& AssetId : AssetIds)
    {
        PreloadAssetWithDependencies(AssetId, LoadedSet);
    }
}

void UMSAssetManager::PreloadAssetWithDependencies(const FPrimaryAssetId& AssetId, TSet<FPrimaryAssetId>& LoadedSet)
{
     if (LoadedSet.Contains(AssetId))
    {
        return; // Prevent duplicate loads
    }

    // Load main asset synchronously
    UBasePrimaryItem* Asset = LoadItemAsset<UBasePrimaryItem>(AssetId);
    if (!Asset)
    {
        LogInvalidAsset(AssetId, TEXT("Failed to preload main asset."));
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("Preloading Asset: %s"), *AssetId.ToString());
    LoadedSet.Add(AssetId);

    // Collect dependencies
    TArray<FPrimaryAssetId> ResolvedDependencies = Asset->GetResolvedDependencies();
    TArray<FSoftObjectPath> DependencyPaths;

    for (const FPrimaryAssetId& DependencyId : ResolvedDependencies)
    {
        if (!LoadedSet.Contains(DependencyId))
        {
            FSoftObjectPath AssetPath = GetPrimaryAssetPath(DependencyId);
            if (AssetPath.IsValid())
            {
                DependencyPaths.Add(AssetPath);
            }
            else
            {
                LogInvalidAsset(DependencyId, TEXT("Invalid dependency path."));
            }
        }
    }

    // Asynchronously load all dependencies in a batch
    if (DependencyPaths.Num() > 0)
    {
        FStreamableManager& Manager = UAssetManager::GetStreamableManager();
        TSharedPtr<FStreamableHandle> Handle = Manager.RequestAsyncLoad(
            DependencyPaths,
            [this, ResolvedDependencies, &LoadedSet]()
            {
                for (const FPrimaryAssetId& DependencyId : ResolvedDependencies)
                {
                    if (!LoadedSet.Contains(DependencyId))
                    {
                        UBasePrimaryItem* LoadedDependency = LoadItemAsset<UBasePrimaryItem>(DependencyId);
                        if (LoadedDependency)
                        {
                            UE_LOG(LogTemp, Log, TEXT("Successfully loaded dependency: %s"), *DependencyId.ToString());
                            LoadedSet.Add(DependencyId);
                        }
                        else
                        {
                            LogInvalidAsset(DependencyId, TEXT("Failed to load dependency asynchronously."));
                        }
                    }
                }
            },
            FStreamableManager::AsyncLoadHighPriority
        );

        if (!Handle.IsValid())
        {
            UE_LOG(LogTemp, Warning, TEXT("Failed to initiate async load for dependencies."));
        }
    }
}

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

void UMSAssetManager::StartInitialLoading()
{
    Super::StartInitialLoading();
    StartPeriodicCleanup(PeriodicCleanupInterval);
    TArray<FPrimaryAssetId> InitialAssets = {
        FPrimaryAssetId("Item.HealthPotion"),
        FPrimaryAssetId("Item.Sword")
    };

    PreloadAssets(InitialAssets);
    PrintLoadedAssets();
}

void UMSAssetManager::LogInvalidAsset(const FPrimaryAssetId& AssetId, const FString& Reason, const FString& Context) const
{
    if (Context.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("Asset ID: %s - %s"), *AssetId.ToString(), *Reason);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("[%s] Asset ID: %s - %s"), *Context, *AssetId.ToString(), *Reason);
    }
}
template <typename T>
void UMSAssetManager::LoadItemAssetAsyncWithRetry(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback, int32 RetryCount)
{
    if (RetryCount <= 0)
    {
        LogInvalidAsset(AssetId, TEXT("Exceeded maximum retries for async load"), TEXT("LoadItemAssetAsyncWithRetry"));
        Callback(nullptr);
        return;
    }

    FSoftObjectPath AssetPath = GetPrimaryAssetPath(AssetId);
    if (!AssetPath.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Invalid asset path for async load"), TEXT("LoadItemAssetAsyncWithRetry"));
        Callback(nullptr);
        return;
    }

    FStreamableManager& Manager = UAssetManager::GetStreamableManager();
    TSharedPtr<FStreamableHandle> Handle = Manager.RequestAsyncLoad(
        AssetPath,
        [this, AssetId, Callback, RetryCount, AssetPath]()
        {
            UObject* LoadedObject = AssetPath.ResolveObject();
            if (!LoadedObject)
            {
                LogInvalidAsset(AssetId, TEXT("Retrying async load"), TEXT("LoadItemAssetAsyncWithRetry"));
                LoadItemAssetAsyncWithRetry<T>(AssetId, Callback, RetryCount - 1);
                return;
            }

            UPrimaryDataAsset* LoadedAsset = Cast<UPrimaryDataAsset>(LoadedObject);
            if (LoadedAsset)
            {
                LoadedAssets.Add(AssetId, LoadedAsset);
                Callback(Cast<T>(LoadedAsset));
            }
            else
            {
                LogInvalidAsset(AssetId, TEXT("Loaded object is not a UPrimaryDataAsset"), TEXT("LoadItemAssetAsyncWithRetry"));
                Callback(nullptr);
            }
        },
        FStreamableManager::AsyncLoadHighPriority
    );

    if (!Handle.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Failed to initiate async load"), TEXT("LoadItemAssetAsyncWithRetry"));
        Callback(nullptr);
    }
}
template <typename T>
void UMSAssetManager::LoadItemAssetAsyncWithTimeout(const FPrimaryAssetId& AssetId, TFunction<void(T*)> Callback, float TimeoutSeconds)
{
    FSoftObjectPath AssetPath = GetPrimaryAssetPath(AssetId);
    if (!AssetPath.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Invalid asset path for async load"), TEXT("LoadItemAssetAsyncWithTimeout"));
        Callback(nullptr);
        return;
    }

    FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
    TSharedPtr<FStreamableHandle> Handle = StreamableManager.RequestAsyncLoad(
        AssetPath,
        [this, AssetId, Callback,AssetPath]()
        {
            UObject* LoadedObject = AssetPath.ResolveObject();
            if (!LoadedObject)
            {
                LogInvalidAsset(AssetId, TEXT("Async load failed within timeout"), TEXT("LoadItemAssetAsyncWithTimeout"));
                Callback(nullptr);
                return;
            }

            UPrimaryDataAsset* LoadedAsset = Cast<UPrimaryDataAsset>(LoadedObject);
            if (LoadedAsset)
            {
                LoadedAssets.Add(AssetId, LoadedAsset);
                Callback(Cast<T>(LoadedAsset));
            }
            else
            {
                LogInvalidAsset(AssetId, TEXT("Loaded object is not a UPrimaryDataAsset"), TEXT("LoadItemAssetAsyncWithTimeout"));
                Callback(nullptr);
            }
        },
        FStreamableManager::AsyncLoadHighPriority
    );

    if (!Handle.IsValid())
    {
        LogInvalidAsset(AssetId, TEXT("Failed to initiate async load"), TEXT("LoadItemAssetAsyncWithTimeout"));
        Callback(nullptr);
        return;
    }

    // Timeout Handling
    FTimerHandle TimeoutHandle;
    GetWorld()->GetTimerManager().SetTimer(
        TimeoutHandle,
        [this,Handle, AssetId, Callback]()
        {
            if (!Handle->HasLoadCompleted())
            {
                LogInvalidAsset(AssetId, TEXT("Async load timed out"), TEXT("LoadItemAssetAsyncWithTimeout"));
                Callback(nullptr);
            }
        },
        TimeoutSeconds,
        false // Non-repeating timer
    );
}
void UMSAssetManager::CleanupLoadedAssets()
{
    int32 RemovedCount = 0;

    for (auto It = LoadedAssets.CreateIterator(); It; ++It)
    {
        if (!It->Value || !It->Value->IsValidLowLevel())
        {
            UE_LOG(LogTemp, Log, TEXT("Removing invalid or unused asset: %s"), *It->Key.ToString());
            It.RemoveCurrent();
            RemovedCount++;
        }
    }

    if (RemovedCount > 0)
    {
        UE_LOG(LogTemp, Log, TEXT("Dynamic Cleanup: Removed %d invalid or unused assets from cache."), RemovedCount);
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Dynamic Cleanup: No assets removed. Cache is clean."));
    }
}

void UMSAssetManager::StartPeriodicCleanup(float Interval)
{
    if (Interval <= 0.0f)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid interval for periodic cleanup. Cleanup will not be started."));
        return;
    }

    if (GetWorld())
    {
        GetWorld()->GetTimerManager().SetTimer(
            CleanupTimerHandle,
            this,
            &UMSAssetManager::CleanupLoadedAssets,
            Interval,
            true // Loop the timer
        );

        UE_LOG(LogTemp, Log, TEXT("Periodic cleanup started with an interval of %.2f seconds."), Interval);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to start periodic cleanup: World is not valid."));
    }
}


void UMSAssetManager::StopPeriodicCleanup()
{
    if (GetWorld())
    {
        GetWorld()->GetTimerManager().ClearTimer(CleanupTimerHandle);
        UE_LOG(LogTemp, Log, TEXT("Periodic cleanup stopped."));
    }
}