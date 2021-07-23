// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>        

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
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
	
	// 위로 이동하고 싶다.
	// P = P0 + vt
	FVector v = FVector::UpVector * speed;
	FVector P = GetActorLocation() + v * DeltaTime;

	SetActorLocation(P, true);


}

