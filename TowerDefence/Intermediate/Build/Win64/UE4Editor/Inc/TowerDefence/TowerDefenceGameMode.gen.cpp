// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/TowerDefenceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefenceGameMode() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerDefenceGameMode_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerDefenceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ATowerDefenceGameMode::StaticRegisterNativesATowerDefenceGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATowerDefenceGameMode_NoRegister()
	{
		return ATowerDefenceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATowerDefenceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerDefenceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefenceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TowerDefenceGameMode.h" },
		{ "ModuleRelativePath", "TowerDefenceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerDefenceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerDefenceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerDefenceGameMode_Statics::ClassParams = {
		&ATowerDefenceGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATowerDefenceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefenceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerDefenceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerDefenceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerDefenceGameMode, 2955178452);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATowerDefenceGameMode>()
	{
		return ATowerDefenceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerDefenceGameMode(Z_Construct_UClass_ATowerDefenceGameMode, &ATowerDefenceGameMode::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATowerDefenceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerDefenceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
