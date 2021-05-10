// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef SHOOTINGGAMESYSTEMCP_PlayerBullet_generated_h
#error "PlayerBullet.generated.h already included, missing '#pragma once' in PlayerBullet.h"
#endif
#define SHOOTINGGAMESYSTEMCP_PlayerBullet_generated_h

#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_SPARSE_DATA
#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerBullet(); \
	friend struct Z_Construct_UClass_APlayerBullet_Statics; \
public: \
	DECLARE_CLASS(APlayerBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingGameSystemCP"), NO_API) \
	DECLARE_SERIALIZER(APlayerBullet)


#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerBullet(); \
	friend struct Z_Construct_UClass_APlayerBullet_Statics; \
public: \
	DECLARE_CLASS(APlayerBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingGameSystemCP"), NO_API) \
	DECLARE_SERIALIZER(APlayerBullet)


#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerBullet(APlayerBullet&&); \
	NO_API APlayerBullet(const APlayerBullet&); \
public:


#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerBullet(APlayerBullet&&); \
	NO_API APlayerBullet(const APlayerBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerBullet)


#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_PRIVATE_PROPERTY_OFFSET
#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_9_PROLOG
#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_SPARSE_DATA \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_RPC_WRAPPERS \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_INCLASS \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_PRIVATE_PROPERTY_OFFSET \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_SPARSE_DATA \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_INCLASS_NO_PURE_DECLS \
	ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTINGGAMESYSTEMCP_API UClass* StaticClass<class APlayerBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootingGameSystemCP_Source_ShootingGameSystemCP_Private_PlayerBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
