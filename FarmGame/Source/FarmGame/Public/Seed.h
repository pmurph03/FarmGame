// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Selectable.h"
#include "GameFramework/Actor.h"
#include "Seed.generated.h"

UCLASS()
class  ASeed : public AActor, public ISelectable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASeed();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
};
