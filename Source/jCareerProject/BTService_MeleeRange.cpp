// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_MeleeRange.h"
#include "Enemy_AIController.h"
#include "Enemy.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_MeleeRange::UBTService_MeleeRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("In Melee Range?");
}

void UBTService_MeleeRange::OnBecomeRelavant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Get Enemy and Enemy Controller
	auto const* const cont = Cast<AEnemy_AIController>(OwnerComp.GetAIOwner());
	auto const* const Enemy = Cast<AEnemy>(cont->GetPawn());

	//Get Character
	auto const* const Player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	//Set Bool for whether the character is in melee range or not
	OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(),
		Enemy->GetDistanceTo(Player) <= MeleeRange);
}
