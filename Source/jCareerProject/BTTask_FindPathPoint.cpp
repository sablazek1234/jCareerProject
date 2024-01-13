// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindPathPoint.h"
#include "Enemy.h"
#include "Enemy_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_FindPathPoint::UBTTask_FindPathPoint(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase{ ObjectInitializer }
{
	NodeName = TEXT("Find Path");
}

EBTNodeResult::Type UBTTask_FindPathPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Get Enemy Controller
	if (auto* const cont = Cast<AEnemy_AIController>(OwnerComp.GetAIOwner()))
	{
		//Get BlackBoard Comp
		if (auto* const BC = OwnerComp.GetBlackboardComponent())
		{
			auto const Index = BC->GetValueAsInt(GetSelectedBlackboardKey());

			if (auto* Enemy = Cast<AEnemy>(cont->GetPawn()))
			{
				auto const PointPath = Enemy->GetPatrolPath()->GetPatrolPoint(Index);

				auto const GlobalPath = Enemy->GetPatrolPath()->GetActorTransform().TransformPosition(PointPath);
				BC->SetValueAsVector(PatrolPathKey.SelectedKeyName, GlobalPath);

				//Succeed
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	//Failed
	return EBTNodeResult::Failed;
}
