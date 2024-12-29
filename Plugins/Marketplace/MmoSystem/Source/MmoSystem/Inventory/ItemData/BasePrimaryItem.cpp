


#include "BasePrimaryItem.h"

TArray<FPrimaryAssetId> UBasePrimaryItem::GetResolvedDependencies() const
{
	TArray<FPrimaryAssetId> ResolvedDependencies;

	for (const FItemDependency& Dependency : AssetDependencies)
	{
		FPrimaryAssetId AssetId = Dependency.ResolveToAssetId();
		if (AssetId.IsValid())
		{
			ResolvedDependencies.Add(AssetId);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Invalid dependency: %s"), *Dependency.Description);
		}
	}

	return ResolvedDependencies;
}
