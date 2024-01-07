// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/PathForEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathForEnemy() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_APathForEnemy();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_APathForEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	void APathForEnemy::StaticRegisterNativesAPathForEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APathForEnemy);
	UClass* Z_Construct_UClass_APathForEnemy_NoRegister()
	{
		return APathForEnemy::StaticClass();
	}
	struct Z_Construct_UClass_APathForEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathForEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_jCareerProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathForEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathForEnemy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathForEnemy.h" },
		{ "ModuleRelativePath", "PathForEnemy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathForEnemy_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathForEnemy_Statics::NewProp_PathPoints_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "PathForEnemy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathForEnemy_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APathForEnemy, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathForEnemy_Statics::NewProp_PathPoints_MetaData), Z_Construct_UClass_APathForEnemy_Statics::NewProp_PathPoints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathForEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathForEnemy_Statics::NewProp_PathPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathForEnemy_Statics::NewProp_PathPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathForEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathForEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APathForEnemy_Statics::ClassParams = {
		&APathForEnemy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APathForEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APathForEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APathForEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_APathForEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APathForEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APathForEnemy()
	{
		if (!Z_Registration_Info_UClass_APathForEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APathForEnemy.OuterSingleton, Z_Construct_UClass_APathForEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APathForEnemy.OuterSingleton;
	}
	template<> JCAREERPROJECT_API UClass* StaticClass<APathForEnemy>()
	{
		return APathForEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathForEnemy);
	APathForEnemy::~APathForEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_PathForEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_PathForEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APathForEnemy, APathForEnemy::StaticClass, TEXT("APathForEnemy"), &Z_Registration_Info_UClass_APathForEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APathForEnemy), 1576183584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_PathForEnemy_h_4033530311(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_PathForEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_PathForEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
