// Fill out your copyright notice in the Description page of Project Settings.


#include "Playercharbase.h"

// Sets default values
APlayercharbase::APlayercharbase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayercharbase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayercharbase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayercharbase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Damage Taken Logic
void APlayercharbase::ReceiveAnyDamage(float Damage, const class UDamageType, class AController, AActor)
{
	health = health - Damage;
	if (health <= 0)
	{
		Death();
	};
	
}

// death logic
void APlayercharbase::Death()
{
}