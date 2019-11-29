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
// End Cross Module References
	void AHealingStation::StaticRegisterNativesAHealingStation()
	{
	}
	UClass* Z_Construct_UClass_AHealingStation_NoRegister()
	{
		return AHealingStation::StaticClass();
	}
	struct Z_Construct_UClass_AHealingStation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealingStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterComing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HealingStation.h" },
		{ "ModuleRelativePath", "HealingStation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealingStation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealingStation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHealingStation_Statics::ClassParams = {
		&AHealingStation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AHealingStation, 2192395583);
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
