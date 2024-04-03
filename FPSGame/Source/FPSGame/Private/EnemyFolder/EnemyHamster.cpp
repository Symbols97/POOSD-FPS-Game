// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFolder/EnemyHamster.h"


AEnemyHamster::AEnemyHamster()
{
	// Set the default values of Enemy Hamster Class
	enemyName = "Boss Hamster";
	baseDamage = 15;
	currentHealth = 200;
	maxHealth = 200;
}


// This function can be called from the blueprint
//		Example, In EnemyHamsterBP to check when enemy hamster is near the FPS character
//		OnComponentBeginOverlap (AttackSphere_EnemyHamster) is used and will run enemyMainAttack()
void AEnemyHamster::enemyHamsterMainAttack()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Called from EnemyHamster class"));
}
