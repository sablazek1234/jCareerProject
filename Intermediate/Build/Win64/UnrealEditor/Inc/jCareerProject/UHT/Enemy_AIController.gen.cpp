// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/Enemy_AIController.h"
#include "Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_AIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_AEnemy_AIController();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_AEnemy_AIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	DEFINE_FUNCTION(AEnemy_AIController::execOnTargetDetected)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDetected(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void AEnemy_AIController::StaticRegisterNativesAEnemy_AIController()
	{
		UClass* Class = AEnemy_AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetDetected", &AEnemy_AIController::execOnTargetDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics
	{
		struct Enemy_AIController_eventOnTargetDetected_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stimulus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_AIController_eventOnTargetDetected_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::NewProp_Stimulus_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Enemy_AIController_eventOnTargetDetected_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::NewProp_Stimulus_MetaData), Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::NewProp_Stimulus_MetaData) }; // 1355587946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_AIController, nullptr, "OnTargetDetected", nullptr, nullptr, Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::Enemy_AIController_eventOnTargetDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::Enemy_AIController_eventOnTargetDetected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_AIController);
	UClass* Z_Construct_UClass_AEnemy_AIController_NoRegister()
	{
		return AEnemy_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_AIController_OnTargetDetected, "OnTargetDetected" }, // 1551789855
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AEnemy_AIController, AEnemy_AIController::StaticClass, TEXT("AEnemy_AIController"), &Z_Registration_Info_UClass_AEnemy_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_AIController), 1898061206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Enemy_AIController_h_3738258463(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Enemy_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_Enemy_AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
