// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ShootPlayer.generated.h"

UCLASS()
class CPP_SHOOTING_TUE_API AShootPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShootPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = "Player Move")
	class UPlayerMove* playerMove;

	UPROPERTY(VisibleAnywhere, Category = "Player Fire")
	class UPlayerFire* playerFire;

	UPROPERTY(VisibleAnywhere, Category = "FirePosition")
	class UArrowComponent* firePosition;

	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class UBoxComponent* collision;

	UPROPERTY(VisibleAnywhere, Category = "Body Mesh")
	class UStaticMeshComponent* bodyMesh;

};
