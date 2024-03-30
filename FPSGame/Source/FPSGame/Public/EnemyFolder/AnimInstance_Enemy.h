// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstance_Enemy.generated.h"

class AEnemy;

/**
 *
 */

UCLASS()
class FPSGAME_API UAnimInstance_Enemy : public UAnimInstance
{
	GENERATED_BODY()


public:
	// This will act like the tick function. To call every frame
	UFUNCTION(BlueprintCallable)
	void UpdateAnimationProperties(float DeltaTime);


private:
	// Get Enemy
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	AEnemy* enemy;

	// Set speed of the enemy
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Movement", meta=(AllowPrivateAccess="true"))
	float speed;
};
