// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFolder/Enemy.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the default values of Enemy Class
	enemyName = "Name of Enemy";
	baseDamage = 5;
	currentHealth = 100;
	maxHealth = 100;
}


// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}


/*
// This function can be called from the blueprint
//		Example, In EnemyHamsterBP to check when enemy hamster is near the FPS character
//		OnComponentBeginOverlap (AttackSphere_EnemyHamster) is used and will run enemyMainAttack()
void AEnemy::enemyMainAttack()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, TEXT("Called from enemy class"));
}
*/

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



// Get methods
FName AEnemy::getEnemyName(){
	return enemyName;
}

float AEnemy::getBaseDamage(){
	return baseDamage;
}

float AEnemy::getCurrentHealth(){
	return currentHealth;
}

float AEnemy::getMaxHealth(){
	return maxHealth;
}



// Set methods
void AEnemy::setEnemyName(FName newEnemyName){
	enemyName = newEnemyName;
}

void AEnemy::setBaseDamage(float newBaseDamage){
	baseDamage = newBaseDamage;
}

void AEnemy::setCurrentHealth(float newCurrentHealth){
	currentHealth = newCurrentHealth;
}

void AEnemy::setMaxHealth(float newMaxHealth){
	maxHealth = newMaxHealth;
}




/*
// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
*/
