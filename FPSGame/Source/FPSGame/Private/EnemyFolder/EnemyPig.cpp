// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFolder/EnemyPig.h"

AEnemyPig::AEnemyPig()
{
	// Set the default values of Enemy Pig Class
	enemyName = "Enemy Pig";
	baseDamage = 10;
	currentHealth = 100;
	maxHealth = 100;
}


void AEnemyPig::enemyPigMainAttack()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Called from EnemyPig class"));
}