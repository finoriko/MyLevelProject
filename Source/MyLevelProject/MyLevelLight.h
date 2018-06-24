// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "Engine\TriggerBox.h"
#include "MyLevelLight.generated.h"

UCLASS()
class MYLEVELPROJECT_API AMyLevelLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyLevelLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
	class USpotLightComponent* pointLight;
	
};
