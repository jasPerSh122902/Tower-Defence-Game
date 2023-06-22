// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_TowerDefenceCharacter_generated_h
#error "TowerDefenceCharacter.generated.h already included, missing '#pragma once' in TowerDefenceCharacter.h"
#endif
#define TOWERDEFENCE_TowerDefenceCharacter_generated_h

#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_RPC_WRAPPERS
#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowerDefenceCharacter(); \
	friend struct Z_Construct_UClass_ATowerDefenceCharacter_Statics; \
public: \
	DECLARE_CLASS(ATowerDefenceCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATowerDefenceCharacter)


#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATowerDefenceCharacter(); \
	friend struct Z_Construct_UClass_ATowerDefenceCharacter_Statics; \
public: \
	DECLARE_CLASS(ATowerDefenceCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATowerDefenceCharacter)


#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATowerDefenceCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATowerDefenceCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerDefenceCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerDefenceCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerDefenceCharacter(ATowerDefenceCharacter&&); \
	NO_API ATowerDefenceCharacter(const ATowerDefenceCharacter&); \
public:


#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerDefenceCharacter(ATowerDefenceCharacter&&); \
	NO_API ATowerDefenceCharacter(const ATowerDefenceCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerDefenceCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerDefenceCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATowerDefenceCharacter)


#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATowerDefenceCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATowerDefenceCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATowerDefenceCharacter, CursorToWorld); }


#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_9_PROLOG
#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_INCLASS \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class ATowerDefenceCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_TowerDefenceCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
