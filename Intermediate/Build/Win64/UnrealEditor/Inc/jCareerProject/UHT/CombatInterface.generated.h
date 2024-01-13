// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CombatInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JCAREERPROJECT_CombatInterface_generated_h
#error "CombatInterface.generated.h already included, missing '#pragma once' in CombatInterface.h"
#endif
#define JCAREERPROJECT_CombatInterface_generated_h

#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_SPARSE_DATA
#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 MeleeAttack_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execMeleeAttack);


#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_ACCESSORS
#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	JCAREERPROJECT_API UCombatInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	JCAREERPROJECT_API UCombatInterface(UCombatInterface&&); \
	JCAREERPROJECT_API UCombatInterface(const UCombatInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(JCAREERPROJECT_API, UCombatInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatInterface) \
	JCAREERPROJECT_API virtual ~UCombatInterface();


#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatInterface(); \
	friend struct Z_Construct_UClass_UCombatInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/jCareerProject"), JCAREERPROJECT_API) \
	DECLARE_SERIALIZER(UCombatInterface)


#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatInterface() {} \
public: \
	typedef UCombatInterface UClassType; \
	typedef ICombatInterface ThisClass; \
	static int32 Execute_MeleeAttack(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_10_PROLOG
#define FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_SPARSE_DATA \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_ACCESSORS \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JCAREERPROJECT_API UClass* StaticClass<class UCombatInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_CombatInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
