// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFolder/EnemyBird.h"
#include "Components/ActorComponent.h"
#include "Kismet/GameplayStatics.h"


AEnemyBird::AEnemyBird()
{
	// Set the default values of Enemy Bird Class
	enemyName = "Enemy Bird";
	baseDamage = 5;
	currentHealth = 40;
	maxHealth = 40;

	attackSound = CreateDefaultSubobject<USoundBase>(TEXT("Attack Sound"));
}


// This function can be called from the blueprint
void AEnemyBird::enemyBirdMainAttack()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Called from EnemyBird class"));

	UGameplayStatics::PlaySound2D(GetWorld(), attackSound, 1, 1, 0, NULL, false, true);
}
