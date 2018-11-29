// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GranadeLauncherTest/DialogStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogStruct() {}
// Cross Module References
	GRANADELAUNCHERTEST_API UScriptStruct* Z_Construct_UScriptStruct_FDialogStruct();
	UPackage* Z_Construct_UPackage__Script_GranadeLauncherTest();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GRANADELAUNCHERTEST_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleStruct();
// End Cross Module References
class UScriptStruct* FDialogStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GRANADELAUNCHERTEST_API uint32 Get_Z_Construct_UScriptStruct_FDialogStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogStruct, Z_Construct_UPackage__Script_GranadeLauncherTest(), TEXT("DialogStruct"), sizeof(FDialogStruct), Get_Z_Construct_UScriptStruct_FDialogStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialogStruct(FDialogStruct::StaticStruct, TEXT("/Script/GranadeLauncherTest"), TEXT("DialogStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GranadeLauncherTest_StaticRegisterNativesFDialogStruct
{
	FScriptStruct_GranadeLauncherTest_StaticRegisterNativesFDialogStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialogStruct")),new UScriptStruct::TCppStructOps<FDialogStruct>);
	}
} ScriptStruct_GranadeLauncherTest_StaticRegisterNativesFDialogStruct;
	struct Z_Construct_UScriptStruct_FDialogStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAIAnswer_MetaData[];
#endif
		static void NewProp_bShouldAIAnswer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAIAnswer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestionExcerpt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestionExcerpt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_bShouldAIAnswer_MetaData[] = {
		{ "Category", "DialogStruct" },
		{ "ModuleRelativePath", "DialogStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_bShouldAIAnswer_SetBit(void* Obj)
	{
		((FDialogStruct*)Obj)->bShouldAIAnswer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_bShouldAIAnswer = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldAIAnswer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FDialogStruct), &Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_bShouldAIAnswer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_bShouldAIAnswer_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_bShouldAIAnswer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_Subtitles_MetaData[] = {
		{ "Category", "DialogStruct" },
		{ "ModuleRelativePath", "DialogStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_Subtitles = { UE4CodeGen_Private::EPropertyClass::Array, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDialogStruct, Subtitles), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_Subtitles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_Subtitles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_Subtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_QuestionExcerpt_MetaData[] = {
		{ "Category", "DialogStruct" },
		{ "ModuleRelativePath", "DialogStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_QuestionExcerpt = { UE4CodeGen_Private::EPropertyClass::Str, "QuestionExcerpt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FDialogStruct, QuestionExcerpt), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_QuestionExcerpt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_QuestionExcerpt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_bShouldAIAnswer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_Subtitles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogStruct_Statics::NewProp_QuestionExcerpt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GranadeLauncherTest,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DialogStruct",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDialogStruct),
		alignof(FDialogStruct),
		Z_Construct_UScriptStruct_FDialogStruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogStruct_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialogStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_GranadeLauncherTest();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialogStruct"), sizeof(FDialogStruct), Get_Z_Construct_UScriptStruct_FDialogStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialogStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialogStruct_CRC() { return 615165654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
