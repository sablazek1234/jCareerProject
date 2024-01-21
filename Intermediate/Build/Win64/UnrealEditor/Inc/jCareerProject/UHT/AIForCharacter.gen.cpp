// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "jCareerProject/AIForCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIForCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_AAIForCharacter();
	JCAREERPROJECT_API UClass* Z_Construct_UClass_AAIForCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_jCareerProject();
// End Cross Module References
	DEFINE_FUNCTION(AAIForCharacter::execOnAttackOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIForCharacter::execOnAttackOverlapStart)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_FromPunch);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_PunchResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackOverlapStart(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_FromPunch,Z_Param_Out_PunchResult);
		P_NATIVE_END;
	}
	void AAIForCharacter::StaticRegisterNativesAAIForCharacter()
	{
		UClass* Class = AAIForCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAttackOverlapEnd", &AAIForCharacter::execOnAttackOverlapEnd },
			{ "OnAttackOverlapStart", &AAIForCharacter::execOnAttackOverlapStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics
	{
		struct AIForCharacter_eventOnAttackOverlapEnd_Parms
		{
			const UPrimitiveComponent* OverlappedComp;
			const AActor* OtherActor;
			const UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherBodyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OverlappedComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherActor_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherBodyIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherBodyIndex_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherBodyIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIForCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIForCharacter, nullptr, "OnAttackOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::AIForCharacter_eventOnAttackOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::AIForCharacter_eventOnAttackOverlapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics
	{
		struct AIForCharacter_eventOnAttackOverlapStart_Parms
		{
			const UPrimitiveComponent* OverlappedComp;
			const AActor* OtherActor;
			const UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool FromPunch;
			FHitResult PunchResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherBodyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromPunch_MetaData[];
#endif
		static void NewProp_FromPunch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FromPunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunchResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PunchResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapStart_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OverlappedComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapStart_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherActor_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapStart_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherBodyIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapStart_Parms, OtherBodyIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherBodyIndex_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherBodyIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_FromPunch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_FromPunch_SetBit(void* Obj)
	{
		((AIForCharacter_eventOnAttackOverlapStart_Parms*)Obj)->FromPunch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_FromPunch = { "FromPunch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIForCharacter_eventOnAttackOverlapStart_Parms), &Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_FromPunch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_FromPunch_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_FromPunch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_PunchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_PunchResult = { "PunchResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIForCharacter_eventOnAttackOverlapStart_Parms, PunchResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_PunchResult_MetaData), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_PunchResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_FromPunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::NewProp_PunchResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIForCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIForCharacter, nullptr, "OnAttackOverlapStart", nullptr, nullptr, Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::AIForCharacter_eventOnAttackOverlapStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::AIForCharacter_eventOnAttackOverlapStart_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIForCharacter);
	UClass* Z_Construct_UClass_AAIForCharacter_NoRegister()
	{
		return AAIForCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAIForCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIForCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapEnd, "OnAttackOverlapEnd" }, // 499978568
		{ &Z_Construct_UFunction_AAIForCharacter_OnAttackOverlapStart, "OnAttackOverlapStart" }, // 762480640
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIForCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIForCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIForCharacter.h" },
		{ "ModuleRelativePath", "AIForCharacter.h" },
	};
#endif
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
		FuncInfo,
		Z_Construct_UClass_AAIForCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AAIForCharacter, AAIForCharacter::StaticClass, TEXT("AAIForCharacter"), &Z_Registration_Info_UClass_AAIForCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIForCharacter), 4229313597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AIForCharacter_h_2855869796(TEXT("/Script/jCareerProject"),
		Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AIForCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Dustin_Documents_Unreal_Projects_jCareerProject_Source_jCareerProject_AIForCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
