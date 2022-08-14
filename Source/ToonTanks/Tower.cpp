// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"

void ATower::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	// find the distance to the Tank
	if ( Tank )
	{
		float Distance = FVector::Dist( GetActorLocation( ), Tank->GetActorLocation( ) );

		// check if the Tank is in range
		if ( Distance <= FireRange )
		{
			// if in range, rotate turret towards Tank
			RotateTurret( Tank->GetActorLocation( ) );
		}
	}
}

void ATower::BeginPlay( )
{
	Super::BeginPlay( );

	Tank = Cast<ATank>( UGameplayStatics::GetPlayerPawn( this, 0 ) );
}
