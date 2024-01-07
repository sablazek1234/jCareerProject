// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_ConfigureSpeed.h"
#include "AIController.h"
#include "Enemy.h"
#include "GameFramework/CharacterMovementComponent.h"

UBTService_ConfigureSpeed::UBTService_ConfigureSpeed()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Configure Speed");
}

void UBTService_ConfigureSpeed::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (auto const cont = OwnerComp.GetAIOwner())
	{
		if (auto const* Enemy = Cast<AEnemy>(cont->GetPawn()))
		{
			Enemy->GetCharacterMovement()->MaxWalkSpeed = speed;
		}
	}
}
