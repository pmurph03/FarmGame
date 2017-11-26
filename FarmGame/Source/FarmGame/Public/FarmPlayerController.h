// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "FarmPlayerController.generated.h"


class AFarmer;
/**
 * 
 */
UCLASS()
class FARMGAME_API AFarmPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	AFarmer* GetControlledFarmer() const;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	
	
};
