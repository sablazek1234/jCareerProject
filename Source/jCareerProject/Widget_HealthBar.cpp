// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget_HealthBar.h"

void UWidget_HealthBar::NativeConstruct()
{
	Super::NativeConstruct();
}

void UWidget_HealthBar::SetHealthValue(float const value)
{
	HealthBar->SetPercent(value);
}
