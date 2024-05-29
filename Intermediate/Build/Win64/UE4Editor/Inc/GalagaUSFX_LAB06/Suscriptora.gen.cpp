// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/Suscriptora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuscriptora() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_USuscriptora_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_USuscriptora();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void USuscriptora::StaticRegisterNativesUSuscriptora()
	{
	}
	UClass* Z_Construct_UClass_USuscriptora_NoRegister()
	{
		return USuscriptora::StaticClass();
	}
	struct Z_Construct_UClass_USuscriptora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuscriptora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuscriptora_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Suscriptora.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuscriptora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISuscriptora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuscriptora_Statics::ClassParams = {
		&USuscriptora::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USuscriptora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USuscriptora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuscriptora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuscriptora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuscriptora, 1181426164);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<USuscriptora>()
	{
		return USuscriptora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuscriptora(Z_Construct_UClass_USuscriptora, &USuscriptora::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("USuscriptora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuscriptora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
