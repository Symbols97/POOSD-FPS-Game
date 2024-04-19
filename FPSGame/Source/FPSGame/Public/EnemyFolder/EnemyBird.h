// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyFolder/Enemy.h"
#include "EnemyBird.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AEnemyBird : public AEnemy
{
	GENERATED_BODY()


public:
	AEnemyBird();


protected:
	// For now it will only print a debug statement
	UFUNCTION(BlueprintCallable)
	void enemyBirdMainAttack();

	// Get attack sound effect
	UPROPERTY(EditDefaultsOnly, Category = "Sound Effect");
	class USoundBase* attackSound;


private:


};
