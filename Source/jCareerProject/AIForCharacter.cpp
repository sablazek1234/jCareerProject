// Fill out your copyright notice in the Description page of Project Settings.


#include "AIForCharacter.h"
#include "Enemy.h"
#include "jCareerProjectCharacter.h"
#include "Widget_HealthBar.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"
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
	if (RightHandHitBox)
	{
		RightHandHitBox->OnComponentBeginOverlap.AddDynamic(this, &AAIForCharacter::OnAttackOverlapStart);
		RightHandHitBox->OnComponentEndOverlap.AddDynamic(this, &AAIForCharacter::OnAttackOverlapEnd);
	}
	Super::BeginPlay();
}

void AAIForCharacter::OnAttackOverlapStart(
	UPrimitiveComponent* const OverlappedComp, 
	AActor* const OtherActor, 
	UPrimitiveComponent* const OtherComp, 
	int const OtherBodyIndex, 
	bool const FromPunch, 
	FHitResult const& PunchResult)
{
	if (OtherActor == this)
	{
		return;
	}
	
	if (auto const Enemy = Cast<AEnemy>(OtherActor))
	{
		auto const NewHealth = Enemy->GetHealth() - Enemy->GetMaxHealth() * 0.1f;
		Enemy->SetHealth(NewHealth);
	}

	else if (auto const Player = Cast<AjCareerProjectCharacter>(OtherActor))
	{
		auto const NewHealth = Player->GetHealth() - Player->GetMaxHealth() * 0.07f;
		Player->SetHealth(NewHealth);
	}
}

void AAIForCharacter::OnAttackOverlapEnd(
	UPrimitiveComponent* const OverlappedComp, 
	AActor* const OtherActor, 
	UPrimitiveComponent* const OtherComp, 
	int const OtherBodyIndex)
{

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

	//Game Over (Lose)
	if (Cast<AjCareerProjectCharacter>(this))
	{
		if (Health <= 0)
		{
			UE_LOG(LogTemp, Error, TEXT("You lost!! Really!?"));
			GetWorld()->GetFirstLocalPlayerFromController()->ConsoleCommand("Exit");
		}
	}
	//Game Over (Win)
	else if (Cast<AEnemy>(this))
	{
		if (Health <= 0)
		{
			UE_LOG(LogTemp, Error, TEXT("You won everything in life!!"));
			GetWorld()->GetFirstLocalPlayerFromController()->ConsoleCommand("Exit");
		}
	}
}

void AAIForCharacter::AttackStart() const
{
	RightHandHitBox->SetCollisionProfileName("Fist");
	RightHandHitBox->SetNotifyRigidBodyCollision(true);
}

void AAIForCharacter::AttackEnd() const
{
	RightHandHitBox->SetCollisionProfileName("Fist");
	RightHandHitBox->SetNotifyRigidBodyCollision(false);
}

