// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootPlayer.h"
#include "CPP_Shooting_Tue.h"
#include "PlayerMove.h"
#include "PlayerFire.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>    
#include <Components/InputComponent.h>
#include <Components/ArrowComponent.h>

// Sets default values
AShootPlayer::AShootPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// BoxCollision 컴포넌트 등록
	collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));

	// 루트컴포넌트가 되어야 한다.
	RootComponent = collision;
	collision->SetCollisionProfileName(TEXT("BlockAll"));

	// Bodymesh 컴포넌트 등록
	// Root의 자식으로 등록
	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(collision);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 동적으로 파일(에셋)을 로드하여 할당하기
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (tempMesh.Succeeded())
	{
		bodyMesh->SetStaticMesh(tempMesh.Object);
	}

	// 총구 컴포넌트 만들어서 붙이기
	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePosition"));
	firePosition->SetupAttachment(RootComponent);

	playerMove = CreateDefaultSubobject<UPlayerMove>(TEXT("PlayerMove"));
	playerFire = CreateDefaultSubobject<UPlayerFire>(TEXT("PlayerFire"));

	AutoPossessPlayer = EAutoReceiveInput::Player0;

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

	//Player Move 컴포넌트의 SetupPlayer 함수를 호출하고 싶다.
	playerMove->SetupPlayerInputComponent(PlayerInputComponent);
	playerFire->SetupPlayerInputComponent(PlayerInputComponent);
}

