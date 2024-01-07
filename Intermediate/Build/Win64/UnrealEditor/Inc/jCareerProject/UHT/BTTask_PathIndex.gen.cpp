// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/BTTask_PathIndex.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PathIndex() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UBTTask_PathIndex();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_UBTTask_PathIndex_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	void UBTTask_PathIndex::StaticRegisterNativesUBTTask_PathIndex()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PathIndex);
	UClass* Z_Construct_UClass_UBTTask_PathIndex_NoRegister()
	{
		return UBTTask_PathIndex::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_PathIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directions_MetaData[];
#endif
		static void NewProp_Directions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Directions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_PathIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_jCareerProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathIndex_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PathIndex_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_PathIndex.h" },
		{ "ModuleRelativePath", "BTTask_PathIndex.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_PathIndex_Statics::NewProp_Directions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "BTTask_PathIndex.h" },
	};
#endif
	void Z_Construct_UClass_UBTTask_PathIndex_Statics::NewProp_Directions_SetBit(void* Obj)
	{
		((UBTTask_PathIndex*)Obj)->Directions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_PathIndex_Statics::NewProp_Directions = { "Directions", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_PathIndex), &Z_Construct_UClass_UBTTask_PathIndex_Statics::NewProp_Directions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathIndex_Statics::NewProp_Directions_MetaData), Z_Construct_UClass_UBTTask_PathIndex_Statics::NewProp_Directions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PathIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PathIndex_Statics::NewProp_Directions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_PathIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PathIndex>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PathIndex_Statics::ClassParams = {
		&UBTTask_PathIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_PathIndex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathIndex_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathIndex_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PathIndex_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PathIndex_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_PathIndex()
	{
		if (!Z_Registration_Info_UClass_UBTTask_PathIndex.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PathIndex.OuterSingleton, Z_Construct_UClass_UBTTask_PathIndex_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_PathIndex.OuterSingleton;
	}
	template<> JCAREERPROJECT_API UClass* StaticClass<UBTTask_PathIndex>()
	{
		return UBTTask_PathIndex::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PathIndex);
	UBTTask_PathIndex::~UBTTask_PathIndex() {}
	struct Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTTask_PathIndex_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTTask_PathIndex_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PathIndex, UBTTask_PathIndex::StaticClass, TEXT("UBTTask_PathIndex"), &Z_Registration_Info_UClass_UBTTask_PathIndex, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PathIndex), 1795759961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTTask_PathIndex_h_75778762(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTTask_PathIndex_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_BTTask_PathIndex_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
