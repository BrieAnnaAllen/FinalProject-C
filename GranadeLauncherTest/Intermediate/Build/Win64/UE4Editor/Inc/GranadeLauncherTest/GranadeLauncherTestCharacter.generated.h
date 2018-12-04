// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubtitleStruct;
#ifdef GRANADELAUNCHERTEST_GranadeLauncherTestCharacter_generated_h
#error "GranadeLauncherTestCharacter.generated.h already included, missing '#pragma once' in GranadeLauncherTestCharacter.h"
#endif
#define GRANADELAUNCHERTEST_GranadeLauncherTestCharacter_generated_h

#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTalk2) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Excerpt); \
		P_GET_TARRAY_REF(FSubtitleStruct,Z_Param_Out_Subtitles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Talk2(Z_Param_Excerpt,Z_Param_Out_Subtitles); \
		P_NATIVE_END; \
	}


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTalk2) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Excerpt); \
		P_GET_TARRAY_REF(FSubtitleStruct,Z_Param_Out_Subtitles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Talk2(Z_Param_Excerpt,Z_Param_Out_Subtitles); \
		P_NATIVE_END; \
	}


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_EVENT_PARMS
#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_CALLBACK_WRAPPERS
#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGranadeLauncherTestCharacter(); \
	friend struct Z_Construct_UClass_AGranadeLauncherTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AGranadeLauncherTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GranadeLauncherTest"), NO_API) \
	DECLARE_SERIALIZER(AGranadeLauncherTestCharacter)


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAGranadeLauncherTestCharacter(); \
	friend struct Z_Construct_UClass_AGranadeLauncherTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AGranadeLauncherTestCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GranadeLauncherTest"), NO_API) \
	DECLARE_SERIALIZER(AGranadeLauncherTestCharacter)


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGranadeLauncherTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGranadeLauncherTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGranadeLauncherTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGranadeLauncherTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGranadeLauncherTestCharacter(AGranadeLauncherTestCharacter&&); \
	NO_API AGranadeLauncherTestCharacter(const AGranadeLauncherTestCharacter&); \
public:


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGranadeLauncherTestCharacter(AGranadeLauncherTestCharacter&&); \
	NO_API AGranadeLauncherTestCharacter(const AGranadeLauncherTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGranadeLauncherTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGranadeLauncherTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGranadeLauncherTestCharacter)


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__UI() { return STRUCT_OFFSET(AGranadeLauncherTestCharacter, UI); }


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_14_PROLOG \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_EVENT_PARMS


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_RPC_WRAPPERS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_CALLBACK_WRAPPERS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_INCLASS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_CALLBACK_WRAPPERS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_INCLASS_NO_PURE_DECLS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
