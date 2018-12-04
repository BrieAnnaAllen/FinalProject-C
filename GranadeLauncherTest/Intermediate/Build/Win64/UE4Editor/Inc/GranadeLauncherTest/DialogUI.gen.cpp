// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GranadeLauncherTest/DialogUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogUI() {}
// Cross Module References
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_UDialogUI_NoRegister();
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_UDialogUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GranadeLauncherTest();
	GRANADELAUNCHERTEST_API UFunction* Z_Construct_UFunction_UDialogUI_Show();
	GRANADELAUNCHERTEST_API UFunction* Z_Construct_UFunction_UDialogUI_UpdateSubtitles();
	GRANADELAUNCHERTEST_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleStruct();
// End Cross Module References
	static FName NAME_UDialogUI_Show = FName(TEXT("Show"));
	void UDialogUI::Show()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDialogUI_Show),NULL);
	}
	void UDialogUI::StaticRegisterNativesUDialogUI()
	{
		UClass* Class = UDialogUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateSubtitles", &UDialogUI::execUpdateSubtitles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogUI_Show_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogUI_Show_Statics::Function_MetaDataParams[] = {
		{ "Category", "DialogSystem" },
		{ "ModuleRelativePath", "DialogUI.h" },
		{ "ToolTip", "Add widget to viewport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogUI_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogUI, "Show", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogUI_Show_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogUI_Show_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogUI_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogUI_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics
	{
		struct DialogUI_eventUpdateSubtitles_Parms
		{
			TArray<FSubtitleStruct> Subtitles;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subtitles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subtitles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::NewProp_Subtitles = { UE4CodeGen_Private::EPropertyClass::Array, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DialogUI_eventUpdateSubtitles_Parms, Subtitles), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::NewProp_Subtitles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Subtitles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::NewProp_Subtitles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::Function_MetaDataParams[] = {
		{ "Category", "DialogSystem" },
		{ "ModuleRelativePath", "DialogUI.h" },
		{ "ToolTip", "display subtitles based on current subtitle array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogUI, "UpdateSubtitles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DialogUI_eventUpdateSubtitles_Parms), Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogUI_UpdateSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDialogUI_UpdateSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDialogUI_NoRegister()
	{
		return UDialogUI::StaticClass();
	}
	struct Z_Construct_UClass_UDialogUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Questions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Questions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Questions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleToDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubtitleToDisplay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GranadeLauncherTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogUI_Show, "Show" }, // 2359195403
		{ &Z_Construct_UFunction_UDialogUI_UpdateSubtitles, "UpdateSubtitles" }, // 2668130791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialogUI.h" },
		{ "ModuleRelativePath", "DialogUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogUI_Statics::NewProp_Questions_MetaData[] = {
		{ "Category", "DialogUI" },
		{ "ModuleRelativePath", "DialogUI.h" },
		{ "ToolTip", "populate buttons" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogUI_Statics::NewProp_Questions = { UE4CodeGen_Private::EPropertyClass::Array, "Questions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(UDialogUI, Questions), METADATA_PARAMS(Z_Construct_UClass_UDialogUI_Statics::NewProp_Questions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogUI_Statics::NewProp_Questions_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogUI_Statics::NewProp_Questions_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Questions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogUI_Statics::NewProp_SubtitleToDisplay_MetaData[] = {
		{ "Category", "DialogUI" },
		{ "ModuleRelativePath", "DialogUI.h" },
		{ "ToolTip", "bind Subtitles to UI to see if there has been changes" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogUI_Statics::NewProp_SubtitleToDisplay = { UE4CodeGen_Private::EPropertyClass::Str, "SubtitleToDisplay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UDialogUI, SubtitleToDisplay), METADATA_PARAMS(Z_Construct_UClass_UDialogUI_Statics::NewProp_SubtitleToDisplay_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDialogUI_Statics::NewProp_SubtitleToDisplay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogUI_Statics::NewProp_Questions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogUI_Statics::NewProp_Questions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogUI_Statics::NewProp_SubtitleToDisplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDialogUI_Statics::ClassParams = {
		&UDialogUI::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UDialogUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UDialogUI_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDialogUI_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDialogUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDialogUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDialogUI, 3746632990);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDialogUI(Z_Construct_UClass_UDialogUI, &UDialogUI::StaticClass, TEXT("/Script/GranadeLauncherTest"), TEXT("UDialogUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
