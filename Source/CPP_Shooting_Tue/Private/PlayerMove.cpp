// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMove.h"
#include "ShootPlayer.h"
#include "CPP_Shooting_TueGameModeBase.h"

// Sets default values for this component's properties
UPlayerMove::UPlayerMove()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UPlayerMove::Horizontal(float value)
{
 h = value;
}

void UPlayerMove::Vertical(float value)
{
 v = value;
}

// Called when the game starts
void UPlayerMove::BeginPlay()
{
	Super::BeginPlay();

	me = Cast<AShootPlayer>(GetOwner());
	
}


// Called every frame
void UPlayerMove::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// gamemode�� ���°� Playing�� �ƴϸ�
	
	// 2. gamemode �� �ʿ��ϴ�.
	auto gameMode = Cast<ACPP_Shooting_TueGameModeBase>(GetWorld()->GetAuthGameMode());
	bool isPlaying = gameMode->state != EGameState::Playing;

	// 1. ���ǽ��� �־�� �Ѵ�.
	if (isPlaying)
	{
		// �Ʒ� ������ ó���ϰ� ���� �ʴ�.
		return;
	}

	// ����� �Է¿� ���� �����¿�� �̵��ϰ� �ʹ�.
	// 1. ������ �ʿ��ϴ�.
	FVector dir = FVector(0,h,v);
	dir.Normalize();

	// 2. �̵��ϰ� �ʹ�.
	// P = P0 + vt
	// �� component�� �����ϰ� �ִ� ���͸� ��ȯ
	if (me)
	{
	FVector P0 = me->GetActorLocation();
	FVector P = P0 + (dir * speed * DeltaTime);
	me->SetActorLocation(P, true);
	}


}

void UPlayerMove::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
 PlayerInputComponent->BindAxis(TEXT("Horizontal"), this, &UPlayerMove::Horizontal);
 PlayerInputComponent->BindAxis(TEXT("Vertical"), this, &UPlayerMove::Vertical);
}

