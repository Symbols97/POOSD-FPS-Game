// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFolder/EnemyBird.h"

AEnemyBird::AEnemyBird()
{
	// Set the default values of Enemy Bird Class
	enemyName = "Enemy Bird";
	baseDamage = 5;
	currentHealth = 40;
	maxHealth = 40;
}


// This function can be called from the blueprint
void AEnemyBird::enemyBirdMainAttack()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Called from EnemyBird class"));
}
