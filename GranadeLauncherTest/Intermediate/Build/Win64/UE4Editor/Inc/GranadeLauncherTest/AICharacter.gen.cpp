// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GranadeLauncherTest/AICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacter() {}
// Cross Module References
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_AAICharacter_NoRegister();
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_AAICharacter();
	GRANADELAUNCHERTEST_API UClass* Z_Construct_UClass_AGranadeLauncherTestCharacter();
	UPackage* Z_Construct_UPackage__Script_GranadeLauncherTest();
	GRANADELAUNCHERTEST_API UFunction* Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GRANADELAUNCHERTEST_API UFunction* Z_Construct_UFunction_AAICharacter_OnBoxOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GRANADELAUNCHERTEST_API UFunction* Z_Construct_UFunction_AAICharacter_Talk();
	GRANADELAUNCHERTEST_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleStruct();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void AAICharacter::StaticRegisterNativesAAICharacter()
	{
		UClass* Class = AAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBoxEndOverlap", &AAICharacter::execOnBoxEndOverlap },
			{ "OnBoxOverlap", &AAICharacter::execOnBoxOverlap },
			{ "Talk", &AAICharacter::execTalk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics
	{
		struct AICharacter_eventOnBoxEndOverlap_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AICharacter_eventOnBoxEndOverlap_Parms, OtherIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AICharacter_eventOnBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AICharacter_eventOnBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacter, "OnBoxEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(AICharacter_eventOnBoxEndOverlap_Parms), Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics
	{
		struct AICharacter_eventOnBoxOverlap_Parms
		{
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(AICharacter_eventOnBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((AICharacter_eventOnBoxOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AICharacter_eventOnBoxOverlap_Parms), &Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AICharacter_eventOnBoxOverlap_Parms, OtherIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(AICharacter_eventOnBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AICharacter_eventOnBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacter, "OnBoxOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00440401, sizeof(AICharacter_eventOnBoxOverlap_Parms), Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacter_OnBoxOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacter_OnBoxOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAICharacter_Talk_Statics
	{
		struct AICharacter_eventTalk_Parms
		{
			TArray<FSubtitleStruct> Subs;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAICharacter_Talk_Statics::NewProp_Subs = { UE4CodeGen_Private::EPropertyClass::Array, "Subs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AICharacter_eventTalk_Parms, Subs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAICharacter_Talk_Statics::NewProp_Subs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Subs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSubtitleStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacter_Talk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_Talk_Statics::NewProp_Subs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_Talk_Statics::NewProp_Subs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_Talk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacter_Talk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacter, "Talk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(AICharacter_eventTalk_Parms), Z_Construct_UFunction_AAICharacter_Talk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_Talk_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_Talk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_Talk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacter_Talk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacter_Talk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAICharacter_NoRegister()
	{
		return AAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AILInes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AILInes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLines_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGranadeLauncherTestCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GranadeLauncherTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAICharacter_OnBoxEndOverlap, "OnBoxEndOverlap" }, // 2735017899
		{ &Z_Construct_UFunction_AAICharacter_OnBoxOverlap, "OnBoxOverlap" }, // 3096473045
		{ &Z_Construct_UFunction_AAICharacter_Talk, "Talk" }, // 951814199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AICharacter.h" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_AILInes_MetaData[] = {
		{ "Category", "DialogSystem" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_AILInes = { UE4CodeGen_Private::EPropertyClass::Object, "AILInes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AAICharacter, AILInes), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_AILInes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_AILInes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_PlayerLines_MetaData[] = {
		{ "Category", "DialogSystem" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_PlayerLines = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerLines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AAICharacter, PlayerLines), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_PlayerLines_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_PlayerLines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_BoxComp_MetaData[] = {
		{ "Category", "AICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_BoxComp = { UE4CodeGen_Private::EPropertyClass::Object, "BoxComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AAICharacter, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_BoxComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_BoxComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_AILInes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_PlayerLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_BoxComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICharacter_Statics::ClassParams = {
		&AAICharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AAICharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICharacter, 1282907839);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICharacter(Z_Construct_UClass_AAICharacter, &AAICharacter::StaticClass, TEXT("/Script/GranadeLauncherTest"), TEXT("AAICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
