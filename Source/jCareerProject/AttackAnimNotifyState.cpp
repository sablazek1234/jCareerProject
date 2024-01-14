// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackAnimNotifyState.h"
#include "AIForCharacter.h"

void UAttackAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp && MeshComp->GetOwner())
	{
		if (AAIForCharacter* const Character = Cast<AAIForCharacter>(MeshComp->GetOwner()))
		{
			Character->AttackStart();
		}
	}
}

void UAttackAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp && MeshComp->GetOwner())
	{
		if (AAIForCharacter* const Character = Cast<AAIForCharacter>(MeshComp->GetOwner()))
		{
			Character->AttackEnd();
		}
	}
}
