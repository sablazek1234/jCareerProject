// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/MusicComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMusicComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UMusicComponent();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UMusicComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	void UMusicComponent::StaticRegisterNativesUMusicComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMusicComponent);
	UClass* Z_Construct_UClass_UMusicComponent_NoRegister()
	{
		return UMusicComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMusicComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MusicComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MusicComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayMusic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayMusic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMusicComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_jCareerProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMusicComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusicComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MusicComponent.h" },
		{ "ModuleRelativePath", "MusicComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusicComponent_Statics::NewProp_MusicComp_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set up Music\n" },
#endif
		{ "ModuleRelativePath", "MusicComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set up Music" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMusicComponent_Statics::NewProp_MusicComp = { "MusicComp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMusicComponent, MusicComp), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMusicComponent_Statics::NewProp_MusicComp_MetaData), Z_Construct_UClass_UMusicComponent_Statics::NewProp_MusicComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMusicComponent_Statics::NewProp_PlayMusic_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "MusicComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMusicComponent_Statics::NewProp_PlayMusic = { "PlayMusic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMusicComponent, PlayMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMusicComponent_Statics::NewProp_PlayMusic_MetaData), Z_Construct_UClass_UMusicComponent_Statics::NewProp_PlayMusic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMusicComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMusicComponent_Statics::NewProp_MusicComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMusicComponent_Statics::NewProp_PlayMusic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMusicComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMusicComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMusicComponent_Statics::ClassParams = {
		&UMusicComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMusicComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMusicComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMusicComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMusicComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMusicComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMusicComponent()
	{
		if (!Z_Registration_Info_UClass_UMusicComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMusicComponent.OuterSingleton, Z_Construct_UClass_UMusicComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMusicComponent.OuterSingleton;
	}
	template<> JCAREERPROJECT_API UClass* StaticClass<UMusicComponent>()
	{
		return UMusicComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMusicComponent);
	UMusicComponent::~UMusicComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_MusicComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_MusicComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMusicComponent, UMusicComponent::StaticClass, TEXT("UMusicComponent"), &Z_Registration_Info_UClass_UMusicComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMusicComponent), 1865295876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_MusicComponent_h_651419398(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_MusicComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_MusicComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
