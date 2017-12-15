// Fill out your copyright notice in the Description page of Project Settings.

#include "FarmGame.h"
#include "Seed.h"


// Sets default values
ASeed::ASeed()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASeed::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASeed::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}