// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"


#include "Radar.h"
#include "GalagaUSFX_LAB06GameMode.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave Mesh"));
	mallaNaveEnemiga->SetupAttachment(RootComponent);
	RootComponent = mallaNaveEnemiga;

	NombreNave = "Nave Carlitos";

	bEscapar = false;
	bRetornar = false;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//void ANaveEnemiga::RecibirDanio(float dano)
//{
//
//}

FString ANaveEnemiga::GetNombreNave()
{
	//Retorna el nombre de la pocion
	return NombreNave;
}

void ANaveEnemiga::EstablacerRadar(ARadar* _Radar)
{
	if (!_Radar)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se ha encontrado el radar"));
		return;
	}
	Radar = _Radar;
	Radar->Suscribirse(this);
}

void ANaveEnemiga::Actualizar(APublicador* _Publicador)
{
	Escapar();
}

void ANaveEnemiga::Escapar()
{
	float DañoRecibido = Radar->GetVidaPromedio();
	if (DañoRecibido <= 10)
	{
		bEscapar = true;
	}
}

void ANaveEnemiga::Desuscribirse()
{
	if (Radar)
	{
		Radar->Desuscribirse(this);
	}
}

void ANaveEnemiga::EscaparNave(float DeltaTime)
{
	if (bEscapar == true)
	{
		SetActorLocation(FMath::VInterpTo(GetActorLocation(), FVector(1700.0f, -147.0f, 215.0f), DeltaTime, 0.5));
		Curarse();
	}
	if (GetActorLocation().Equals(FVector(1700.0f, -147.0f, 215.0f), 200))
	{
		bEscapar = false;
		bRetornar = true;
	}
}


