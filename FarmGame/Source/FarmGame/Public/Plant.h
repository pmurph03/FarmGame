// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Selectable.h"
#include "GameFramework/Actor.h"
#include "Plant.generated.h"

class ASeed;

UCLASS()
class FARMGAME_API APlant : public AActor, public ISelectable
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<ASeed> SeedBlueprint = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float WaterLevelMax = 100.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float WaterDecreasePerTick = 0.1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WaterGrowthMultiplier = 1.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float GrowthTimeMax = 100.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int FertilizeMax = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FertilizeGrowthMultiplier = 1.0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float GrowthStartScale = 0.1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		float BaseFinalScale = 1.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bJustFertilized = false;
public:	
	// Sets default values for this actor's properties
	APlant();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float WaterCurrentLevel = 50.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float GrowthTimeCurrent = 0.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int FertilizeCurrent = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsGrowing = false;
	
};
