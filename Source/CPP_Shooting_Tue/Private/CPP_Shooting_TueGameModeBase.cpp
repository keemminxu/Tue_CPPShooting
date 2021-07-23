// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPP_Shooting_TueGameModeBase.h"
#include <Components/BoxComponent.h>
#include "CPP_Shooting_Tue.h"
#include <Blueprint/UserWidget.h>
#include <Kismet/GameplayStatics.h>

ACPP_Shooting_TueGameModeBase::ACPP_Shooting_TueGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACPP_Shooting_TueGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void ACPP_Shooting_TueGameModeBase::InitGameState()
{
	Super::InitGameState();
	
	// UI 생성
	if (readyUI == nullptr)
	{
		readyUI = CreateWidget<UUserWidget>(GetWorld(), readyUIFactory);
	}
	if (startUI == nullptr)
	{
		startUI = CreateWidget<UUserWidget>(GetWorld(), startUIFactory);
	}
	if (overUI == nullptr)
	{
		overUI = CreateWidget<UUserWidget>(GetWorld(), overUIFactory);
	}

	// UI를 화면에 띄우기
	if (readyUI)
	{
		readyUI->AddToViewport();
	}
	
	// 상태를 ready로 설정해주기
	state = EGameState::Ready;
}

void ACPP_Shooting_TueGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// 현재 상태를 콘솔에 출력해보자
	//UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EGameState"), true);
	//if (enumPtr)
	//{
	//	// 콘솔에 출력
	//	PRINTLOG(TEXT("%s"), *enumPtr->GetNameStringByValue(uint8(state)));
	//}

	// framework 설계
	// 목차작성
	switch (state)
	{
	case EGameState::Ready:
		Ready();
		break;
	case EGameState::Playing:
		Playing();
		break;
	case EGameState::Gameover:
		Gameover();
		break;
	default:
		break;
	}
}

void ACPP_Shooting_TueGameModeBase::OnGameoverProcess()
{
	// 상태를 gameover로 전환하고 UI 를 띄우고싶다.

	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;

	UGameplayStatics::SetGamePaused(GetWorld(), true);

	state = EGameState::Gameover;
	overUI->AddToViewport();
}

// 본문 함수들로 구성
// 일정 시간이 지나면 상태를 Playing으로 전환하고 싶다.
// 필요 속성 : 
void ACPP_Shooting_TueGameModeBase::Ready()
{
	// 일정 시간이 지나면 상태를 Playing으로 전환하고 싶다.
	// 1. 상태를 Playing으로 전환하고 싶다.
	currentTime += GetWorld()->DeltaTimeSeconds;
	// 2. 일정시간 (대기시간)이 됐으니까
	// 	   만약 경과시간이 대기시간을 초과하였다면
	if (currentTime > readyDelayTime)
	{
		// 3. 상태를 Playing으로 전환하고 싶다.
		state = EGameState::Playing;
		
		readyUI->RemoveFromViewport();

		startUI->AddToViewport();
		
		currentTime = 0;
	}
}

void ACPP_Shooting_TueGameModeBase::Playing()
{
	// 일정 시간이 지나면 start UI 안보이게 하자
	
	// 1. 시간이 흘렀으니까
	currentTime +=GetWorld()->DeltaTimeSeconds;

	// start ui가 화면에 보이고
	// 2. 일정 시간이 됐으니까
	if (startUI->IsInViewport() && currentTime > playingUITime)
	{
		// 3. 안보이고싶음
		startUI->RemoveFromViewport();
		currentTime = 0;
	}


}

void ACPP_Shooting_TueGameModeBase::Gameover()
{

}



