// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publicador.h"
#include "Radar.generated.h"

/**
 * 
 */
UCLASS()
class GALAGAUSFX_LAB06_API ARadar : public APublicador
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	float VidaPromedio;

public:
	void VidaNave();
	void SetVidaPromedio(float _VidaPromedio);
	FORCEINLINE float GetVidaPromedio();
};
