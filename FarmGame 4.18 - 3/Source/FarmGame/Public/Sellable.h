// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Sellable.generated.h"
/**
 * 
 */


UINTERFACE(Blueprintable)
class FARMGAME_API USellable : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class FARMGAME_API ISellable {
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Sell Reaction")
		void Sell();
};
