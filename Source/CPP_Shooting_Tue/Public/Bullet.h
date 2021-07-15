// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class CPP_SHOOTING_TUE_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// 필요속성 : 이동속도
	UPROPERTY(EditAnywhere, Category = "Setting")
	float speed = 1000;

	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class UBoxComponent* collision;

	UPROPERTY(VisibleAnywhere, Category = "Body Mesh")
	class UStaticMeshComponent* bodyMesh;

};

