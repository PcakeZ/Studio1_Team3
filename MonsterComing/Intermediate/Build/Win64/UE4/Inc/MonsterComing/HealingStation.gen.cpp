// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterComing/HealingStation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealingStation() {}
// Cross Module References
	MONSTERCOMING_API UClass* Z_Construct_UClass_AHealingStation_NoRegister();
	MONSTERCOMING_API UClass* Z_Construct_UClass_AHealingStation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MonsterComing();
	MONSTERCOMING_API UFunction* Z_Construct_UFunction_AHealingStation_TestPlayerDistance();
// End Cross Module References
	void AHealingStation::StaticRegisterNativesAHealingStation()
	{
		UClass* Class = AHealingStation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestPlayerDistance", &AHealingStation::execTestPlayerDistance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHealingStation_TestPlayerDistance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHealingStation_TestPlayerDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHealingStation_TestPlayerDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHealingStation, nullptr, "TestPlayerDistance", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHealingStation_TestPlayerDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHealingStation_TestPlayerDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHealingStation_TestPlayerDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHealingStation_TestPlayerDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHealingStation_NoRegister()
	{
		return AHealingStation::StaticClass();
	}
	struct Z_Construct_UClass_AHealingStation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRange_MetaData[];
#endif
		static void NewProp_inRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentHealing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentHealing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healthPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healthPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_healingRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_healingRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealingStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterComing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHealingStation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHealingStation_TestPlayerDistance, "TestPlayerDistance" }, // 95369205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealingStation.h" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingStation_Statics::NewProp_currentDistance_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealingStation_Statics::NewProp_currentDistance = { "currentDistance", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealingStation, currentDistance), METADATA_PARAMS(Z_Construct_UClass_AHealingStation_Statics::NewProp_currentDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealingStation_Statics::NewProp_currentDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingStation_Statics::NewProp_inRange_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
	void Z_Construct_UClass_AHealingStation_Statics::NewProp_inRange_SetBit(void* Obj)
	{
		((AHealingStation*)Obj)->inRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHealingStation_Statics::NewProp_inRange = { "inRange", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHealingStation), &Z_Construct_UClass_AHealingStation_Statics::NewProp_inRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHealingStation_Statics::NewProp_inRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealingStation_Statics::NewProp_inRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingStation_Statics::NewProp_maxHealing_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealingStation_Statics::NewProp_maxHealing = { "maxHealing", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealingStation, maxHealing), METADATA_PARAMS(Z_Construct_UClass_AHealingStation_Statics::NewProp_maxHealing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealingStation_Statics::NewProp_maxHealing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingStation_Statics::NewProp_currentHealing_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealingStation_Statics::NewProp_currentHealing = { "currentHealing", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealingStation, currentHealing), METADATA_PARAMS(Z_Construct_UClass_AHealingStation_Statics::NewProp_currentHealing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealingStation_Statics::NewProp_currentHealing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingStation_Statics::NewProp_healthPerSecond_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealingStation_Statics::NewProp_healthPerSecond = { "healthPerSecond", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealingStation, healthPerSecond), METADATA_PARAMS(Z_Construct_UClass_AHealingStation_Statics::NewProp_healthPerSecond_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealingStation_Statics::NewProp_healthPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingStation_Statics::NewProp_healingRange_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealingStation_Statics::NewProp_healingRange = { "healingRange", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHealingStation, healingRange), METADATA_PARAMS(Z_Construct_UClass_AHealingStation_Statics::NewProp_healingRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHealingStation_Statics::NewProp_healingRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealingStation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealingStation_Statics::NewProp_currentDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealingStation_Statics::NewProp_inRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealingStation_Statics::NewProp_maxHealing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealingStation_Statics::NewProp_currentHealing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealingStation_Statics::NewProp_healthPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealingStation_Statics::NewProp_healingRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealingStation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealingStation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealingStation_Statics::ClassParams = {
		&AHealingStation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHealingStation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AHealingStation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHealingStation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHealingStation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHealingStation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHealingStation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHealingStation, 1873012118);
	template<> MONSTERCOMING_API UClass* StaticClass<AHealingStation>()
	{
		return AHealingStation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHealingStation(Z_Construct_UClass_AHealingStation, &AHealingStation::StaticClass, TEXT("/Script/MonsterComing"), TEXT("AHealingStation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealingStation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
