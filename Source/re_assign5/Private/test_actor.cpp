// Fill out your copyright notice in the Description page of Project Settings.


#include "test_actor.h"

// Sets default values
Atest_actor::Atest_actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Atest_actor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello World"));
}

// Called every frame
void Atest_actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

