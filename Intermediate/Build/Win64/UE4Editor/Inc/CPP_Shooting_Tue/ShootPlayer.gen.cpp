// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Shooting_Tue/Public/ShootPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootPlayer() {}
// Cross Module References
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_AShootPlayer_NoRegister();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_AShootPlayer();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CPP_Shooting_Tue();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_UPlayerMove_NoRegister();
	CPP_SHOOTING_TUE_API UClass* Z_Construct_UClass_UPlayerFire_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShootPlayer::StaticRegisterNativesAShootPlayer()
	{
	}
	UClass* Z_Construct_UClass_AShootPlayer_NoRegister()
	{
		return AShootPlayer::StaticClass();
	}
	struct Z_Construct_UClass_AShootPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_firePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bodyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Shooting_Tue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShootPlayer.h" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove_MetaData[] = {
		{ "Category", "Player Move" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove = { "playerMove", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, playerMove), Z_Construct_UClass_UPlayerMove_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerFire_MetaData[] = {
		{ "Category", "Player Fire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerFire = { "playerFire", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, playerFire), Z_Construct_UClass_UPlayerFire_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_firePosition_MetaData[] = {
		{ "Category", "FirePosition" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_firePosition = { "firePosition", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, firePosition), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_firePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_firePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_collision_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_collision = { "collision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_collision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh_MetaData[] = {
		{ "Category", "Body Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ShootPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh = { "bodyMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootPlayer, bodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_playerFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_firePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_collision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootPlayer_Statics::NewProp_bodyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootPlayer_Statics::ClassParams = {
		&AShootPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootPlayer, 2157645430);
	template<> CPP_SHOOTING_TUE_API UClass* StaticClass<AShootPlayer>()
	{
		return AShootPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootPlayer(Z_Construct_UClass_AShootPlayer, &AShootPlayer::StaticClass, TEXT("/Script/CPP_Shooting_Tue"), TEXT("AShootPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
