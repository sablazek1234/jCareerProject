// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/BTService_ConfigureSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_ConfigureSpeed() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UBTService_ConfigureSpeed();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UBTService_ConfigureSpeed_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	void UBTService_ConfigureSpeed::StaticRegisterNativesUBTService_ConfigureSpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_ConfigureSpeed);
	UClass* Z_Construct_UClass_UBTService_ConfigureSpeed_NoRegister()
	{
		return UBTService_ConfigureSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_ConfigureSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_jCareerProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_ConfigureSpeed.h" },
		{ "ModuleRelativePath", "BTService_ConfigureSpeed.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "yes" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BTService_ConfigureSpeed.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_ConfigureSpeed, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::NewProp_Speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_ConfigureSpeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::ClassParams = {
		&UBTService_ConfigureSpeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTService_ConfigureSpeed()
	{
		if (!Z_Registration_Info_UClass_UBTService_ConfigureSpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_ConfigureSpeed.OuterSingleton, Z_Construct_UClass_UBTService_ConfigureSpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_ConfigureSpeed.OuterSingleton;
	}
	template<> JCAREERPROJECT_API UClass* StaticClass<UBTService_ConfigureSpeed>()
	{
		return UBTService_ConfigureSpeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_ConfigureSpeed);
	UBTService_ConfigureSpeed::~UBTService_ConfigureSpeed() {}
	struct Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTService_ConfigureSpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTService_ConfigureSpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_ConfigureSpeed, UBTService_ConfigureSpeed::StaticClass, TEXT("UBTService_ConfigureSpeed"), &Z_Registration_Info_UClass_UBTService_ConfigureSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_ConfigureSpeed), 552966493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTService_ConfigureSpeed_h_745674866(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTService_ConfigureSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTService_ConfigureSpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
