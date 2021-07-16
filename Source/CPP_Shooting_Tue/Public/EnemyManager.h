// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyManager.generated.h"

UCLASS()
class CPP_SHOOTING_TUE_API AEnemyManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 적 공장, 생성시간, 경과시간
	UPROPERTY(EditDefaultsOnly, Category = "EnemyFactory")
	TSubclassOf<class AEnemy> enemyFactory;

	UPROPERTY(EditAnywhere, Category="CreateTime")
	float createTime = 2;

	UPROPERTY()
	float currentTime = 0;
};
