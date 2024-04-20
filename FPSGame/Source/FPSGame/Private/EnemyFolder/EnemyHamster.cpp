// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFolder/EnemyHamster.h"
#include "Components/ActorComponent.h"
#include "Kismet/GameplayStatics.h"


AEnemyHamster::AEnemyHamster()
{
	// Set the default values of Enemy Hamster Class
	enemyName = "Boss Hamster";
	baseDamage = 15;
	currentHealth = 200;
	maxHealth = 200;
	hamsterReachPlayer = false;

	attackSound = CreateDefaultSubobject<USoundBase>(TEXT("Attack Sound"));
}




// This function can be called from the blueprint
//		Example, In EnemyHamsterBP to check when enemy hamster is near the FPS character
//		OnComponentBeginOverlap (AttackSphere_EnemyHamster) is used and will run enemyMainAttack()
void AEnemyHamster::enemyHamsterMainAttack()
{
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Called from EnemyHamster class"));
	hamsterReachPlayer = true;

	UGameplayStatics::PlaySound2D(GetWorld(), attackSound, 1, 1, 0, NULL, false, true);
}



// This function is to be called from the blueprint to get a random section name for the attack montage
FString AEnemyHamster::enemyHamsterAttackName()
{
	// gets a random number from 1 to 3
	int attackNumber = rand() % 3 + 1;

	if (attackNumber == 1)
		return "Attack Section";
	else if (attackNumber == 2)
		return "Hit Section";
	else
		return "Click Section";
}
