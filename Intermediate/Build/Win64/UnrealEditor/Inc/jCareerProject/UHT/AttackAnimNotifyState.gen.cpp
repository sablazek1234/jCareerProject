// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/AttackAnimNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackAnimNotifyState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UAttackAnimNotifyState();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UAttackAnimNotifyState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	void UAttackAnimNotifyState::StaticRegisterNativesUAttackAnimNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackAnimNotifyState);
	UClass* Z_Construct_UClass_UAttackAnimNotifyState_NoRegister()
	{
		return UAttackAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UAttackAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_jCareerProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAnimNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackAnimNotifyState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AttackAnimNotifyState.h" },
		{ "ModuleRelativePath", "AttackAnimNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackAnimNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackAnimNotifyState_Statics::ClassParams = {
		&UAttackAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackAnimNotifyState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAttackAnimNotifyState()
	{
		if (!Z_Registration_Info_UClass_UAttackAnimNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackAnimNotifyState.OuterSingleton, Z_Construct_UClass_UAttackAnimNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackAnimNotifyState.OuterSingleton;
	}
	template<> JCAREERPROJECT_API UClass* StaticClass<UAttackAnimNotifyState>()
	{
		return UAttackAnimNotifyState::StaticClass();
	}
	UAttackAnimNotifyState::UAttackAnimNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackAnimNotifyState);
	UAttackAnimNotifyState::~UAttackAnimNotifyState() {}
	struct Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AttackAnimNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AttackAnimNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackAnimNotifyState, UAttackAnimNotifyState::StaticClass, TEXT("UAttackAnimNotifyState"), &Z_Registration_Info_UClass_UAttackAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackAnimNotifyState), 1025938062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AttackAnimNotifyState_h_2393679183(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AttackAnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AttackAnimNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
