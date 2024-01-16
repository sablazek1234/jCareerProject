// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIForCharacter.generated.h"

UCLASS()
class JCAREERPROJECT_API AAIForCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIForCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float GetHealth() const;
	float GetMaxHealth() const;
	void SetHealth(float const NewHealth);
	void AttackStart() const;
	void AttackEnd() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	class UWidgetComponent* WidgetComp;
	
	float const MaxHealth{ 100.f };
	float Health;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* RightHandHitBox;

	UFUNCTION()
	void OnAttackOverlapStart(
		UPrimitiveComponent* const OverlappedComp,
		AActor* const OtherActor,
		UPrimitiveComponent* const OtherComp,
		int const OtherBodyIndex,
		bool const FromPunch,
		FHitResult const& PunchResult);

	UFUNCTION()
	void OnAttackOverlapEnd(
		UPrimitiveComponent* const OverlappedComp,
		AActor* const OtherActor,
		UPrimitiveComponent* const OtherComp,
		int const OtherBodyIndex);
};
