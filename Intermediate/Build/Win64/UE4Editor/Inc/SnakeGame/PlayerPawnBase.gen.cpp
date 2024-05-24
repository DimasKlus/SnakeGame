// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/PlayerPawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawnBase() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_APlayerPawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void APlayerPawnBase::StaticRegisterNativesAPlayerPawnBase()
	{
	}
	UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister()
	{
		return APlayerPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawnBase.h" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera = { "PawnCamera", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, PawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor = { "SnakeActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActor), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass = { "SnakeActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActorClass), Z_Construct_UClass_ASnakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams = {
		&APlayerPawnBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerPawnBase, 4043261341);
	template<> SNAKEGAME_API UClass* StaticClass<APlayerPawnBase>()
	{
		return APlayerPawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerPawnBase(Z_Construct_UClass_APlayerPawnBase, &APlayerPawnBase::StaticClass, TEXT("/Script/SnakeGame"), TEXT("APlayerPawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
