// Fill out your copyright notice in the Description page of Project Settings.


#include "SCSplitScreenController.h"

// Sets default values
ASCSplitScreenController::ASCSplitScreenController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASCSplitScreenController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASCSplitScreenController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASCSplitScreenController::OnToggleSplitScreen(AActor* Context, bool bStatus) 
{
	if (Context) {
		Context->GetWorld()->GetGameViewport()->SetDisableSplitscreenOverride(bStatus);
	}
}
