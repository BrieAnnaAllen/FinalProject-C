// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GranadeLauncherTest/SubtitleStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubtitleStruct() {}
// Cross Module References
	GRANADELAUNCHERTEST_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleStruct();
	UPackage* Z_Construct_UPackage__Script_GranadeLauncherTest();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FSubtitleStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRANADELAUNCHERTEST_API uint32 Get_Z_Construct_UScriptStruct_FSubtitleStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubtitleStruct, Z_Construct_UPackage__Script_GranadeLauncherTest(), TEXT("SubtitleStruct"), sizeof(FSubtitleStruct), Get_Z_Construct_UScriptStruct_FSubtitleStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubtitleStruct(FSubtitleStruct::StaticStruct, TEXT("/Script/GranadeLauncherTest"), TEXT("SubtitleStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GranadeLauncherTest_StaticRegisterNativesFSubtitleStruct
{
	FScriptStruct_GranadeLauncherTest_StaticRegisterNativesFSubtitleStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubtitleStruct")),new UScriptStruct::TCppStructOps<FSubtitleStruct>);
	}
} ScriptStruct_GranadeLauncherTest_StaticRegisterNativesFSubtitleStruct;
	struct Z_Construct_UScriptStruct_FSubtitleStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AssociatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Subtitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitleStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SubtitleStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubtitleStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_AssociatedTime_MetaData[] = {
		{ "Category", "SubtitleStruct" },
		{ "ModuleRelativePath", "SubtitleStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_AssociatedTime = { UE4CodeGen_Private::EPropertyClass::Float, "AssociatedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSubtitleStruct, AssociatedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_AssociatedTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_AssociatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_Subtitle_MetaData[] = {
		{ "Category", "SubtitleStruct" },
		{ "ModuleRelativePath", "SubtitleStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_Subtitle = { UE4CodeGen_Private::EPropertyClass::Str, "Subtitle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FSubtitleStruct, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_Subtitle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_Subtitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubtitleStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_AssociatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitleStruct_Statics::NewProp_Subtitle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubtitleStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GranadeLauncherTest,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SubtitleStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSubtitleStruct),
		alignof(FSubtitleStruct),
		Z_Construct_UScriptStruct_FSubtitleStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitleStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitleStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitleStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubtitleStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubtitleStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GranadeLauncherTest();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubtitleStruct"), sizeof(FSubtitleStruct), Get_Z_Construct_UScriptStruct_FSubtitleStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubtitleStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubtitleStruct_CRC() { return 1981073728U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
