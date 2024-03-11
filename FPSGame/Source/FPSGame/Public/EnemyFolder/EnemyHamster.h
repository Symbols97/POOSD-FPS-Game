// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyFolder/Enemy.h"
#include "EnemyHamster.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AEnemyHamster : public AEnemy
{
	GENERATED_BODY()
	

public:
	AEnemyHamster();


protected:
	// For now it will only print a debug statement
	UFUNCTION(BlueprintCallable)
	void enemyHamsterMainAttack();


private:


};
