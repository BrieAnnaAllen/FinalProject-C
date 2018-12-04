// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubtitleStruct;
#ifdef GRANADELAUNCHERTEST_DialogUI_generated_h
#error "DialogUI.generated.h already included, missing '#pragma once' in DialogUI.h"
#endif
#define GRANADELAUNCHERTEST_DialogUI_generated_h

#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateSubtitles) \
	{ \
		P_GET_TARRAY(FSubtitleStruct,Z_Param_Subtitles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSubtitles(Z_Param_Subtitles); \
		P_NATIVE_END; \
	}


#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateSubtitles) \
	{ \
		P_GET_TARRAY(FSubtitleStruct,Z_Param_Subtitles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSubtitles(Z_Param_Subtitles); \
		P_NATIVE_END; \
	}


#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_EVENT_PARMS
#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_CALLBACK_WRAPPERS
#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogUI(); \
	friend struct Z_Construct_UClass_UDialogUI_Statics; \
public: \
	DECLARE_CLASS(UDialogUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GranadeLauncherTest"), NO_API) \
	DECLARE_SERIALIZER(UDialogUI)


#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDialogUI(); \
	friend struct Z_Construct_UClass_UDialogUI_Statics; \
public: \
	DECLARE_CLASS(UDialogUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GranadeLauncherTest"), NO_API) \
	DECLARE_SERIALIZER(UDialogUI)


#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogUI(UDialogUI&&); \
	NO_API UDialogUI(const UDialogUI&); \
public:


#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogUI(UDialogUI&&); \
	NO_API UDialogUI(const UDialogUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogUI)


#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_PRIVATE_PROPERTY_OFFSET
#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_16_PROLOG \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_EVENT_PARMS


#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_PRIVATE_PROPERTY_OFFSET \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_RPC_WRAPPERS \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_CALLBACK_WRAPPERS \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_INCLASS \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_PRIVATE_PROPERTY_OFFSET \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_CALLBACK_WRAPPERS \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_INCLASS_NO_PURE_DECLS \
	GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GranadeLauncherTest_Source_GranadeLauncherTest_DialogUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
