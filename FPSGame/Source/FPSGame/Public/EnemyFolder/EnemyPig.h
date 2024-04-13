// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyFolder/Enemy.h"
#include "EnemyPig.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AEnemyPig : public AEnemy
{
	GENERATED_BODY()
	

public:
	AEnemyPig();


protected:
	// For now it will only print a debug statement
	UFUNCTION(BlueprintCallable)
	void enemyPigMainAttack();

	// Get a random section name for the attack montage
	UFUNCTION(BlueprintCallable)
	FString enemyPigAttackName();


private:


};
