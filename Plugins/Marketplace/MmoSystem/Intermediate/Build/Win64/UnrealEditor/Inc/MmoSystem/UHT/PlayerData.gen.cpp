// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/PlayerData/PlayerData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerData() {}

// Begin Cross Module References
MMOSYSTEM_API UClass* Z_Construct_UClass_UBlobObjectWrapper();
MMOSYSTEM_API UClass* Z_Construct_UClass_UPlayerData();
MMOSYSTEM_API UClass* Z_Construct_UClass_UPlayerData_NoRegister();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_ECharClass();
MMOSYSTEM_API UEnum* Z_Construct_UEnum_MmoSystem_EPlayerGender();
MMOSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCharBaseInfo();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Enum EPlayerGender
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerGender;
static UEnum* EPlayerGender_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerGender.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MmoSystem_EPlayerGender, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("EPlayerGender"));
	}
	return Z_Registration_Info_UEnum_EPlayerGender.OuterSingleton;
}
template<> MMOSYSTEM_API UEnum* StaticEnum<EPlayerGender>()
{
	return EPlayerGender_StaticEnum();
}
struct Z_Construct_UEnum_MmoSystem_EPlayerGender_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Female.Name", "Female" },
		{ "Male.Name", "Male" },
		{ "ModuleRelativePath", "PlayerData/PlayerData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Male", (int64)Male },
		{ "Female", (int64)Female },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MmoSystem_EPlayerGender_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	"EPlayerGender",
	"EPlayerGender",
	Z_Construct_UEnum_MmoSystem_EPlayerGender_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EPlayerGender_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_EPlayerGender_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MmoSystem_EPlayerGender_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MmoSystem_EPlayerGender()
{
	if (!Z_Registration_Info_UEnum_EPlayerGender.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerGender.InnerSingleton, Z_Construct_UEnum_MmoSystem_EPlayerGender_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerGender.InnerSingleton;
}
// End Enum EPlayerGender

// Begin Enum ECharClass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharClass;
static UEnum* ECharClass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharClass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MmoSystem_ECharClass, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("ECharClass"));
	}
	return Z_Registration_Info_UEnum_ECharClass.OuterSingleton;
}
template<> MMOSYSTEM_API UEnum* StaticEnum<ECharClass>()
{
	return ECharClass_StaticEnum();
}
struct Z_Construct_UEnum_MmoSystem_ECharClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Combat.Name", "Combat" },
		{ "Healer.Name", "Healer" },
		{ "ModuleRelativePath", "PlayerData/PlayerData.h" },
		{ "Tradesman.Name", "Tradesman" },
		{ "Unset.Name", "Unset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Unset", (int64)Unset },
		{ "Combat", (int64)Combat },
		{ "Healer", (int64)Healer },
		{ "Tradesman", (int64)Tradesman },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MmoSystem_ECharClass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	"ECharClass",
	"ECharClass",
	Z_Construct_UEnum_MmoSystem_ECharClass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_ECharClass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MmoSystem_ECharClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MmoSystem_ECharClass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MmoSystem_ECharClass()
{
	if (!Z_Registration_Info_UEnum_ECharClass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharClass.InnerSingleton, Z_Construct_UEnum_MmoSystem_ECharClass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharClass.InnerSingleton;
}
// End Enum ECharClass

// Begin ScriptStruct FCharBaseInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharBaseInfo;
class UScriptStruct* FCharBaseInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharBaseInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharBaseInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharBaseInfo, (UObject*)Z_Construct_UPackage__Script_MmoSystem(), TEXT("CharBaseInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CharBaseInfo.OuterSingleton;
}
template<> MMOSYSTEM_API UScriptStruct* StaticStruct<FCharBaseInfo>()
{
	return FCharBaseInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharBaseInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlayerData/PlayerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurName_MetaData[] = {
		{ "ModuleRelativePath", "PlayerData/PlayerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[] = {
		{ "ModuleRelativePath", "PlayerData/PlayerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "PlayerData/PlayerData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SurName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Gender;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharBaseInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharBaseInfo_Statics::NewProp_SurName = { "SurName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharBaseInfo, SurName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurName_MetaData), NewProp_SurName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharBaseInfo_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharBaseInfo, Gender), Z_Construct_UEnum_MmoSystem_EPlayerGender, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gender_MetaData), NewProp_Gender_MetaData) }; // 911337052
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharBaseInfo_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharBaseInfo, Class), Z_Construct_UEnum_MmoSystem_ECharClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) }; // 2735553991
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharBaseInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharBaseInfo_Statics::NewProp_SurName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharBaseInfo_Statics::NewProp_Gender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharBaseInfo_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharBaseInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharBaseInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
	nullptr,
	&NewStructOps,
	"CharBaseInfo",
	Z_Construct_UScriptStruct_FCharBaseInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharBaseInfo_Statics::PropPointers),
	sizeof(FCharBaseInfo),
	alignof(FCharBaseInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharBaseInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharBaseInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharBaseInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CharBaseInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharBaseInfo.InnerSingleton, Z_Construct_UScriptStruct_FCharBaseInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharBaseInfo.InnerSingleton;
}
// End ScriptStruct FCharBaseInfo

// Begin Class UPlayerData
void UPlayerData::StaticRegisterNativesUPlayerData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerData);
UClass* Z_Construct_UClass_UPlayerData_NoRegister()
{
	return UPlayerData::StaticClass();
}
struct Z_Construct_UClass_UPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerData/PlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlayerData/PlayerData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseInfo_MetaData[] = {
		{ "Category", "PlayerData" },
		{ "ModuleRelativePath", "PlayerData/PlayerData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerData_Statics::NewProp_BaseInfo = { "BaseInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerData, BaseInfo), Z_Construct_UScriptStruct_FCharBaseInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseInfo_MetaData), NewProp_BaseInfo_MetaData) }; // 4171156554
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerData_Statics::NewProp_BaseInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlobObjectWrapper,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerData_Statics::ClassParams = {
	&UPlayerData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerData()
{
	if (!Z_Registration_Info_UClass_UPlayerData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerData.OuterSingleton, Z_Construct_UClass_UPlayerData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerData.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UPlayerData>()
{
	return UPlayerData::StaticClass();
}
UPlayerData::UPlayerData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerData);
UPlayerData::~UPlayerData() {}
// End Class UPlayerData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerGender_StaticEnum, TEXT("EPlayerGender"), &Z_Registration_Info_UEnum_EPlayerGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 911337052U) },
		{ ECharClass_StaticEnum, TEXT("ECharClass"), &Z_Registration_Info_UEnum_ECharClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2735553991U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharBaseInfo::StaticStruct, Z_Construct_UScriptStruct_FCharBaseInfo_Statics::NewStructOps, TEXT("CharBaseInfo"), &Z_Registration_Info_UScriptStruct_CharBaseInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharBaseInfo), 4171156554U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerData, UPlayerData::StaticClass, TEXT("UPlayerData"), &Z_Registration_Info_UClass_UPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerData), 1587638860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_3299557896(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_PlayerData_PlayerData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
