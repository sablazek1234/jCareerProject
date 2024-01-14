// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/AIForCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIForCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_AAIForCharacter();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_AAIForCharacter_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	void AAIForCharacter::StaticRegisterNativesAAIForCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIForCharacter);
	UClass* Z_Construct_UClass_AAIForCharacter_NoRegister()
	{
		return AAIForCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAIForCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandHitBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandHitBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIForCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_jCareerProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIForCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIForCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIForCharacter.h" },
		{ "ModuleRelativePath", "AIForCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIForCharacter_Statics::NewProp_WidgetComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIForCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIForCharacter_Statics::NewProp_WidgetComp = { "WidgetComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIForCharacter, WidgetComp), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIForCharacter_Statics::NewProp_WidgetComp_MetaData), Z_Construct_UClass_AAIForCharacter_Statics::NewProp_WidgetComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIForCharacter_Statics::NewProp_RightHandHitBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIForCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIForCharacter_Statics::NewProp_RightHandHitBox = { "RightHandHitBox", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIForCharacter, RightHandHitBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIForCharacter_Statics::NewProp_RightHandHitBox_MetaData), Z_Construct_UClass_AAIForCharacter_Statics::NewProp_RightHandHitBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIForCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIForCharacter_Statics::NewProp_WidgetComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIForCharacter_Statics::NewProp_RightHandHitBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIForCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIForCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIForCharacter_Statics::ClassParams = {
		&AAIForCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIForCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIForCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIForCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIForCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIForCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIForCharacter()
	{
		if (!Z_Registration_Info_UClass_AAIForCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIForCharacter.OuterSingleton, Z_Construct_UClass_AAIForCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIForCharacter.OuterSingleton;
	}
	template<> JCAREERPROJECT_API UClass* StaticClass<AAIForCharacter>()
	{
		return AAIForCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIForCharacter);
	AAIForCharacter::~AAIForCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AIForCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AIForCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIForCharacter, AAIForCharacter::StaticClass, TEXT("AAIForCharacter"), &Z_Registration_Info_UClass_AAIForCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIForCharacter), 2859773785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AIForCharacter_h_696874663(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AIForCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AIForCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
