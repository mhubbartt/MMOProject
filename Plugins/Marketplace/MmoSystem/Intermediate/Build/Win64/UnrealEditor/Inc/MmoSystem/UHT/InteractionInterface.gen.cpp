// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MmoSystem/Interfaces/InteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInteractionInterface();
MMOSYSTEM_API UClass* Z_Construct_UClass_UInteractionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MmoSystem();
// End Cross Module References

// Begin Interface UInteractionInterface Function HideInteractionOptions
void IInteractionInterface::HideInteractionOptions()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideInteractionOptions instead.");
}
static FName NAME_UInteractionInterface_HideInteractionOptions = FName(TEXT("HideInteractionOptions"));
void IInteractionInterface::Execute_HideInteractionOptions(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_HideInteractionOptions);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->HideInteractionOptions_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractionInterface_HideInteractionOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
		{ "ModuleRelativePath", "Interfaces/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_HideInteractionOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "HideInteractionOptions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_HideInteractionOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_HideInteractionOptions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionInterface_HideInteractionOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_HideInteractionOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execHideInteractionOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideInteractionOptions_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function HideInteractionOptions

// Begin Interface UInteractionInterface Function InteractionHighLightActor
void IInteractionInterface::InteractionHighLightActor()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractionHighLightActor instead.");
}
static FName NAME_UInteractionInterface_InteractionHighLightActor = FName(TEXT("InteractionHighLightActor"));
void IInteractionInterface::Execute_InteractionHighLightActor(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_InteractionHighLightActor);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->InteractionHighLightActor_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractionInterface_InteractionHighLightActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor that is being interacted with\n" },
#endif
		{ "ModuleRelativePath", "Interfaces/InteractionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor that is being interacted with" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_InteractionHighLightActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "InteractionHighLightActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_InteractionHighLightActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_InteractionHighLightActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionInterface_InteractionHighLightActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_InteractionHighLightActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execInteractionHighLightActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractionHighLightActor_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function InteractionHighLightActor

// Begin Interface UInteractionInterface Function InteractionUnHighLightActor
void IInteractionInterface::InteractionUnHighLightActor()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InteractionUnHighLightActor instead.");
}
static FName NAME_UInteractionInterface_InteractionUnHighLightActor = FName(TEXT("InteractionUnHighLightActor"));
void IInteractionInterface::Execute_InteractionUnHighLightActor(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_InteractionUnHighLightActor);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->InteractionUnHighLightActor_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractionInterface_InteractionUnHighLightActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
		{ "ModuleRelativePath", "Interfaces/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_InteractionUnHighLightActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "InteractionUnHighLightActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_InteractionUnHighLightActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_InteractionUnHighLightActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionInterface_InteractionUnHighLightActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_InteractionUnHighLightActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execInteractionUnHighLightActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractionUnHighLightActor_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function InteractionUnHighLightActor

// Begin Interface UInteractionInterface Function IsWithinDistance
struct InteractionInterface_eventIsWithinDistance_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InteractionInterface_eventIsWithinDistance_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInteractionInterface::IsWithinDistance()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsWithinDistance instead.");
	InteractionInterface_eventIsWithinDistance_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInteractionInterface_IsWithinDistance = FName(TEXT("IsWithinDistance"));
bool IInteractionInterface::Execute_IsWithinDistance(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	InteractionInterface_eventIsWithinDistance_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_IsWithinDistance);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsWithinDistance_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
		{ "ModuleRelativePath", "Interfaces/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractionInterface_eventIsWithinDistance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionInterface_eventIsWithinDistance_Parms), &Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "IsWithinDistance", nullptr, nullptr, Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::PropPointers), sizeof(InteractionInterface_eventIsWithinDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionInterface_eventIsWithinDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInterface_IsWithinDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_IsWithinDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execIsWithinDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWithinDistance_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function IsWithinDistance

// Begin Interface UInteractionInterface Function PerformInteraction
struct InteractionInterface_eventPerformInteraction_Parms
{
	AActor* CharacterReference;
};
void IInteractionInterface::PerformInteraction(AActor* CharacterReference)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PerformInteraction instead.");
}
static FName NAME_UInteractionInterface_PerformInteraction = FName(TEXT("PerformInteraction"));
void IInteractionInterface::Execute_PerformInteraction(UObject* O, AActor* CharacterReference)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	InteractionInterface_eventPerformInteraction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_PerformInteraction);
	if (Func)
	{
		Parms.CharacterReference=CharacterReference;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->PerformInteraction_Implementation(CharacterReference);
	}
}
struct Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
		{ "ModuleRelativePath", "Interfaces/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::NewProp_CharacterReference = { "CharacterReference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionInterface_eventPerformInteraction_Parms, CharacterReference), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::NewProp_CharacterReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "PerformInteraction", nullptr, nullptr, Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::PropPointers), sizeof(InteractionInterface_eventPerformInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(InteractionInterface_eventPerformInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInterface_PerformInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_PerformInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execPerformInteraction)
{
	P_GET_OBJECT(AActor,Z_Param_CharacterReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformInteraction_Implementation(Z_Param_CharacterReference);
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function PerformInteraction

// Begin Interface UInteractionInterface Function ShowInteractionOptions
void IInteractionInterface::ShowInteractionOptions()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowInteractionOptions instead.");
}
static FName NAME_UInteractionInterface_ShowInteractionOptions = FName(TEXT("ShowInteractionOptions"));
void IInteractionInterface::Execute_ShowInteractionOptions(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInteractionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInteractionInterface_ShowInteractionOptions);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInteractionInterface*)(O->GetNativeInterfaceAddress(UInteractionInterface::StaticClass())))
	{
		I->ShowInteractionOptions_Implementation();
	}
}
struct Z_Construct_UFunction_UInteractionInterface_ShowInteractionOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Interface" },
		{ "ModuleRelativePath", "Interfaces/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInterface_ShowInteractionOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionInterface, nullptr, "ShowInteractionOptions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInterface_ShowInteractionOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInterface_ShowInteractionOptions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInteractionInterface_ShowInteractionOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInterface_ShowInteractionOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInteractionInterface::execShowInteractionOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowInteractionOptions_Implementation();
	P_NATIVE_END;
}
// End Interface UInteractionInterface Function ShowInteractionOptions

// Begin Interface UInteractionInterface
void UInteractionInterface::StaticRegisterNativesUInteractionInterface()
{
	UClass* Class = UInteractionInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideInteractionOptions", &IInteractionInterface::execHideInteractionOptions },
		{ "InteractionHighLightActor", &IInteractionInterface::execInteractionHighLightActor },
		{ "InteractionUnHighLightActor", &IInteractionInterface::execInteractionUnHighLightActor },
		{ "IsWithinDistance", &IInteractionInterface::execIsWithinDistance },
		{ "PerformInteraction", &IInteractionInterface::execPerformInteraction },
		{ "ShowInteractionOptions", &IInteractionInterface::execShowInteractionOptions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionInterface);
UClass* Z_Construct_UClass_UInteractionInterface_NoRegister()
{
	return UInteractionInterface::StaticClass();
}
struct Z_Construct_UClass_UInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/InteractionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionInterface_HideInteractionOptions, "HideInteractionOptions" }, // 744933779
		{ &Z_Construct_UFunction_UInteractionInterface_InteractionHighLightActor, "InteractionHighLightActor" }, // 60725437
		{ &Z_Construct_UFunction_UInteractionInterface_InteractionUnHighLightActor, "InteractionUnHighLightActor" }, // 2791507573
		{ &Z_Construct_UFunction_UInteractionInterface_IsWithinDistance, "IsWithinDistance" }, // 35578604
		{ &Z_Construct_UFunction_UInteractionInterface_PerformInteraction, "PerformInteraction" }, // 331942817
		{ &Z_Construct_UFunction_UInteractionInterface_ShowInteractionOptions, "ShowInteractionOptions" }, // 425811704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MmoSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInterface_Statics::ClassParams = {
	&UInteractionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton, Z_Construct_UClass_UInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionInterface.OuterSingleton;
}
template<> MMOSYSTEM_API UClass* StaticClass<UInteractionInterface>()
{
	return UInteractionInterface::StaticClass();
}
UInteractionInterface::UInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInterface);
UInteractionInterface::~UInteractionInterface() {}
// End Interface UInteractionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInterface, UInteractionInterface::StaticClass, TEXT("UInteractionInterface"), &Z_Registration_Info_UClass_UInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInterface), 911323719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_3942455085(TEXT("/Script/MmoSystem"),
	Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Epoch_Documents_Unreal_Projects_MMOSystem_Plugins_Marketplace_MmoSystem_Source_MmoSystem_Interfaces_InteractionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
