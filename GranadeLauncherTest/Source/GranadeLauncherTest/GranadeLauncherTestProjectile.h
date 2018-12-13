// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GranadeLauncherTestProjectile.generated.h"

UCLASS(config=Game)
class AGranadeLauncherTestProjectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	class USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere, Category = "FX")
		UParticleSystem* ExplosionParticles;

	UPROPERTY(EditAnywhere, Category = "FX")
		class USoundCue* ExplosionSound; // putting class is considered a full declaration. prevents errors

	UPROPERTY(EditAnywhere, Category = "Projectile")
		float Radius = 500.0f; // checking if there is anything within this radius to destroy it

public:
	AGranadeLauncherTestProjectile();
	

	virtual void BeginPlay() override;

	//void &Switch(bool SwitchGun) { IsLauncher = Switch; }

	UFUNCTION()
		void OnDetonate(); // makes grenade explode
	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	FORCEINLINE class USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	FORCEINLINE class UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

