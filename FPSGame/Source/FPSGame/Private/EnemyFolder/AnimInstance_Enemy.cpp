// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyFolder/AnimInstance_Enemy.h"

#include "EnemyFolder/Enemy.h"
#include "EnemyFolder/EnemyHamster.h"
#include "EnemyFolder/EnemyBird.h"


void UAnimInstance_Enemy::UpdateAnimationProperties(float DeltaTime)
{
	if (enemy == nullptr) 
	{
		// This can also be done in the blueprints by using the TryGetPawnOwner in the Event tab of a blueprint
		enemy = Cast<AEnemy>(TryGetPawnOwner()); 
	}

	if (enemy) 
	{
		// Get the lateral speed of the enemy from velocity, not including vertical speed (like jumping)
		FVector velocity{ enemy->GetVelocity() };
		velocity.Z = 0;
		speed = velocity.Size();
	}
}
