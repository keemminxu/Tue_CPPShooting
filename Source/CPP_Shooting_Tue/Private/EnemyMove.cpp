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

	// 타겟 찾아오기
	target = UGameplayStatics::GetActorOfClass(GetWorld(), AShootPlayer::StaticClass());

	// 태어날때 한번 방향을 구하고 그 방향으로 계속 이동하고 싶다.
	// 랜덤으로 숫자 하나 뽑아서 50 이하면 아래로 그렇지 않으면 타겟 쪽으로

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

	// 1. 조건식이 있어야 한다.
	if (isPlaying)
	{
		// 아래 내용은 처리하고 싶지 않다.
		return;
	}
	// 2. 이동하고 싶다.
	// P = P0 + vt
	FVector P = enemy->GetActorLocation() + dir*DeltaTime;
	enemy->SetActorLocation(P, true);
	}
	

