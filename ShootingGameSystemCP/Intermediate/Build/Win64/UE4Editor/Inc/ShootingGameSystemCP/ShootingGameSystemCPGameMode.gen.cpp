// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingGameSystemCP/ShootingGameSystemCPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingGameSystemCPGameMode() {}
// Cross Module References
	SHOOTINGGAMESYSTEMCP_API UClass* Z_Construct_UClass_AShootingGameSystemCPGameMode_NoRegister();
	SHOOTINGGAMESYSTEMCP_API UClass* Z_Construct_UClass_AShootingGameSystemCPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShootingGameSystemCP();
// End Cross Module References
	void AShootingGameSystemCPGameMode::StaticRegisterNativesAShootingGameSystemCPGameMode()
	{
	}
	UClass* Z_Construct_UClass_AShootingGameSystemCPGameMode_NoRegister()
	{
		return AShootingGameSystemCPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShootingGameSystemCPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingGameSystemCPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingGameSystemCP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingGameSystemCPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShootingGameSystemCPGameMode.h" },
		{ "ModuleRelativePath", "ShootingGameSystemCPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingGameSystemCPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingGameSystemCPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootingGameSystemCPGameMode_Statics::ClassParams = {
		&AShootingGameSystemCPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShootingGameSystemCPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingGameSystemCPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingGameSystemCPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootingGameSystemCPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootingGameSystemCPGameMode, 1788192678);
	template<> SHOOTINGGAMESYSTEMCP_API UClass* StaticClass<AShootingGameSystemCPGameMode>()
	{
		return AShootingGameSystemCPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootingGameSystemCPGameMode(Z_Construct_UClass_AShootingGameSystemCPGameMode, &AShootingGameSystemCPGameMode::StaticClass, TEXT("/Script/ShootingGameSystemCP"), TEXT("AShootingGameSystemCPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingGameSystemCPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
