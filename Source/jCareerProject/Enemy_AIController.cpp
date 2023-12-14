// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_AIController.h"
#include "Enemy.h"

AEnemy_AIController::AEnemy_AIController(FObjectInitializer const& ObjectInitializer)
{
}

void AEnemy_AIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (AEnemy* const Enemy = Cast<AEnemy>(InPawn))
	{
		if (UBehaviorTree* const tree = Enemy->GetBehaviorTree())
		{
			UBlackboardComponent* bb;
			UseBlackboard(tree->BlackboardAsset, bb);
			Blackboard = bb;
			RunBehaviorTree(tree);
		}
	}
}