// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HealingStation.generated.h"

UCLASS()
class MONSTERCOMING_API AHealingStation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHealingStation();

	UFUNCTION(BlueprintCallable, Category = "Healing")
	void TestPlayerDistance();

	UPROPERTY(BlueprintReadWrite, Category = "Healing")
	float healingRange{ 100 };

	UPROPERTY(BlueprintReadWrite, Category = "Healing")
	float healthPerSecond{ 10 };

	UPROPERTY(BlueprintReadWrite, Category = "Healing")
	float currentHealing{ 100 };

	UPROPERTY(BlueprintReadWrite, Category = "Healing")
	float maxHealing{ 100 };

	UPROPERTY(BlueprintReadOnly, Category = "Healing")
	bool inRange{ false };

	UPROPERTY(BlueprintReadOnly, Category = "Healing")
	float currentDistance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
