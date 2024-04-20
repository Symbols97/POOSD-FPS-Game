// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class FPSGAME_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Get methods of Enemy
	FName getEnemyName();
	float getBaseDamage();
	float getCurrentHealth();
	float getMaxHealth();

	// Set methods of Enemy
	void setEnemyName(FName newEnemyName);
	void setBaseDamage(float newBaseDamage);
	void setCurrentHealth(float newCurrentHealth);
	void setMaxHealth(float newMaxHealth);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Enemy name to display on HUD
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	FName enemyName;

	// Starting damage for enemy character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float baseDamage;

	// Current health of enemy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float currentHealth;

	// Maximum allowed health of enemy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float maxHealth;

private:

};
