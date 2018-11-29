// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GranadeLauncherTest/GranadeLauncherTestGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGranadeLauncherTestGameMode() {}
// Cross Module References
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_AGranadeLauncherTestGameMode_NoRegister();
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_AGranadeLauncherTestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GranadeLauncherTest();
// End Cross Module References
	void AGranadeLauncherTestGameMode::StaticRegisterNativesAGranadeLauncherTestGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGranadeLauncherTestGameMode_NoRegister()
	{
		return AGranadeLauncherTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGranadeLauncherTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGranadeLauncherTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GranadeLauncherTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGranadeLauncherTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GranadeLauncherTestGameMode.h" },
		{ "ModuleRelativePath", "GranadeLauncherTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGranadeLauncherTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGranadeLauncherTestGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGranadeLauncherTestGameMode_Statics::ClassParams = {
		&AGranadeLauncherTestGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGranadeLauncherTestGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGranadeLauncherTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGranadeLauncherTestGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGranadeLauncherTestGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGranadeLauncherTestGameMode, 3839913650);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGranadeLauncherTestGameMode(Z_Construct_UClass_AGranadeLauncherTestGameMode, &AGranadeLauncherTestGameMode::StaticClass, TEXT("/Script/GranadeLauncherTest"), TEXT("AGranadeLauncherTestGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGranadeLauncherTestGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
