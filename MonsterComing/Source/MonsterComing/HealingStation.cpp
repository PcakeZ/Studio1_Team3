// Fill out your copyright notice in the Description page of Project Settings.


#include "HealingStation.h"
#include "Engine.h"
//#include "World.h"
#include "Math/Vector.h"
#include "GameFramework/Actor.h"

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
	currentHealing = maxHealing;
}

// Called every frame
void AHealingStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHealingStation::TestPlayerDistance()
{
	APlayerController* const playerController = GetWorld()->GetFirstPlayerController();
	currentDistance = 999;
	if (playerController)
	{
		FVector V1 = GetActorLocation();
		FVector V2 = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

		
		//float Dist(FVector V1, FVector V2);
		float Dist = FVector::DistSquared(V1, V2);
		currentDistance = Dist;
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, Dist);

		
		if (Dist < healingRange)
		{
			inRange = true;
		}
		else 
		{
			inRange = false;
		}
		
	}
}

