// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

// Log Category �߰��ϰ��ʹ�.
DECLARE_LOG_CATEGORY_EXTERN(Shoot, Log, All);

// #define Multiply(x,y) ((x)*(y))
// ȣ���ϴ� �Լ��̸��� ��ġ(�ٹ�ȣ) ���� ��ũ��
#define APPINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))

#define CALLINFO() UE_LOG(Shoot, Warning, TEXT("%s"), *APPINFO)

#define PRINTLOG(fmt, ...) UE_LOG(Shoot, Warning, TEXT("%s %s"), *APPINFO, *FString::Printf(fmt, ##__VA_ARGS__))