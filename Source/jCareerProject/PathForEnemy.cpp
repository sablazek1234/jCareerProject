// Fill out your copyright notice in the Description page of Project Settings.


#include "PathForEnemy.h"

// Sets default values
APathForEnemy::APathForEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

FVector APathForEnemy::GetPatrolPoint(int const index) const
{
	return PathPoints[index];
}

int APathForEnemy::Num() const
{
	return PathPoints.Num();
}



