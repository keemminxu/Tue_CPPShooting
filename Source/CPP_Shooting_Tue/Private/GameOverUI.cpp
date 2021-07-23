// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOverUI.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/GameplayStatics.h>
#include "CPP_Shooting_TueGameModeBase.h"

void UGameOverUI::OnClick_Restart()
{
	// ���� �ٽ÷ε�
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("ShootingMap"));
	// gameover UI ����
	auto gamemode = Cast<ACPP_Shooting_TueGameModeBase>(GetWorld()->GetAuthGameMode());
	if (gamemode)
	{
	gamemode->overUI->RemoveFromViewport();
	}
}

void UGameOverUI::OnClick_Quit()
{
	// ���� ����
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, true);
}
