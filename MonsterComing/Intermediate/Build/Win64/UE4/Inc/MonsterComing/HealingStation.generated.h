// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONSTERCOMING_HealingStation_generated_h
#error "HealingStation.generated.h already included, missing '#pragma once' in HealingStation.h"
#endif
#define MONSTERCOMING_HealingStation_generated_h

#define MonsterComing_Source_MonsterComing_HealingStation_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestPlayerDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestPlayerDistance(); \
		P_NATIVE_END; \
	}


#define MonsterComing_Source_MonsterComing_HealingStation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestPlayerDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestPlayerDistance(); \
		P_NATIVE_END; \
	}


#define MonsterComing_Source_MonsterComing_HealingStation_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealingStation(); \
	friend struct Z_Construct_UClass_AHealingStation_Statics; \
public: \
	DECLARE_CLASS(AHealingStation, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterComing"), NO_API) \
	DECLARE_SERIALIZER(AHealingStation)


#define MonsterComing_Source_MonsterComing_HealingStation_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHealingStation(); \
	friend struct Z_Construct_UClass_AHealingStation_Statics; \
public: \
	DECLARE_CLASS(AHealingStation, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterComing"), NO_API) \
	DECLARE_SERIALIZER(AHealingStation)


#define MonsterComing_Source_MonsterComing_HealingStation_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealingStation(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealingStation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealingStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealingStation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealingStation(AHealingStation&&); \
	NO_API AHealingStation(const AHealingStation&); \
public:


#define MonsterComing_Source_MonsterComing_HealingStation_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealingStation(AHealingStation&&); \
	NO_API AHealingStation(const AHealingStation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealingStation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealingStation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealingStation)


#define MonsterComing_Source_MonsterComing_HealingStation_h_12_PRIVATE_PROPERTY_OFFSET
#define MonsterComing_Source_MonsterComing_HealingStation_h_9_PROLOG
#define MonsterComing_Source_MonsterComing_HealingStation_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonsterComing_Source_MonsterComing_HealingStation_h_12_PRIVATE_PROPERTY_OFFSET \
	MonsterComing_Source_MonsterComing_HealingStation_h_12_RPC_WRAPPERS \
	MonsterComing_Source_MonsterComing_HealingStation_h_12_INCLASS \
	MonsterComing_Source_MonsterComing_HealingStation_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MonsterComing_Source_MonsterComing_HealingStation_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonsterComing_Source_MonsterComing_HealingStation_h_12_PRIVATE_PROPERTY_OFFSET \
	MonsterComing_Source_MonsterComing_HealingStation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MonsterComing_Source_MonsterComing_HealingStation_h_12_INCLASS_NO_PURE_DECLS \
	MonsterComing_Source_MonsterComing_HealingStation_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERCOMING_API UClass* StaticClass<class AHealingStation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MonsterComing_Source_MonsterComing_HealingStation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
