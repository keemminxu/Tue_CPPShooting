// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyMove.h"
#include "Enemy.h"
#include "ShootPlayer.h"
#include <Kismet/GameplayStatics.h>
#include "CPP_Shooting_TueGameModeBase.h"

// Sets default values for this component's properties
UEnemyMove::UEnemyMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEnemyMove::BeginPlay()
{
	Super::BeginPlay();

	enemy = Cast<AEnemy>(GetOwner());

	// Ÿ�� ã�ƿ���
	target = UGameplayStatics::GetActorOfClass(GetWorld(), AShootPlayer::StaticClass());

	// �¾�� �ѹ� ������ ���ϰ� �� �������� ��� �̵��ϰ� �ʹ�.
	// �������� ���� �ϳ� �̾Ƽ� 50 ���ϸ� �Ʒ��� �׷��� ������ Ÿ�� ������

	int32 ratio = FMath::RandRange(1, 100);

	dir = FVector::DownVector * speed;

	if (target && ratio > 50)
	{
		dir = target->GetActorLocation() - enemy->GetActorLocation();
		dir.Normalize();
		dir *= speed;
	}

}


// Called every frame
void UEnemyMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	auto gameMode = Cast<ACPP_Shooting_TueGameModeBase>(GetWorld()->GetAuthGameMode());
	bool isPlaying = gameMode->state != EGameState::Playing;

	// 1. ���ǽ��� �־�� �Ѵ�.
	if (isPlaying)
	{
		// �Ʒ� ������ ó���ϰ� ���� �ʴ�.
		return;
	}
	// 2. �̵��ϰ� �ʹ�.
	// P = P0 + vt
	FVector P = enemy->GetActorLocation() + dir*DeltaTime;
	enemy->SetActorLocation(P, true);
	}
	

