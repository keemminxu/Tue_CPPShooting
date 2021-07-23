// Fill out your copyright notice in the Description page of Project Settings.


#include "DestroyZone.h"
#include <Components/BoxComponent.h>
#include "ShootPlayer.h"

// Sets default values
ADestroyZone::ADestroyZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = collision;

	// profile 설정
	collision->SetCollisionProfileName(TEXT("DestroyZone"));
}

// Called when the game starts or when spawned
void ADestroyZone::BeginPlay()
{
	Super::BeginPlay();
	
	collision->OnComponentHit.AddDynamic(this, &ADestroyZone::OnCollisionEnter);
	
	
}

// Called every frame
void ADestroyZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADestroyZone::OnCollisionEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	

	// 부딪힌 녀석이 player라면 아래 내용은 처리하지 않는다
	auto player = Cast<AShootPlayer>(OtherActor);
	if (player)
	{
		return;
	}

	OtherActor->Destroy();
}

