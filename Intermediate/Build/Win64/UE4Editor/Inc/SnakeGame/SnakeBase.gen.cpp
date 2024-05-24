// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SnakeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeBase() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	void ASnakeBase::StaticRegisterNativesASnakeBase()
	{
	}
	UClass* Z_Construct_UClass_ASnakeBase_NoRegister()
	{
		return ASnakeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SnakeBase.h" },
		{ "ModuleRelativePath", "SnakeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnakeBase_Statics::ClassParams = {
		&ASnakeBase::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnakeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnakeBase, 1785553598);
	template<> SNAKEGAME_API UClass* StaticClass<ASnakeBase>()
	{
		return ASnakeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnakeBase(Z_Construct_UClass_ASnakeBase, &ASnakeBase::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ASnakeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
