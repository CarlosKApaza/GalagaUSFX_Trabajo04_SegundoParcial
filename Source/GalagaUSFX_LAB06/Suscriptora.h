// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Suscriptora.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USuscriptora : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGAUSFX_LAB06_API ISuscriptora
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	// Metodo Actualizar que se implementara en las clases que hereden de esta interfaz
	virtual void Actualizar(class APublicador* _Publicador) = 0;
};
