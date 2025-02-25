// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MONSTERCOMING_BossInitialiser_generated_h
#error "BossInitialiser.generated.h already included, missing '#pragma once' in BossInitialiser.h"
#endif
#define MONSTERCOMING_BossInitialiser_generated_h

#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABossInitialiser(); \
	friend struct Z_Construct_UClass_ABossInitialiser_Statics; \
public: \
	DECLARE_CLASS(ABossInitialiser, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterComing"), NO_API) \
	DECLARE_SERIALIZER(ABossInitialiser)


#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABossInitialiser(); \
	friend struct Z_Construct_UClass_ABossInitialiser_Statics; \
public: \
	DECLARE_CLASS(ABossInitialiser, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterComing"), NO_API) \
	DECLARE_SERIALIZER(ABossInitialiser)


#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABossInitialiser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABossInitialiser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossInitialiser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossInitialiser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABossInitialiser(ABossInitialiser&&); \
	NO_API ABossInitialiser(const ABossInitialiser&); \
public:


#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABossInitialiser(ABossInitialiser&&); \
	NO_API ABossInitialiser(const ABossInitialiser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossInitialiser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossInitialiser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABossInitialiser)


#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_PRIVATE_PROPERTY_OFFSET
#define MonsterComing_Source_MonsterComing_BossInitialiser_h_9_PROLOG
#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonsterComing_Source_MonsterComing_BossInitialiser_h_12_PRIVATE_PROPERTY_OFFSET \
	MonsterComing_Source_MonsterComing_BossInitialiser_h_12_RPC_WRAPPERS \
	MonsterComing_Source_MonsterComing_BossInitialiser_h_12_INCLASS \
	MonsterComing_Source_MonsterComing_BossInitialiser_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MonsterComing_Source_MonsterComing_BossInitialiser_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonsterComing_Source_MonsterComing_BossInitialiser_h_12_PRIVATE_PROPERTY_OFFSET \
	MonsterComing_Source_MonsterComing_BossInitialiser_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MonsterComing_Source_MonsterComing_BossInitialiser_h_12_INCLASS_NO_PURE_DECLS \
	MonsterComing_Source_MonsterComing_BossInitialiser_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERCOMING_API UClass* StaticClass<class ABossInitialiser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MonsterComing_Source_MonsterComing_BossInitialiser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
