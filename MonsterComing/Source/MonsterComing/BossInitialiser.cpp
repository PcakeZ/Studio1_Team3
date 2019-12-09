// Fill out your copyright notice in the Description page of Project Settings.


#include "BossInitialiser.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"

// Sets default values
ABossInitialiser::ABossInitialiser()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ABossInitialiser::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ABossInitialiser::OnOverlapEnd);
}

void ABossInitialiser::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, "Begin");

}

void ABossInitialiser::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, "End");
}

// Called when the game starts or when spawned
void ABossInitialiser::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABossInitialiser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



