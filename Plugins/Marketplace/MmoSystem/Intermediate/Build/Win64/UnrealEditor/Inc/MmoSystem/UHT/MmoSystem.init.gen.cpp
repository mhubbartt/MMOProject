// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMmoSystem_init() {}
	MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature();
	MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature();
	MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature();
	MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature();
	MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature();
	MMOSYSTEM_API UFunction* Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MmoSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MmoSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_MmoSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MmoSystem_InventoryLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MmoSystem_InventorySaved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MmoSystem_InventoryUpdatedWCDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MmoSystem_MySQLQueryResultDelegateWithResults__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MmoSystem_OnMessageReceived__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MmoSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x40259A59,
				0x77056266,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MmoSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MmoSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MmoSystem(Z_Construct_UPackage__Script_MmoSystem, TEXT("/Script/MmoSystem"), Z_Registration_Info_UPackage__Script_MmoSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x40259A59, 0x77056266));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
