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

	// �ѱ���������
	// 1. ShootPlayer �� �־�� �Ѵ�.
	// �� ������Ʈ�� �����ϰ� �ִ� ���͸� ��ȯ
	me = Cast<AShootPlayer>(GetOwner());

	// 2. ShootPlayer ��ü�� �ִ� �ѱ��� �������� �ʹ�.
	auto fp = Cast<UArrowComponent>(me->GetDefaultSubobjectByName(TEXT("FirePosition")));

	// 3. �ѱ��� �� �Ӽ������� firePostion�� �Ҵ��ϰ� �ʹ�.
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
	// 1. �Ѿ��� �ʿ�
	auto bullet = GetWorld()->SpawnActor<ABullet>(bulletFactory);

	// 2. �Ѿ��� ��ġ
	if (bullet)
	{
		bullet->SetActorLocation(firePosition->GetComponentLocation());
		bullet->SetActorRotation(firePosition->GetComponentRotation());
	}

	// �Ѿ� ���� ���
	UGameplayStatics::PlaySound2D(GetWorld(), bulletSound);
}