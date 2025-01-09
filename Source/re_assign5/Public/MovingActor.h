// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingActor.generated.h"

UCLASS()
class RE_ASSIGN5_API AMovingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveToRandomLocation();

private:
	FVector MinBounds = FVector(-1000.f, -1000.f, 0.f);
	FVector MaxBounds = FVector(1000.f, 1000.f, 500.f);

	FTimerHandle TimerHandle;
};
