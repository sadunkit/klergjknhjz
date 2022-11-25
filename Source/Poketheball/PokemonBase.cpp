// Fill out your copyright notice in the Description page of Project Settings.


#include "PokemonBase.h"


// Sets default values
APokemonBase::APokemonBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

// Called when the game starts or when spawned
void APokemonBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APokemonBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

