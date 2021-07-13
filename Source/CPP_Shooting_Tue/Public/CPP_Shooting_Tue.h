// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

// Log Category 추가하고싶다.
DECLARE_LOG_CATEGORY_EXTERN(Shoot, Log, All);

// #define Multiply(x,y) ((x)*(y))
// 호출하는 함수이름과 위치(줄번호) 정보 매크로
#define APPINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))

#define CALLINFO() UE_LOG(Shoot, Warning, TEXT("%s"), *APPINFO)

#define PRINTLOG(fmt, ...) UE_LOG(Shoot, Warning, TEXT("%s %s"), *APPINFO, *FString::Printf(fmt, ##__VA_ARGS__))