// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/Widget_HealthBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_HealthBar() {}
// Cross Module References
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UWidget_HealthBar();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UWidget_HealthBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	void UWidget_HealthBar::StaticRegisterNativesUWidget_HealthBar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_HealthBar);
	UClass* Z_Construct_UClass_UWidget_HealthBar_NoRegister()
	{
		return UWidget_HealthBar::StaticClass();
	}
	struct Z_Construct_UClass_UWidget_HealthBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidget_HealthBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_jCareerProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_HealthBar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_HealthBar_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget_HealthBar.h" },
		{ "ModuleRelativePath", "Widget_HealthBar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidget_HealthBar_Statics::NewProp_HealthBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidget", "" },
		{ "Category", "Widget_HealthBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widget_HealthBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_HealthBar_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_HealthBar, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_HealthBar_Statics::NewProp_HealthBar_MetaData), Z_Construct_UClass_UWidget_HealthBar_Statics::NewProp_HealthBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_HealthBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_HealthBar_Statics::NewProp_HealthBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidget_HealthBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_HealthBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_HealthBar_Statics::ClassParams = {
		&UWidget_HealthBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidget_HealthBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_HealthBar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_HealthBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_HealthBar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_HealthBar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWidget_HealthBar()
	{
		if (!Z_Registration_Info_UClass_UWidget_HealthBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_HealthBar.OuterSingleton, Z_Construct_UClass_UWidget_HealthBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidget_HealthBar.OuterSingleton;
	}
	template<> JCAREERPROJECT_API UClass* StaticClass<UWidget_HealthBar>()
	{
		return UWidget_HealthBar::StaticClass();
	}
	UWidget_HealthBar::UWidget_HealthBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_HealthBar);
	UWidget_HealthBar::~UWidget_HealthBar() {}
	struct Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Widget_HealthBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Widget_HealthBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_HealthBar, UWidget_HealthBar::StaticClass, TEXT("UWidget_HealthBar"), &Z_Registration_Info_UClass_UWidget_HealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_HealthBar), 2415672787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Widget_HealthBar_h_2409116303(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Widget_HealthBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Widget_HealthBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
