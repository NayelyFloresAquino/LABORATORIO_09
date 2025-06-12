// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeClon.h"
#include "LaberintoClon.generated.h"
/** 
* 
*/
UCLASS()
class BOMBERMAN012025_API ALaberintoClon : public AActor, public IIPrototypeClon
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoClon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	/*
	TArray<TArray<int32>> aMapaBloques;

	float XInicial = -600.00f;
	float YInicial = -1000.00f;
	float ZInicial = 0.0f;
	float AnchoBloque = 100.0f;
	float LargoBloque = 100.0f;

	TArray<ABloque*> aBloques;

	FTimerHandle tHDestrurirBloques;

	void SpawnBloque(FVector Posicion, int32 tipoBloque);


	virtual void Tick(float DeltaTime) override;
	virtual AActor* Clonar(FVector Pos, float Dis) override;
	void GenerarLaberintoSimetrico();
	FVector PosicionInicial;
	float DistanciaObjetivo = 100.0f; // Distancia a la que se generarán los bloques clonados
	
	// Indica si es un clon para evitar doble generacion
	bool bEsClon = false;
    */
};
