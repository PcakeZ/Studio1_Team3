// Fill out your copyright notice in the Description page of Project Settings.



#include "Components/BoxComponent.h"
#include "EngineMinimal.h"
#include "MyTriggerBox.h"

// Sets default values
AMyTriggerBox::AMyTriggerBox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32.f, 32.f, 32.f));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapBegin);
	CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapEnd);
}

void AMyTriggerBox::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Begin"));

}

void AMyTriggerBox::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("End"));
}

// Called when the game starts or when spawned
void AMyTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	// get player character
	CollisionCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	BossCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), BossCharacter_01);
	
}

// Called every frame
void AMyTriggerBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyTriggerBox::TriggerOperator()
{
	for (AActor* TriggerObject : BossCharacter_01)
	{

	}
}
