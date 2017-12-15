// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Selectable.generated.h"

/**
 * If implemented in a class, the given object is selectable.
 */
UINTERFACE(Blueprintable)
class FARMGAME_API USelectable : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class FARMGAME_API ISelectable {
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ISelectable")
		bool Select();
};
