// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownProject/AI_Bot_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Bot_Controller() {}
// Cross Module References
	TOPDOWNPROJECT_API UClass* Z_Construct_UClass_AAI_Bot_Controller_NoRegister();
	TOPDOWNPROJECT_API UClass* Z_Construct_UClass_AAI_Bot_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TopDownProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAI_Bot_Controller::execOnPawnDetected)
	{
		P_GET_TARRAY(AActor*,Z_Param_DetectedPawnes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetected(Z_Param_DetectedPawnes);
		P_NATIVE_END;
	}
	void AAI_Bot_Controller::StaticRegisterNativesAAI_Bot_Controller()
	{
		UClass* Class = AAI_Bot_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AAI_Bot_Controller::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics
	{
		struct AI_Bot_Controller_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawnes;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedPawnes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedPawnes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawnes_Inner = { "DetectedPawnes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawnes = { "DetectedPawnes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_Bot_Controller_eventOnPawnDetected_Parms, DetectedPawnes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawnes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::NewProp_DetectedPawnes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// alawwws the ai preception component to always point into the directtion the char facing in \n" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
		{ "ToolTip", "alawwws the ai preception component to always point into the directtion the char facing in" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_Bot_Controller, nullptr, "OnPawnDetected", nullptr, nullptr, sizeof(AI_Bot_Controller_eventOnPawnDetected_Parms), Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_Bot_Controller_NoRegister()
	{
		return AAI_Bot_Controller::StaticClass();
	}
	struct Z_Construct_UClass_AAI_Bot_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AILoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AILoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIfileldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIfileldOfView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_Bot_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_Bot_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_Bot_Controller_OnPawnDetected, "OnPawnDetected" }, // 3136642313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI_Bot_Controller.h" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius_MetaData[] = {
		{ "Category", "AI_Bot_Controller" },
		{ "Comment", "//like event handeller that will process any detected objects --->any objects are detected by the perception component \n" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
		{ "ToolTip", "like event handeller that will process any detected objects --->any objects are detected by the perception component" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius = { "AISightRadius", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, AISightRadius), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge_MetaData[] = {
		{ "Category", "AI_Bot_Controller" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge = { "AISightAge", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, AISightAge), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius_MetaData[] = {
		{ "Category", "AI_Bot_Controller" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius = { "AILoseSightRadius", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, AILoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIfileldOfView_MetaData[] = {
		{ "Category", "AI_Bot_Controller" },
		{ "ModuleRelativePath", "AI_Bot_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIfileldOfView = { "AIfileldOfView", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_Bot_Controller, AIfileldOfView), METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIfileldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIfileldOfView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_Bot_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AISightAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AILoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_Bot_Controller_Statics::NewProp_AIfileldOfView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_Bot_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_Bot_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_Bot_Controller_Statics::ClassParams = {
		&AAI_Bot_Controller::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_Bot_Controller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_Bot_Controller_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_Bot_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_Bot_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_Bot_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_Bot_Controller, 1984142665);
	template<> TOPDOWNPROJECT_API UClass* StaticClass<AAI_Bot_Controller>()
	{
		return AAI_Bot_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Bot_Controller(Z_Construct_UClass_AAI_Bot_Controller, &AAI_Bot_Controller::StaticClass, TEXT("/Script/TopDownProject"), TEXT("AAI_Bot_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Bot_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
