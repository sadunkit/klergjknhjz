// Fill out your copyright notice in the Description page of Project Settings.

#include "EncounterBase.h"

// Sets default values
AEncounterBase::AEncounterBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
}

// Called when the game starts or when spawned
void AEncounterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEncounterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector AEncounterBase::GetSubjectsLocation(FVector Direction)
{
	return (GetActorLocation() + Direction) * SubjectOffsetLength;
}

void AEncounterBase::TriggerEncounter_Implementation()
{
}

