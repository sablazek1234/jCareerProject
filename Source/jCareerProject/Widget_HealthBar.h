// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Widget_HealthBar.generated.h"

/**
 * 
 */
UCLASS()
class JCAREERPROJECT_API UWidget_HealthBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	void SetHealthValue(float const value);

private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	UProgressBar* HealthBar = nullptr;
};
