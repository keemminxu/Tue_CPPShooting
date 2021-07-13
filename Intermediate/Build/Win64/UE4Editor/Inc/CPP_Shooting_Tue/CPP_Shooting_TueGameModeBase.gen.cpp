// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Shooting_Tue/Public/CPP_Shooting_TueGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Shooting_TueGameModeBase() {}
// Cross Module References
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_NoRegister();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_ACPP_Shooting_TueGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_Shooting_Tue();
// End Cross Module References
	void ACPP_Shooting_TueGameModeBase::StaticRegisterNativesACPP_Shooting_TueGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_NoRegister()
	{
		return ACPP_Shooting_TueGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Shooting_Tue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPP_Shooting_TueGameModeBase.h" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Shooting_TueGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::ClassParams = {
		&ACPP_Shooting_TueGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Shooting_TueGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_Shooting_TueGameModeBase, 1366595995);
	template<> CPP_SHOOTING_TUE_API UClass* StaticClass<ACPP_Shooting_TueGameModeBase>()
	{
		return ACPP_Shooting_TueGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_Shooting_TueGameModeBase(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase, &ACPP_Shooting_TueGameModeBase::StaticClass, TEXT("/Script/CPP_Shooting_Tue"), TEXT("ACPP_Shooting_TueGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Shooting_TueGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
