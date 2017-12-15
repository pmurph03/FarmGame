// Fill out your copyright notice in the Description page of Project Settings.


#include "FarmGame.h"
#include "PriceComponent.h"
#include "Plant.h"

float UPriceComponent::GetPlayerSellPrice()
{
	AActor* Owner = GetOwner();
	if (Owner != nullptr)
	{
		APlant* Plant = Cast<APlant>(Owner);
		if (Plant != nullptr)
		{
			return BasePrice + (BasePrice * Plant->FertilizeCurrent * ScalePriceMultiplier);
		}
	}
	return BasePrice + (BasePrice * (GetOwner()->GetActorScale().X-1) * ScalePriceMultiplier);
}

float UPriceComponent::GetPlayerBuyPrice()
{
	return BasePrice / 1.25;
}

// Sets default values for this component's properties
UPriceComponent::UPriceComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UPriceComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPriceComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

