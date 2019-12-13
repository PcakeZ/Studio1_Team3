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
#ifdef MONSTERCOMING_MyTriggerBox_generated_h
#error "MyTriggerBox.generated.h already included, missing '#pragma once' in MyTriggerBox.h"
#endif
#define MONSTERCOMING_MyTriggerBox_generated_h

#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_RPC_WRAPPERS \
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


#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTriggerBox(); \
	friend struct Z_Construct_UClass_AMyTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AMyTriggerBox, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterComing"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerBox)


#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyTriggerBox(); \
	friend struct Z_Construct_UClass_AMyTriggerBox_Statics; \
public: \
	DECLARE_CLASS(AMyTriggerBox, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MonsterComing"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerBox)


#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerBox(AMyTriggerBox&&); \
	NO_API AMyTriggerBox(const AMyTriggerBox&); \
public:


#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerBox(AMyTriggerBox&&); \
	NO_API AMyTriggerBox(const AMyTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTriggerBox)


#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_12_PROLOG
#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_RPC_WRAPPERS \
	MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_INCLASS \
	MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	MonsterComing_Source_MonsterComing_MyTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONSTERCOMING_API UClass* StaticClass<class AMyTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MonsterComing_Source_MonsterComing_MyTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
