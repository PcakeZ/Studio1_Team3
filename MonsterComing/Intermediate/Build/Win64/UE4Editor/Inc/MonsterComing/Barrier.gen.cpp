// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonsterComing/Barrier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarrier() {}
// Cross Module References
	MONSTERCOMING_API UClass* Z_Construct_UClass_ABarrier_NoRegister();
	MONSTERCOMING_API UClass* Z_Construct_UClass_ABarrier();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MonsterComing();
// End Cross Module References
	void ABarrier::StaticRegisterNativesABarrier()
	{
	}
	UClass* Z_Construct_UClass_ABarrier_NoRegister()
	{
		return ABarrier::StaticClass();
	}
	struct Z_Construct_UClass_ABarrier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarrier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MonsterComing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarrier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barrier.h" },
		{ "ModuleRelativePath", "Barrier.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarrier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarrier_Statics::ClassParams = {
		&ABarrier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABarrier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABarrier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarrier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarrier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarrier, 3970663608);
	template<> MONSTERCOMING_API UClass* StaticClass<ABarrier>()
	{
		return ABarrier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarrier(Z_Construct_UClass_ABarrier, &ABarrier::StaticClass, TEXT("/Script/MonsterComing"), TEXT("ABarrier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
