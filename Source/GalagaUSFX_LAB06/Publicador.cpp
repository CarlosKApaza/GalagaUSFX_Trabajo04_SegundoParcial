// Fill out your copyright notice in the Description page of Project Settings.


#include "Publicador.h"
#include "Suscriptora.h"

// Sets default values
APublicador::APublicador()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APublicador::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APublicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APublicador::Suscribirse(AActor* _Suscriptor)
{
	Suscriptores.Add(_Suscriptor);
}

void APublicador::Desuscribirse(AActor* _Suscriptor)
{
	Suscriptores.Remove(_Suscriptor);
}

void APublicador::Notificar()
{
	for (AActor* Sub : Suscriptores)
	{
		ISuscriptora* Suscriptor = Cast<ISuscriptora>(Sub);
		if (Suscriptor)
		{
			Suscriptor->Actualizar(this);
		}
	}
}

