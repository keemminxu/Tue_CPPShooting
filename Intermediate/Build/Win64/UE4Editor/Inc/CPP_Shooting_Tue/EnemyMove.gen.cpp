// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Shooting_Tue/Public/EnemyMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyMove() {}
// Cross Module References
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_UEnemyMove_NoRegister();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_UEnemyMove();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CPP_Shooting_Tue();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UEnemyMove::StaticRegisterNativesUEnemyMove()
	{
	}
	UClass* Z_Construct_UClass_UEnemyMove_NoRegister()
	{
		return UEnemyMove::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Shooting_Tue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// ?\xc6\xb7??? ???? ?\xcc\xb5??\xcf\xb0? ?\xcd\xb4?.\n// ?\xca\xbf??\xd3\xbc? : ?\xcc\xb5??\xd3\xb5?\n" },
		{ "IncludePath", "EnemyMove.h" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
		{ "ToolTip", "?\xc6\xb7??? ???? ?\xcc\xb5??\xcf\xb0? ?\xcd\xb4?.\n?\xca\xbf??\xd3\xbc? : ?\xcc\xb5??\xd3\xb5?" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyMove, speed), METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::NewProp_enemy_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyMove_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyMove, enemy), Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::NewProp_enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::NewProp_enemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnemyMove.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyMove_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyMove, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyMove_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyMove_Statics::NewProp_enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyMove_Statics::NewProp_target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyMove_Statics::ClassParams = {
		&UEnemyMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyMove, 495309625);
	template<> CPP_SHOOTING_TUE_API UClass* StaticClass<UEnemyMove>()
	{
		return UEnemyMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyMove(Z_Construct_UClass_UEnemyMove, &UEnemyMove::StaticClass, TEXT("/Script/CPP_Shooting_Tue"), TEXT("UEnemyMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
