// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class PROJECT1_IN_UE5_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere)
	int32 MyInt = 99;

	UPROPERTY(EditAnywhere)
	int32 inputIntA = 0;

	UPROPERTY(EditAnywhere)
	int32 inputIntB = 0;

	UPROPERTY(EditAnywhere)
	int32 APlusBInput = 0;

	UPROPERTY(EditAnywhere)
	float myFloat = 24.56;

	UPROPERTY(EditAnywhere)
	float inputFloatA = 0;

	UPROPERTY(EditAnywhere)
	float inputFloatB = 0;

	UPROPERTY(EditAnywhere)
	float APlusBFloat = 0;

	UPROPERTY(EditAnywhere)
	bool myBool = true;
};
