// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor.h"
#include "Math/UnrealMathUtility.h"
//#include "TimerManager.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	FVector StartLocation(0.0f, 0.0f, 0.0f);
	SetActorLocation(StartLocation);
	//ù ��ġ (0,0,0)���� ����

	//GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AMovingActor::MoveToRandomLocation, 3.0f, true);
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//MoveToRandomLocation();

	//���� ��ġ �α׷� ���
	FVector CurrentLocation = GetActorLocation();
	UE_LOG(LogTemp, Display, TEXT("Current Location : %s", *CurrentLocation.ToString()));
}

void AMovingActor::MoveToRandomLocation()
{
	// ���� ��ġ ����
	float RandomX = FMath::RandRange(MinBounds.X, MaxBounds.X);
	float RandomY = FMath::RandRange(MinBounds.Y, MaxBounds.Y);
	float RandomZ = FMath::RandRange(MinBounds.Z, MaxBounds.Z);
	FVector RandomLocation(RandomX, RandomY, RandomZ);

	// ��ġ ����
	SetActorLocation(RandomLocation);
	
}