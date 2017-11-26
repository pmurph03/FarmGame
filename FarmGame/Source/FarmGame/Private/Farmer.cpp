// Fill out your copyright notice in the Description page of Project Settings.

#include "FarmGame.h"
#include "Farmer.h"


// Sets default values
AFarmer::AFarmer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFarmer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFarmer::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AFarmer::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

