// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Camera/MSCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSCameraComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraComponent();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraComponent_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraMode_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UMSCameraModeStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Class UMSCameraComponent Function FindCameraComponent
struct Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics
{
	struct MSCameraComponent_eventFindCameraComponent_Parms
	{
		const AActor* Actor;
		UMSCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MMO System|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the camera component if one exists on the specified actor.\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the camera component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSCameraComponent_eventFindCameraComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSCameraComponent_eventFindCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UMSCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMSCameraComponent, nullptr, "FindCameraComponent", nullptr, nullptr, Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::MSCameraComponent_eventFindCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::MSCameraComponent_eventFindCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSCameraComponent::execFindCameraComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMSCameraComponent**)Z_Param__Result=UMSCameraComponent::FindCameraComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UMSCameraComponent Function FindCameraComponent

// Begin Class UMSCameraComponent
void UMSCameraComponent::StaticRegisterNativesUMSCameraComponent()
{
	UClass* Class = UMSCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindCameraComponent", &UMSCameraComponent::execFindCameraComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMSCameraComponent);
UClass* Z_Construct_UClass_UMSCameraComponent_NoRegister()
{
	return UMSCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UMSCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMSCameraComponent\n *\n *\x09The base camera component class used by this project.\n */" },
#endif
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/MSCameraComponent.h" },
		{ "ModuleRelativePath", "Camera/MSCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMSCameraComponent\n\n    The base camera component class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[] = {
		{ "Category", "MMO System|Camera" },
		{ "ModuleRelativePath", "Camera/MSCameraComponent.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stack used to blend the camera modes.\n" },
#endif
		{ "ModuleRelativePath", "Camera/MSCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack used to blend the camera modes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSCameraComponent_FindCameraComponent, "FindCameraComponent" }, // 78542567
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMSCameraComponent_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraComponent, CameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UMSCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMode_MetaData), NewProp_CameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSCameraComponent_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSCameraComponent, CameraModeStack), Z_Construct_UClass_UMSCameraModeStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraComponent_Statics::NewProp_CameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSCameraComponent_Statics::NewProp_CameraModeStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSCameraComponent_Statics::ClassParams = {
	&UMSCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMSCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSCameraComponent()
{
	if (!Z_Registration_Info_UClass_UMSCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSCameraComponent.OuterSingleton, Z_Construct_UClass_UMSCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSCameraComponent.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UMSCameraComponent>()
{
	return UMSCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSCameraComponent);
UMSCameraComponent::~UMSCameraComponent() {}
// End Class UMSCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSCameraComponent, UMSCameraComponent::StaticClass, TEXT("UMSCameraComponent"), &Z_Registration_Info_UClass_UMSCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSCameraComponent), 2561581862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_1452989656(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_GitHub_MMOProject_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Camera_MSCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
