// Fill out your copyright notice in the Description page of Project Settings.

#include "MyLevelLight.h"


// Sets default values
AMyLevelLight::AMyLevelLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyLevelLight::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyLevelLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

