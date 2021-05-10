// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingGameSystemCP/ShootingGameSystemCPCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingGameSystemCPCharacter() {}
// Cross Module References
	SHOOTINGGAMESYSTEMCP_API UClass* Z_Construct_UClass_AShootingGameSystemCPCharacter_NoRegister();
	SHOOTINGGAMESYSTEMCP_API UClass* Z_Construct_UClass_AShootingGameSystemCPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ShootingGameSystemCP();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AShootingGameSystemCPCharacter::execOnFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFire();
		P_NATIVE_END;
	}
	void AShootingGameSystemCPCharacter::StaticRegisterNativesAShootingGameSystemCPCharacter()
	{
		UClass* Class = AShootingGameSystemCPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFire", &AShootingGameSystemCPCharacter::execOnFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootingGameSystemCPCharacter_OnFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingGameSystemCPCharacter_OnFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?e???C?x???g?\xcc\x83R?[???o?b?N?\xd6\x90?\n" },
		{ "ModuleRelativePath", "ShootingGameSystemCPCharacter.h" },
		{ "ToolTip", "?e???C?x???g?\xcc\x83R?[???o?b?N?\xd6\x90?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingGameSystemCPCharacter_OnFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingGameSystemCPCharacter, nullptr, "OnFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingGameSystemCPCharacter_OnFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingGameSystemCPCharacter_OnFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingGameSystemCPCharacter_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShootingGameSystemCPCharacter_OnFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShootingGameSystemCPCharacter_NoRegister()
	{
		return AShootingGameSystemCPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletEmitter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletEmitter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingGameSystemCP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingGameSystemCPCharacter_OnFire, "OnFire" }, // 2992109761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShootingGameSystemCPCharacter.h" },
		{ "ModuleRelativePath", "ShootingGameSystemCPCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShootingGameSystemCPCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingGameSystemCPCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShootingGameSystemCPCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingGameSystemCPCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "ShootingGameSystemCPCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingGameSystemCPCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "ShootingGameSystemCPCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingGameSystemCPCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BulletEmitter_MetaData[] = {
		{ "Category", "shooting" },
		{ "Comment", "// ?e?\xdb\x82??X?|?[???????K?C?h\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShootingGameSystemCPCharacter.h" },
		{ "ToolTip", "?e?\xdb\x82??X?|?[???????K?C?h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BulletEmitter = { "BulletEmitter", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingGameSystemCPCharacter, BulletEmitter), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BulletEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BulletEmitter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::NewProp_BulletEmitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingGameSystemCPCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::ClassParams = {
		&AShootingGameSystemCPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingGameSystemCPCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootingGameSystemCPCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootingGameSystemCPCharacter, 615593953);
	template<> SHOOTINGGAMESYSTEMCP_API UClass* StaticClass<AShootingGameSystemCPCharacter>()
	{
		return AShootingGameSystemCPCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootingGameSystemCPCharacter(Z_Construct_UClass_AShootingGameSystemCPCharacter, &AShootingGameSystemCPCharacter::StaticClass, TEXT("/Script/ShootingGameSystemCP"), TEXT("AShootingGameSystemCPCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingGameSystemCPCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
