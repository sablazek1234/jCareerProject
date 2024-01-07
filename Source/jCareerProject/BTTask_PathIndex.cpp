// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_PathIndex.h"
#include "Enemy.h"
#include "Enemy_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_PathIndex::UBTTask_PathIndex(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = TEXT("Path Index");
}

EBTNodeResult::Type UBTTask_PathIndex::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (auto* const Cont = Cast<AEnemy_AIController>(OwnerComp.GetAIOwner()))
	{
		if (auto const Enemy = Cast<AEnemy>(Cont->GetPawn()))
		{
			if (auto* const BC = OwnerComp.GetBlackboardComponent())
			{
				auto const NumberOfPoints = Enemy->GetPatrolPath()->Num();
				auto const MinIndex = 0;
				auto const MaxIndex = NumberOfPoints - 1;
				auto Index = BC->GetValueAsInt(GetSelectedBlackboardKey());

				// Change Direction
				if (Directions)
				{
					if (Index >= MaxIndex && Direction == DirectionType::Forward)
					{
						Direction = DirectionType::Backwards;
					}
					else if (Index >= MaxIndex && Direction == DirectionType::Backwards)
					{
						Direction = DirectionType::Forward;
					}
				}
				BC->SetValueAsInt(GetSelectedBlackboardKey(),
					(Direction == DirectionType::Forward ? ++Index : --Index) % NumberOfPoints);

				//Succeed
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}	
	}
	//Failed
	return EBTNodeResult::Failed;
}
