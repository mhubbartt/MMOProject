// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/AssetMAnager/MSAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSAssetManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSAssetManager();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSAssetManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UMSAssetManager
void UMSAssetManager::StaticRegisterNativesUMSAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSAssetManager);
UClass* Z_Construct_UClass_UMSAssetManager_NoRegister()
{
	return UMSAssetManager::StaticClass();
}
struct Z_Construct_UClass_UMSAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom Asset Manager for managing game assets and their dependencies.\n * \n * This class provides functionality for loading assets synchronously and asynchronously,\n * preloading dependencies, and debugging the state of loaded assets.\n */" },
#endif
		{ "IncludePath", "AssetMAnager/MSAssetManager.h" },
		{ "ModuleRelativePath", "AssetMAnager/MSAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Asset Manager for managing game assets and their dependencies.\n\nThis class provides functionality for loading assets synchronously and asynchronously,\npreloading dependencies, and debugging the state of loaded assets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeriodicCleanupInterval_MetaData[] = {
		{ "Category", "MSAssetManager" },
		{ "ModuleRelativePath", "AssetMAnager/MSAssetManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Cache for loaded assets to prevent redundant loading.\n     *\n     * This map associates primary asset IDs with their corresponding loaded data assets.\n     * It helps optimize loading by avoiding duplicate load operations.\n     */" },
#endif
		{ "ModuleRelativePath", "AssetMAnager/MSAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cache for loaded assets to prevent redundant loading.\n\nThis map associates primary asset IDs with their corresponding loaded data assets.\nIt helps optimize loading by avoiding duplicate load operations." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeriodicCleanupInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedAssets_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedAssets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMSAssetManager_Statics::NewProp_PeriodicCleanupInterval = { "PeriodicCleanupInterval", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAssetManager, PeriodicCleanupInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeriodicCleanupInterval_MetaData), NewProp_PeriodicCleanupInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSAssetManager_Statics::NewProp_LoadedAssets_ValueProp = { "LoadedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSAssetManager_Statics::NewProp_LoadedAssets_Key_KeyProp = { "LoadedAssets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMSAssetManager_Statics::NewProp_LoadedAssets = { "LoadedAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSAssetManager, LoadedAssets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedAssets_MetaData), NewProp_LoadedAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSAssetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAssetManager_Statics::NewProp_PeriodicCleanupInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAssetManager_Statics::NewProp_LoadedAssets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAssetManager_Statics::NewProp_LoadedAssets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSAssetManager_Statics::NewProp_LoadedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAssetManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSAssetManager_Statics::ClassParams = {
	&UMSAssetManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSAssetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSAssetManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSAssetManager()
{
	if (!Z_Registration_Info_UClass_UMSAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSAssetManager.OuterSingleton, Z_Construct_UClass_UMSAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSAssetManager.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSAssetManager>()
{
	return UMSAssetManager::StaticClass();
}
UMSAssetManager::UMSAssetManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSAssetManager);
UMSAssetManager::~UMSAssetManager() {}
// End Class UMSAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AssetMAnager_MSAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSAssetManager, UMSAssetManager::StaticClass, TEXT("UMSAssetManager"), &Z_Registration_Info_UClass_UMSAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSAssetManager), 3005615882U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AssetMAnager_MSAssetManager_h_3041758072(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AssetMAnager_MSAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_AssetMAnager_MSAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
