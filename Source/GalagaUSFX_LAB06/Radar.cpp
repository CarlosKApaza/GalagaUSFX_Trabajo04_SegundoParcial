// Fill out your copyright notice in the Description page of Project Settings.


#include "Radar.h"

void ARadar::BeginPlay()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARadar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARadar::VidaNave()
{
	Notificar();
}

void ARadar::SetVidaPromedio(float _VidaPromedio)
{
}

float ARadar::GetVidaPromedio()
{
	return 0.0f;
}
