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
	
	// BoxCollision ������Ʈ ���
	collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));

	// ��Ʈ������Ʈ�� �Ǿ�� �Ѵ�.
	RootComponent = collision;
	collision->SetCollisionProfileName(TEXT("BlockAll"));

	// Bodymesh ������Ʈ ���
	// Root�� �ڽ����� ���
	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(collision);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// �������� ����(����)�� �ε��Ͽ� �Ҵ��ϱ�
	ConstructorHelpers::FObjectFinder<UStaticMesh>tempMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (tempMesh.Succeeded())
	{
		bodyMesh->SetStaticMesh(tempMesh.Object);
	}

	// �ѱ� ������Ʈ ���� ���̱�
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

	//Player Move ������Ʈ�� SetupPlayer �Լ��� ȣ���ϰ� �ʹ�.
	playerMove->SetupPlayerInputComponent(PlayerInputComponent);
	playerFire->SetupPlayerInputComponent(PlayerInputComponent);
}

