// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once // 중복되지않게 하나만 하겠다.

#include "CoreMinimal.h" // 사용할 헤더파일을 붙여주는것. (여러가지 사용정보)
#include "GameFramework/GameModeBase.h" // 게임모드베이스 부모를 상속받아서 만들어진것.(AGame Mode base 헤더파일)
#include "CPP_Shooting_TueGameModeBase.generated.h" // 자동으로 생성되는 헤더파일 (클래스에 대한 각종 정보를 내부에다 저장시킴)

/**
 * 
 */
UCLASS()
class CPP_SHOOTING_TUE_API ACPP_Shooting_TueGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ACPP_Shooting_TueGameModeBase(); // 선언부 

};
