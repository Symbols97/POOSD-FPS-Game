// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFolder/EnemyPig.h"
#include "Components/ActorComponent.h"
#include "Kismet/GameplayStatics.h"


AEnemyPig::AEnemyPig()
{
	// Set the default values of Enemy Pig Class
	enemyName = "Enemy Pig";
	baseDamage = 10;
	currentHealth = 100;
	maxHealth = 100;

	attackSound = CreateDefaultSubobject<USoundBase>(TEXT("Attack Sound"));
}


void AEnemyPig::enemyPigMainAttack()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Called from EnemyPig class"));

	UGameplayStatics::PlaySound2D(GetWorld(), attackSound, 1, 1, 0, NULL, false, true);
}


// This function is to be called from the blueprint to get a random section name for the attack montage
FString AEnemyPig::enemyPigAttackName()
{
	// gets a random number from 1 to 3
	int attackNumber = rand() % 3 + 1;

	if (attackNumber == 1)
		return "Attack Section";
	else if (attackNumber == 2)
		return "Forward";
	else
		return "Jump";
}
