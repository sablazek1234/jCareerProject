// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/Enemy_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_AEnemy_AIController();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_AEnemy_AIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	void AEnemy_AIController::StaticRegisterNativesAEnemy_AIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_AIController);
	UClass* Z_Construct_UClass_AEnemy_AIController_NoRegister()
	{
		return AEnemy_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_jCareerProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_AIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Enemy_AIController.h" },
		{ "ModuleRelativePath", "Enemy_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_AIController_Statics::ClassParams = {
		&AEnemy_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_AIController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemy_AIController()
	{
		if (!Z_Registration_Info_UClass_AEnemy_AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_AIController.OuterSingleton, Z_Construct_UClass_AEnemy_AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemy_AIController.OuterSingleton;
	}
	template<> JCAREERPROJECT_API UClass* StaticClass<AEnemy_AIController>()
	{
		return AEnemy_AIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_AIController);
	AEnemy_AIController::~AEnemy_AIController() {}
	struct Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Enemy_AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Enemy_AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_AIController, AEnemy_AIController::StaticClass, TEXT("AEnemy_AIController"), &Z_Registration_Info_UClass_AEnemy_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_AIController), 1566155547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Enemy_AIController_h_1073535827(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Enemy_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Enemy_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
