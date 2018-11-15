// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef GRANADELAUNCHERTEST_GranadeLauncherTestProjectile_generated_h
#error "GranadeLauncherTestProjectile.generated.h already included, missing '#pragma once' in GranadeLauncherTestProjectile.h"
#endif
#define GRANADELAUNCHERTEST_GranadeLauncherTestProjectile_generated_h

#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGranadeLauncherTestProjectile(); \
	friend struct Z_Construct_UClass_AGranadeLauncherTestProjectile_Statics; \
public: \
	DECLARE_CLASS(AGranadeLauncherTestProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GranadeLauncherTest"), NO_API) \
	DECLARE_SERIALIZER(AGranadeLauncherTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGranadeLauncherTestProjectile(); \
	friend struct Z_Construct_UClass_AGranadeLauncherTestProjectile_Statics; \
public: \
	DECLARE_CLASS(AGranadeLauncherTestProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GranadeLauncherTest"), NO_API) \
	DECLARE_SERIALIZER(AGranadeLauncherTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGranadeLauncherTestProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGranadeLauncherTestProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGranadeLauncherTestProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGranadeLauncherTestProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGranadeLauncherTestProjectile(AGranadeLauncherTestProjectile&&); \
	NO_API AGranadeLauncherTestProjectile(const AGranadeLauncherTestProjectile&); \
public:


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGranadeLauncherTestProjectile(AGranadeLauncherTestProjectile&&); \
	NO_API AGranadeLauncherTestProjectile(const AGranadeLauncherTestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGranadeLauncherTestProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGranadeLauncherTestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGranadeLauncherTestProjectile)


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AGranadeLauncherTestProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AGranadeLauncherTestProjectile, ProjectileMovement); }


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_9_PROLOG
#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_RPC_WRAPPERS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_INCLASS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_INCLASS_NO_PURE_DECLS \
	GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GranadeLauncherTest_Source_GranadeLauncherTest_GranadeLauncherTestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
