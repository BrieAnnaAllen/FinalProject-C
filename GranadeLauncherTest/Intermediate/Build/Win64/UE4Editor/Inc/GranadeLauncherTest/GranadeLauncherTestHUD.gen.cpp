// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GranadeLauncherTest/GranadeLauncherTestHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGranadeLauncherTestHUD() {}
// Cross Module References
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_AGranadeLauncherTestHUD_NoRegister();
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_AGranadeLauncherTestHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GranadeLauncherTest();
// End Cross Module References
	void AGranadeLauncherTestHUD::StaticRegisterNativesAGranadeLauncherTestHUD()
	{
	}
	UClass* Z_Construct_UClass_AGranadeLauncherTestHUD_NoRegister()
	{
		return AGranadeLauncherTestHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGranadeLauncherTestHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGranadeLauncherTestHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GranadeLauncherTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGranadeLauncherTestHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GranadeLauncherTestHUD.h" },
		{ "ModuleRelativePath", "GranadeLauncherTestHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGranadeLauncherTestHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGranadeLauncherTestHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGranadeLauncherTestHUD_Statics::ClassParams = {
		&AGranadeLauncherTestHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGranadeLauncherTestHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGranadeLauncherTestHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGranadeLauncherTestHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGranadeLauncherTestHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGranadeLauncherTestHUD, 3409196199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGranadeLauncherTestHUD(Z_Construct_UClass_AGranadeLauncherTestHUD, &AGranadeLauncherTestHUD::StaticClass, TEXT("/Script/GranadeLauncherTest"), TEXT("AGranadeLauncherTestHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGranadeLauncherTestHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif