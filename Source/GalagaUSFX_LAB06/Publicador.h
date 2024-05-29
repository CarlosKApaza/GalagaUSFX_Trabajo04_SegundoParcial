// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publicador.generated.h"

UCLASS()
class GALAGAUSFX_LAB06_API APublicador : public AActor
{
	GENERATED_BODY()
	
public:	
	APublicador();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

// Almacenar los suscriptores
private:
	UPROPERTY(VisibleAnywhere, Category = "Publicador")

	TArray<AActor*> Suscriptores; // Almacenar los suscriptores

	class ISuscriptora* Suscriptor	; // Referencia a la interfaz

public:
	void Suscribirse(AActor* _Suscriptor);
	void Desuscribirse(AActor* _Suscriptor);
	void Notificar();
};
