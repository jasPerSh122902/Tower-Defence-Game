// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/TowerDefencePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefencePlayerController() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerDefencePlayerController_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerDefencePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ATowerDefencePlayerController::StaticRegisterNativesATowerDefencePlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATowerDefencePlayerController_NoRegister()
	{
		return ATowerDefencePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATowerDefencePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerDefencePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefencePlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TowerDefencePlayerController.h" },
		{ "ModuleRelativePath", "TowerDefencePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerDefencePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerDefencePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATowerDefencePlayerController_Statics::ClassParams = {
		&ATowerDefencePlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerDefencePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefencePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerDefencePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATowerDefencePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATowerDefencePlayerController, 2794940530);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATowerDefencePlayerController>()
	{
		return ATowerDefencePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATowerDefencePlayerController(Z_Construct_UClass_ATowerDefencePlayerController, &ATowerDefencePlayerController::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATowerDefencePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerDefencePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
