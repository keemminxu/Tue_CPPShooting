// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOverUI.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/GameplayStatics.h>
#include "CPP_Shooting_TueGameModeBase.h"

void UGameOverUI::OnClick_Restart()
{
	// 레벨 다시로드
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("ShootingMap"));
	// gameover UI 제거
	auto gamemode = Cast<ACPP_Shooting_TueGameModeBase>(GetWorld()->GetAuthGameMode());
	if (gamemode)
	{
	gamemode->overUI->RemoveFromViewport();
	}
}

void UGameOverUI::OnClick_Quit()
{
	// 어플 종료
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, true);
}
