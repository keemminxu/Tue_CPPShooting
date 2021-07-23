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
	
	// UI ����
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

	// UI�� ȭ�鿡 ����
	if (readyUI)
	{
		readyUI->AddToViewport();
	}
	
	// ���¸� ready�� �������ֱ�
	state = EGameState::Ready;
}

void ACPP_Shooting_TueGameModeBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// ���� ���¸� �ֿܼ� ����غ���
	//UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, TEXT("EGameState"), true);
	//if (enumPtr)
	//{
	//	// �ֿܼ� ���
	//	PRINTLOG(TEXT("%s"), *enumPtr->GetNameStringByValue(uint8(state)));
	//}

	// framework ����
	// �����ۼ�
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
	// ���¸� gameover�� ��ȯ�ϰ� UI �� ����ʹ�.

	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;

	UGameplayStatics::SetGamePaused(GetWorld(), true);

	state = EGameState::Gameover;
	overUI->AddToViewport();
}

// ���� �Լ���� ����
// ���� �ð��� ������ ���¸� Playing���� ��ȯ�ϰ� �ʹ�.
// �ʿ� �Ӽ� : 
void ACPP_Shooting_TueGameModeBase::Ready()
{
	// ���� �ð��� ������ ���¸� Playing���� ��ȯ�ϰ� �ʹ�.
	// 1. ���¸� Playing���� ��ȯ�ϰ� �ʹ�.
	currentTime += GetWorld()->DeltaTimeSeconds;
	// 2. �����ð� (���ð�)�� �����ϱ�
	// 	   ���� ����ð��� ���ð��� �ʰ��Ͽ��ٸ�
	if (currentTime > readyDelayTime)
	{
		// 3. ���¸� Playing���� ��ȯ�ϰ� �ʹ�.
		state = EGameState::Playing;
		
		readyUI->RemoveFromViewport();

		startUI->AddToViewport();
		
		currentTime = 0;
	}
}

void ACPP_Shooting_TueGameModeBase::Playing()
{
	// ���� �ð��� ������ start UI �Ⱥ��̰� ����
	
	// 1. �ð��� �귶���ϱ�
	currentTime +=GetWorld()->DeltaTimeSeconds;

	// start ui�� ȭ�鿡 ���̰�
	// 2. ���� �ð��� �����ϱ�
	if (startUI->IsInViewport() && currentTime > playingUITime)
	{
		// 3. �Ⱥ��̰����
		startUI->RemoveFromViewport();
		currentTime = 0;
	}


}

void ACPP_Shooting_TueGameModeBase::Gameover()
{

}



