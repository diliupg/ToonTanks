// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Components, Meta = (AllowPrivateAccess = "true") )
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Components, Meta = (AllowPrivateAccess = "true") )
	UStaticMeshComponent* BaseMesh;

	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Components, Meta = (AllowPrivateAccess = "true") )
	UStaticMeshComponent* TurretMesh;

	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = Components, Meta = (AllowPrivateAccess = "true") )
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY( VisibleAnywhere, BlueprintReadWrite, Category = "Strange Variables", meta = (AllowPrivateAccess = "true") )
	int32 VisibleAnywhereInt = 24;
	UPROPERTY( EditAnywhere, BlueprintReadOnly, Category = "Strange Variables", meta = (AllowPrivateAccess = "true") )
	int32 EditAnywhereInt = 32;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
