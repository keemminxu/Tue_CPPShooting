// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once // 중복되지않게 하나만 하겠다.

#include "CoreMinimal.h" // 사용할 헤더파일을 붙여주는것. (여러가지 사용정보)
#include "GameFramework/GameModeBase.h" // 게임모드베이스 부모를 상속받아서 만들어진것.(AGame Mode base 헤더파일)
#include "CPP_Shooting_TueGameModeBase.generated.h" // 자동으로 생성되는 헤더파일 (클래스에 대한 각종 정보를 내부에다 저장시킴)


// 열거형
// -> 특정한 숫자한테 문자로 의미를 부여하여 만든 사용자 자료형
UENUM(BlueprintType)
enum class EGameState : uint8
{
	Ready UMETA(DisplayName = "READY STATE"),
	Playing UMETA(DisplayName = "PLAYING STATE"),
	Gameover UMETA(DisplayName = "GAMEOVER STATE")
};

UCLASS()
class CPP_SHOOTING_TUE_API ACPP_Shooting_TueGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ACPP_Shooting_TueGameModeBase(); // 선언부 

	virtual void BeginPlay() override;

	virtual void InitGameState() override;

	virtual void Tick(float DeltaSeconds) override;

	// 겜오버 됐을때 처리할 함수
	void OnGameoverProcess();
	
	UPROPERTY(EditAnywhere, Category="FSM", BlueprintReadWrite)
	EGameState state = EGameState::Ready;

	UPROPERTY(EditAnywhere, Category="FSM")
	float readyDelayTime = 2;

	UPROPERTY()
	float currentTime = 0;

	// ReadyUI 공장
	UPROPERTY(EditDefaultsOnly, Category="UI")
	TSubclassOf<class UUserWidget> readyUIFactory;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UUserWidget> startUIFactory;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<class UUserWidget> overUIFactory;

	// readyUI 인스턴스 캐싱
	UPROPERTY()
	class UUserWidget* readyUI;

	UPROPERTY()
	class UUserWidget* startUI;

	UPROPERTY()
	class UUserWidget* overUI;

	UPROPERTY(EditDefaultsOnly, Category="UI")
	float playingUITime = 1;


private:
	void Gameover();
	void Playing();
	void Ready();
};
