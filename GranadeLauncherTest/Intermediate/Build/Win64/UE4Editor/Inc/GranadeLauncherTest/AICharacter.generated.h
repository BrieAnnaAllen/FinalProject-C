// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubtitleStruct;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GRANADELAUNCHERTEST_AICharacter_generated_h
#error "AICharacter.generated.h already included, missing '#pragma once' in AICharacter.h"
#endif
#define GRANADELAUNCHERTEST_AICharacter_generated_h

#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTalk) \
	{ \
		P_GET_TARRAY(FSubtitleStruct,Z_Param_Subs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Talk(Z_Param_Subs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBoxEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBoxEndOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBoxOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBoxOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTalk) \
	{ \
		P_GET_TARRAY(FSubtitleStruct,Z_Param_Subs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Talk(Z_Param_Subs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBoxEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBoxEndOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBoxOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBoxOverlap(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend struct Z_Construct_UClass_AAICharacter_Statics; \
public: \
	DECLARE_CLASS(AAICharacter, AGranadeLauncherTestCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GranadeLauncherTest"), NO_API) \
	DECLARE_SERIALIZER(AAICharacter)


#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend struct Z_Construct_UClass_AAICharacter_Statics; \
public: \
	DECLARE_CLASS(AAICharacter, AGranadeLauncherTestCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GranadeLauncherTest"), NO_API) \
	DECLARE_SERIALIZER(AAICharacter)


#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAICharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacter(AAICharacter&&); \
	NO_API AAICharacter(const AAICharacter&); \
public:


#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacter(AAICharacter&&); \
	NO_API AAICharacter(const AAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAICharacter)


#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxComp() { return STRUCT_OFFSET(AAICharacter, BoxComp); } \
	FORCEINLINE static uint32 __PPO__PlayerLines() { return STRUCT_OFFSET(AAICharacter, PlayerLines); } \
	FORCEINLINE static uint32 __PPO__AILines() { return STRUCT_OFFSET(AAICharacter, AILines); }


#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_15_PROLOG
#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_RPC_WRAPPERS \
	GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_INCLASS \
	GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_INCLASS_NO_PURE_DECLS \
	GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GranadeLauncherTest_Source_GranadeLauncherTest_AICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
