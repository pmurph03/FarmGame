// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Holdable.generated.h"
/**
 * 
 */
UINTERFACE(Blueprintable)
class FARMGAME_API UHoldable : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};


class FARMGAME_API IHoldable
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "IHoldable")
		bool Hold();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "IHoldable")
		bool GetIsHeld();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "IHoldable")
		bool SetIsHeld(bool IsHeld);
};



