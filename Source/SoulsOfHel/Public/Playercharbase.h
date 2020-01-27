// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Playercharbase.generated.h"

UCLASS()
class SOULSOFHEL_API APlayercharbase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayercharbase();
	int health;
	int mana;
	int str;
	int dex;
	int critchance;
	int versatility;
	float speed;
	int avoidance;
	int agility;
	int intellect;
	int grounding;
	int haste;
	int constitution;
	int experience;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

	//use the standard damage integration in order to communicate with blueprints correctly
	void ReceiveAnyDamage(float Damage, const UDamageType, AController, AActor);

	//death event
	void Death();

};
