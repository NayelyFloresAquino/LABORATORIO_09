// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN012025_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()
public:
	ABloqueAcero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
