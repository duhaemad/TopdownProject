// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TOPDOWNPROJECT_AI_Bot_Controller_generated_h
#error "AI_Bot_Controller.generated.h already included, missing '#pragma once' in AI_Bot_Controller.h"
#endif
#define TOPDOWNPROJECT_AI_Bot_Controller_generated_h

#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_SPARSE_DATA
#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_Bot_Controller(); \
	friend struct Z_Construct_UClass_AAI_Bot_Controller_Statics; \
public: \
	DECLARE_CLASS(AAI_Bot_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownProject"), NO_API) \
	DECLARE_SERIALIZER(AAI_Bot_Controller)


#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAI_Bot_Controller(); \
	friend struct Z_Construct_UClass_AAI_Bot_Controller_Statics; \
public: \
	DECLARE_CLASS(AAI_Bot_Controller, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownProject"), NO_API) \
	DECLARE_SERIALIZER(AAI_Bot_Controller)


#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_Bot_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_Bot_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Bot_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Bot_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Bot_Controller(AAI_Bot_Controller&&); \
	NO_API AAI_Bot_Controller(const AAI_Bot_Controller&); \
public:


#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_Bot_Controller(AAI_Bot_Controller&&); \
	NO_API AAI_Bot_Controller(const AAI_Bot_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_Bot_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_Bot_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_Bot_Controller)


#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_PRIVATE_PROPERTY_OFFSET
#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_12_PROLOG
#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_SPARSE_DATA \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_RPC_WRAPPERS \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_INCLASS \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_SPARSE_DATA \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_INCLASS_NO_PURE_DECLS \
	TopDownProject_Source_TopDownProject_AI_Bot_Controller_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNPROJECT_API UClass* StaticClass<class AAI_Bot_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownProject_Source_TopDownProject_AI_Bot_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
