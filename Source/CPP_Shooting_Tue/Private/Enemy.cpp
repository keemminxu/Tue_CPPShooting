// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Components/ArrowComponent.h>
#include "EnemyMove.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AEnemy::AEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Collision ������Ʈ ���
	collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	// ��Ʈ������Ʈ ���
	RootComponent = collision;
	collision->SetCollisionProfileName(TEXT("OverlapAll"));

	// �浹�� �߻� ���� �� ó���� �Լ� ���ε��ϱ�
	collision->OnComponentBeginOverlap.AddDynamic(this,&AEnemy::OnTriggerEnter);

	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(RootComponent);
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePosition"));
	firePosition->SetupAttachment(RootComponent);

	enemyMove = CreateDefaultSubobject<UEnemyMove>(TEXT("EnemyMove"));
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::OnTriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// ���� �ε��� �༮�� Enemy���
	// if (OtherActor->GetName().Contains(TEXT("Enemy")))
	//auto enemy = Cast<AEnemy>(OtherActor);
	//if(enemy)
	//{
	//	// ó������ �ʰڴ�.
	//	return;
	//}

	// ����ȿ�� ���
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionFactory, GetTransform());

	// ���� ���� ���
	UGameplayStatics::PlaySound2D(GetWorld(), explosionSound);

	// �ʵ� �װ�
	OtherActor->Destroy();

	//���� ����
	Destroy();
}

