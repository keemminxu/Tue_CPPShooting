// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerFire.h"
#include "Bullet.h"
#include "ShootPlayer.h"
#include <Components/ArrowComponent.h>
#include <Kismet/GameplayStatics.h>


// Sets default values for this component's properties
UPlayerFire::UPlayerFire()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerFire::BeginPlay()
{
	Super::BeginPlay();

	// 총구가져오기
	// 1. ShootPlayer 가 있어야 한다.
	// 이 컴포넌트를 소유하고 있는 엑터를 반환
	me = Cast<AShootPlayer>(GetOwner());

	// 2. ShootPlayer 객체에 있는 총구를 가져오고 싶다.
	auto fp = Cast<UArrowComponent>(me->GetDefaultSubobjectByName(TEXT("FirePosition")));

	// 3. 총구를 내 속성변수인 firePostion에 할당하고 싶다.
	firePosition = Cast<UArrowComponent>(fp);
}


// Called every frame
void UPlayerFire::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerFire::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &UPlayerFire::Fire);
}

void UPlayerFire::Fire()
{
	// 1. 총알이 필요
	auto bullet = GetWorld()->SpawnActor<ABullet>(bulletFactory);

	// 2. 총알을 배치
	if (bullet)
	{
		bullet->SetActorLocation(firePosition->GetComponentLocation());
		bullet->SetActorRotation(firePosition->GetComponentRotation());
	}

	// 총알 사운드 재생
	UGameplayStatics::PlaySound2D(GetWorld(), bulletSound);
}