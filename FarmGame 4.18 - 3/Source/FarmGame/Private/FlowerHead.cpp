// Fill out your copyright notice in the Description page of Project Settings.

#include "FarmGame.h"
#include "FlowerHead.h"


// Sets default values
AFlowerHead::AFlowerHead()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFlowerHead::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlowerHead::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

