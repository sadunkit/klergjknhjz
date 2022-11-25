// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "EncounterTrigger.generated.h"

/**
 * 
 */
UCLASS()
class POKETHEBALL_API AEncounterTrigger : public ATriggerBox
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Encounter")
	TObjectPtr<class AEncounterBase> EncounterToTrigger;
};
