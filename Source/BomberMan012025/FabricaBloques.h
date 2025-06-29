// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaBloques.generated.h"

class ABloque;
UCLASS()
class BOMBERMAN012025_API AFabricaBloques : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFabricaBloques();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declaramos el metodo que crea un bloque de tipo especificado
	ABloque* CrearBloque(FString tipoBloque, FVector Posicion);

};
