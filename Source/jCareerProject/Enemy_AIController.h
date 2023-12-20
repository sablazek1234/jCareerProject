// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "Enemy_AIController.generated.h"

/**
 * 
 */
UCLASS()
class JCAREERPROJECT_API AEnemy_AIController : public AAIController
{
	GENERATED_BODY()

public:
	explicit AEnemy_AIController(FObjectInitializer const& ObjectInitializer);

protected:
	virtual void OnPossess(APawn* InPawn) override;

private:
	class UAISenseConfig_Sight* SightConfig;

	void SetupPerceptionSystem();

	void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);
};
