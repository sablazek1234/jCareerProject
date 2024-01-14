// Fill out your copyright notice in the Description page of Project Settings.


#include "AIForCharacter.h"
#include "Widget_HealthBar.h"
#include "Components/WidgetComponent.h"
#include "Components/BoxComponent.h"
#include "../../Intermediate/ProjectFiles/Consts.h"

// Sets default values
AAIForCharacter::AAIForCharacter() :
	WidgetComp{ CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBar")) },
	Health{ MaxHealth },
	RightHandHitBox{CreateDefaultSubobject<UBoxComponent>(TEXT("RightFistHitBox"))}
{
	//Set up Health Bar
	PrimaryActorTick.bCanEverTick = true;
	if (WidgetComp)
	{
		WidgetComp->SetupAttachment(RootComponent);
		WidgetComp->SetWidgetSpace(EWidgetSpace::Screen);
		WidgetComp->SetRelativeLocation(defs::HealthBarZ);
		static ConstructorHelpers::FClassFinder<UUserWidget>WidgetClass{ TEXT("/Game/UI/BP_HealthBar") };
		if (WidgetClass.Succeeded())
		{
			WidgetComp->SetWidgetClass(WidgetClass.Class);
		}
	}

	//Set up HitBox for the right hand (fist)
	if (RightHandHitBox)
	{
		RightHandHitBox->SetBoxExtent(defs::RightFistHitBoxSize, false);
		FAttachmentTransformRules const Rules{
			EAttachmentRule::SnapToTarget,
			EAttachmentRule::SnapToTarget,
			EAttachmentRule::KeepWorld,
			false };
		RightHandHitBox->AttachToComponent(GetMesh(), Rules, defs::RightFistSocketName);
		RightHandHitBox->SetRelativeLocation(defs::CollisionBoxLocation);
	}
}

// Called when the game starts or when spawned
void AAIForCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIForCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (auto const widget = Cast<UWidget_HealthBar>(WidgetComp->GetUserWidgetObject()))
	{
		widget->SetHealthValue(Health / MaxHealth);
	}

}

// Called to bind functionality to input
void AAIForCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AAIForCharacter::GetHealth() const
{
	return Health;
}

float AAIForCharacter::GetMaxHealth() const
{
	return MaxHealth;
}

void AAIForCharacter::SetHealth(float const NewHealth)
{
	Health = NewHealth;
}

