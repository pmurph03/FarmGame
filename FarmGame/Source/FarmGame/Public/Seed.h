// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Holdable.h"
#include "Selectable.h"
#include "GameFramework/Actor.h"
#include "Seed.generated.h"

class APlant;
class AFarmer;

UCLASS()
class  ASeed : public AActor, public ISelectable, public IHoldable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsHeld = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsSelected = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		TSubclassOf<APlant> PlantBlueprint = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		FVector SelectedPositionOffset = FVector(0.0, 0.0, 0.0);
public:	
	// Sets default values for this actor's properties
	ASeed();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
};
