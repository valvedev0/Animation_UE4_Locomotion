// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "alpha1/alpha1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodealpha1GameMode() {}
// Cross Module References
	ALPHA1_API UClass* Z_Construct_UClass_Aalpha1GameMode_NoRegister();
	ALPHA1_API UClass* Z_Construct_UClass_Aalpha1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_alpha1();
// End Cross Module References
	void Aalpha1GameMode::StaticRegisterNativesAalpha1GameMode()
	{
	}
	UClass* Z_Construct_UClass_Aalpha1GameMode_NoRegister()
	{
		return Aalpha1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aalpha1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aalpha1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_alpha1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aalpha1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "alpha1GameMode.h" },
		{ "ModuleRelativePath", "alpha1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aalpha1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aalpha1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aalpha1GameMode_Statics::ClassParams = {
		&Aalpha1GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aalpha1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aalpha1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aalpha1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aalpha1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aalpha1GameMode, 1293361154);
	template<> ALPHA1_API UClass* StaticClass<Aalpha1GameMode>()
	{
		return Aalpha1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aalpha1GameMode(Z_Construct_UClass_Aalpha1GameMode, &Aalpha1GameMode::StaticClass, TEXT("/Script/alpha1"), TEXT("Aalpha1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aalpha1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
