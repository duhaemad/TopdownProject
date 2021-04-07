// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownProject/Ai_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAi_Character() {}
// Cross Module References
	TOPDOWNPROJECT_API UClass* Z_Construct_UClass_AAi_Character_NoRegister();
	TOPDOWNPROJECT_API UClass* Z_Construct_UClass_AAi_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownProject();
// End Cross Module References
	void AAi_Character::StaticRegisterNativesAAi_Character()
	{
	}
	UClass* Z_Construct_UClass_AAi_Character_NoRegister()
	{
		return AAi_Character::StaticClass();
	}
	struct Z_Construct_UClass_AAi_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAi_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAi_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ai_Character.h" },
		{ "ModuleRelativePath", "Ai_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAi_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAi_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAi_Character_Statics::ClassParams = {
		&AAi_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAi_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAi_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAi_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAi_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAi_Character, 2937962289);
	template<> TOPDOWNPROJECT_API UClass* StaticClass<AAi_Character>()
	{
		return AAi_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAi_Character(Z_Construct_UClass_AAi_Character, &AAi_Character::StaticClass, TEXT("/Script/TopDownProject"), TEXT("AAi_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAi_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
