// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "PriceComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FARMGAME_API UPriceComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	
	//Base price of the item
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Price")
	float BasePrice = 100;

	//% of base price to add to sell price depending on owning actors scale, or number of times fertilized.
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Price")
		float ScalePriceMultiplier = 0.25;


public:	
	//Returns the price for when player tries to sell item to a store.
	UFUNCTION(BlueprintCallable, Category = "Price")
		float GetPlayerSellPrice();

	// Returns the price for when the player tries to buy item from a store.
	UFUNCTION(BlueprintCallable, Category = "Price")
		float GetPlayerBuyPrice();

	// Sets default values for this component's properties
	UPriceComponent();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

		
	
};
