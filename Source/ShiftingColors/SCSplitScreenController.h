// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCSplitScreenController.generated.h"

UCLASS()
class SHIFTINGCOLORS_API ASCSplitScreenController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASCSplitScreenController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Splitscreen")
	static void OnToggleSplitScreen(AActor* Context, bool bStatus);

};
