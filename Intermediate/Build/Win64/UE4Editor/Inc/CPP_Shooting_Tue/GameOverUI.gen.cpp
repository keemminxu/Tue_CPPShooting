// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Shooting_Tue/Public/GameOverUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverUI() {}
// Cross Module References
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_UGameOverUI_NoRegister();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_UGameOverUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CPP_Shooting_Tue();
// End Cross Module References
	DEFINE_FUNCTION(UGameOverUI::execOnClick_Quit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_Quit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameOverUI::execOnClick_Restart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClick_Restart();
		P_NATIVE_END;
	}
	void UGameOverUI::StaticRegisterNativesUGameOverUI()
	{
		UClass* Class = UGameOverUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClick_Quit", &UGameOverUI::execOnClick_Quit },
			{ "OnClick_Restart", &UGameOverUI::execOnClick_Restart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameOverUI_OnClick_Quit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverUI_OnClick_Quit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameOverUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverUI_OnClick_Quit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverUI, nullptr, "OnClick_Quit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOverUI_OnClick_Quit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverUI_OnClick_Quit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOverUI_OnClick_Quit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOverUI_OnClick_Quit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameOverUI_OnClick_Restart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameOverUI_OnClick_Restart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameOverUI.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverUI_OnClick_Restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverUI, nullptr, "OnClick_Restart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameOverUI_OnClick_Restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverUI_OnClick_Restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameOverUI_OnClick_Restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameOverUI_OnClick_Restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameOverUI_NoRegister()
	{
		return UGameOverUI::StaticClass();
	}
	struct Z_Construct_UClass_UGameOverUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOverUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Shooting_Tue,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameOverUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameOverUI_OnClick_Quit, "OnClick_Quit" }, // 3968397693
		{ &Z_Construct_UFunction_UGameOverUI_OnClick_Restart, "OnClick_Restart" }, // 3945784358
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameOverUI.h" },
		{ "ModuleRelativePath", "Public/GameOverUI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOverUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameOverUI_Statics::ClassParams = {
		&UGameOverUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameOverUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameOverUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameOverUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameOverUI, 3038161287);
	template<> CPP_SHOOTING_TUE_API UClass* StaticClass<UGameOverUI>()
	{
		return UGameOverUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameOverUI(Z_Construct_UClass_UGameOverUI, &UGameOverUI::StaticClass, TEXT("/Script/CPP_Shooting_Tue"), TEXT("UGameOverUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
