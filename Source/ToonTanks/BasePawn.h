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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite )
	int32 VisibleAnywhereInt = 24;
	UPROPERTY( EditAnywhere, BlueprintReadOnly )
	int32 EditAnywhereInt = 32;
	UPROPERTY( VisibleInstanceOnly )
	int32 visibleInstanceOnlyInt = 66;
	UPROPERTY(VisibleDefaultsOnly )
	float VisibleDefaultsOnlyInt = 666.f;
	UPROPERTY( EditDefaultsOnly )
		float EditDefaultsOnlyInt = 555.f;
	UPROPERTY( EditInstanceOnly )
		float EditInstanceOnlyInt = 444.f;
	UPROPERTY( EditAnywhere, BlueprintReadWrite )
		float Speed = 400.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(  )
	class UCapsuleComponent* CapsuleComp;

	UPROPERTY(  )
	UStaticMeshComponent* BaseMesh;

	UPROPERTY( )
	UStaticMeshComponent* TurretMesh;

	UPROPERTY()
	USceneComponent* ProjectileSpawnPoint;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
