// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once // �ߺ������ʰ� �ϳ��� �ϰڴ�.

#include "CoreMinimal.h" // ����� ��������� �ٿ��ִ°�. (�������� �������)
#include "GameFramework/GameModeBase.h" // ���Ӹ�庣�̽� �θ� ��ӹ޾Ƽ� ���������.(AGame Mode base �������)
#include "CPP_Shooting_TueGameModeBase.generated.h" // �ڵ����� �����Ǵ� ������� (Ŭ������ ���� ���� ������ ���ο��� �����Ŵ)


// ������
// -> Ư���� �������� ���ڷ� �ǹ̸� �ο��Ͽ� ���� ����� �ڷ���
UENUM(BlueprintType)
enum class EGameState : uint8
{
	Ready UMETA(DisplayName = "READY STATE"),
	Playing UMETA(DisplayName = "PLAYING STATE"),
	Gameover UMETA(DisplayName = "GAMEOVER STATE")
};

UCLASS()
class CPP_SHOOTING_TUE_API ACPP_Shooting_TueGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ACPP_Shooting_TueGameModeBase(); // ����� 

	virtual void BeginPlay() override;

	virtual void InitGameState() override;

	virtual void Tick(float DeltaSeconds) override;

	// �׿��� ������ ó���� �Լ�
	void OnGameoverProcess();
	
	UPROPERTY(EditAnywhere, Category="FSM", BlueprintReadWrite)
	EGameState state = EGameState::Ready;

	UPROPERTY(EditAnywhere, Category="FSM")
	float readyDelayTime = 2;

	UPROPERTY()
	float currentTime = 0;

	// ReadyUI ����
	UPROPERTY(EditDefaultsOnly, Category="UI")
	TSubclassOf<class UUserWidget> readyUIFactory;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UUserWidget> startUIFactory;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
		TSubclassOf<class UUserWidget> overUIFactory;

	// readyUI �ν��Ͻ� ĳ��
	UPROPERTY()
	class UUserWidget* readyUI;

	UPROPERTY()
	class UUserWidget* startUI;

	UPROPERTY()
	class UUserWidget* overUI;

	UPROPERTY(EditDefaultsOnly, Category="UI")
	float playingUITime = 1;


private:
	void Gameover();
	void Playing();
	void Ready();
};
