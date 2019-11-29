// Fill out your copyright notice in the Description page of Project Settings.


#include "HealingStation.h"

// Sets default values
AHealingStation::AHealingStation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHealingStation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHealingStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

