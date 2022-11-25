// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EncounterBase.generated.h"

UCLASS()
class POKETHEBALL_API AEncounterBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEncounterBase();
	
	UPROPERTY(EditAnywhere)
	float SubjectOffsetLength = 400.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent)
	void TriggerEncounter();


	UFUNCTION(BlueprintCallable)
	FVector GetSubjectsLocation(FVector Direction);
};
