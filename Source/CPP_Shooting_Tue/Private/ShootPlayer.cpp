// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootPlayer.h"
#include "CPP_Shooting_Tue.h"
#include "PlayerMove.h"
#include <Components/InputComponent.h>

// Sets default values
AShootPlayer::AShootPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	playerMove = CreateDefaultSubobject<UPlayerMove>(TEXT("player move"));
}

// Called when the game starts or when spawned
void AShootPlayer::BeginPlay()
{
	Super::BeginPlay();

	PRINTLOG (TEXT("%s"), TEXT("Hello World"));
	
}

// Called every frame
void AShootPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShootPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Player Move ������Ʈ�� SetupPlayer �Լ��� ȣ���ϰ� �ʹ�.
	playerMove->SetupPlayerInputComponent(PlayerInputComponent);
}

