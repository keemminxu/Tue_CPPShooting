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
	CPP_SHOOTING_TUE_API UEnum* Z_Construct_UEnum_CPP_Shooting_Tue_EGameState();
	UPackage* Z_Construct_UPackage__Script_CPP_Shooting_Tue();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_NoRegister();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_ACPP_Shooting_TueGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* EGameState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CPP_Shooting_Tue_EGameState, Z_Construct_UPackage__Script_CPP_Shooting_Tue(), TEXT("EGameState"));
		}
		return Singleton;
	}
	template<> CPP_SHOOTING_TUE_API UEnum* StaticEnum<EGameState>()
	{
		return EGameState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameState(EGameState_StaticEnum, TEXT("/Script/CPP_Shooting_Tue"), TEXT("EGameState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CPP_Shooting_Tue_EGameState_Hash() { return 3777069285U; }
	UEnum* Z_Construct_UEnum_CPP_Shooting_Tue_EGameState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CPP_Shooting_Tue();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameState"), 0, Get_Z_Construct_UEnum_CPP_Shooting_Tue_EGameState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameState::Ready", (int64)EGameState::Ready },
				{ "EGameState::Playing", (int64)EGameState::Playing },
				{ "EGameState::Gameover", (int64)EGameState::Gameover },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// ??????\n// -> \xc6\xaf???? ???????? ???\xda\xb7? ?\xc7\xb9\xcc\xb8? ?\xce\xbf??\xcf\xbf? ???? ?????? ?\xda\xb7???\n" },
				{ "Gameover.DisplayName", "GAMEOVER STATE" },
				{ "Gameover.Name", "EGameState::Gameover" },
				{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
				{ "Playing.DisplayName", "PLAYING STATE" },
				{ "Playing.Name", "EGameState::Playing" },
				{ "Ready.DisplayName", "READY STATE" },
				{ "Ready.Name", "EGameState::Ready" },
				{ "ToolTip", "??????\n-> \xc6\xaf???? ???????? ???\xda\xb7? ?\xc7\xb9\xcc\xb8? ?\xce\xbf??\xcf\xbf? ???? ?????? ?\xda\xb7???" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CPP_Shooting_Tue,
				nullptr,
				"EGameState",
				"EGameState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_readyDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_readyDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_readyUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_readyUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_startUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overUIFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_overUIFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_readyUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_readyUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_startUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playingUITime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playingUITime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Shooting_Tue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPP_Shooting_TueGameModeBase.h" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_state_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, state), Z_Construct_UEnum_CPP_Shooting_Tue_EGameState, METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_state_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyDelayTime_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyDelayTime = { "readyDelayTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, readyDelayTime), METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_currentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, currentTime), METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_currentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUIFactory_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "// ReadyUI ????\n" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
		{ "ToolTip", "ReadyUI ????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUIFactory = { "readyUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, readyUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUIFactory_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUIFactory = { "startUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, startUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUIFactory_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUIFactory = { "overUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, overUIFactory), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUIFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUIFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUI_MetaData[] = {
		{ "Comment", "// readyUI ?\xce\xbd??\xcf\xbd? \xc4\xb3??\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
		{ "ToolTip", "readyUI ?\xce\xbd??\xcf\xbd? \xc4\xb3??" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUI = { "readyUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, readyUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUI = { "startUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, startUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUI = { "overUI", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, overUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_playingUITime_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CPP_Shooting_TueGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_playingUITime = { "playingUITime", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Shooting_TueGameModeBase, playingUITime), METADATA_PARAMS(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_playingUITime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_playingUITime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_currentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUIFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_readyUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_startUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_overUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::NewProp_playingUITime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Shooting_TueGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::ClassParams = {
		&ACPP_Shooting_TueGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Shooting_TueGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ACPP_Shooting_TueGameModeBase, 99635376);
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
