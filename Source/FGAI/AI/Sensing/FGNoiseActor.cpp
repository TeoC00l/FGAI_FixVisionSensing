// Fill out your copyright notice in the Description page of Project Settings.


#include "FGNoiseActor.h"

#include "DrawDebugHelpers.h"

// Sets default values
AFGNoiseActor::AFGNoiseActor()
{
	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootComp;
	PrimaryActorTick.bCanEverTick = true;
}

void AFGNoiseActor::SpawnNoise(FVector Location, AActor* Actor)
{
	FRotator Rot;
	Actor->GetWorld()->SpawnActor<AFGNoiseActor>(Location, Rot);
}

void AFGNoiseActor::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(3.f);
}

void AFGNoiseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//DrawDebugSphere(GetWorld(), GetActorLocation(), Radius, 50, FColor::Green,true,2,0, 4);
}

