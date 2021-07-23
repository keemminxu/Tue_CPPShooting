// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>        

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
	SetLifeSpan(3);
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// ���� �̵��ϰ� �ʹ�.
	// P = P0 + vt
	FVector v = FVector::UpVector * speed;
	FVector P = GetActorLocation() + v * DeltaTime;

	SetActorLocation(P, true);


}

