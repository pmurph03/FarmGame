// Fill out your copyright notice in the Description page of Project Settings.

#include "FarmGame.h"
#include "Farmer.h"
#include "FarmPlayerController.h"


void AFarmPlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AFarmPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


AFarmer* AFarmPlayerController::GetControlledFarmer() const
{
	return Cast<AFarmer>(GetPawn());
}