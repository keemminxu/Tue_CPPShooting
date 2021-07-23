// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameOverUI.generated.h"

/**
 * 
 */
UCLASS()
class CPP_SHOOTING_TUE_API UGameOverUI : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void OnClick_Restart();

	UFUNCTION(BlueprintCallable)
	void OnClick_Quit();
};
