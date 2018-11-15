// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GranadeLauncherTestProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "ParticleHelper.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "DestructibleComponent.h"
#include "DestructibleActor.h"
#include "Components/StaticMeshComponent.h"

AGranadeLauncherTestProjectile::AGranadeLauncherTestProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AGranadeLauncherTestProjectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AGranadeLauncherTestProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this))// && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		SwitchGun(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
	}

}

void AGranadeLauncherTestProjectile::SwitchGun(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (CurrentGun == 0)
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
		Destroy();
	}
	else if (CurrentGun == 1)
	{

		//OnDetonate();
	}
}

int AGranadeLauncherTestProjectile::ChangeCurrentGunToNormal()
{
	int Normal;
	Normal = 0;
	CurrentGun
	return Normal;
}

int AGranadeLauncherTestProjectile::ChangeCurrentGunToGrenade()
{
	int Grenade;
	Grenade= 1;
	return Grenade;
}

void AGranadeLauncherTestProjectile::ChangeCurrentGun2()
{
	if (CurrentGun == 0)
	{
		CurrentGun = 1;
	}

	else if (CurrentGun == 1)
	{
		CurrentGun = 0;
	}
}


/*void AGranadeLauncherTestProjectile::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle handle;
	GetWorld()->GetTimerManager().SetTimer(handle, this, &AGranadeLauncherTestProjectile::OnDetonate, 5.f, false); // true would make it explode multiple times
}
*/
/*void AGranadeLauncherTestProjectile::OnDetonate()
{
	UParticleSystemComponent* Explosion = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticles, GetActorTransform());
	Explosion->SetRelativeScale3D(FVector(4.f));

	UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, GetActorLocation());

	TArray<FHitResult> HitActors;
	FVector StartTrace = GetActorLocation();
	FVector EndTrace = StartTrace;
	EndTrace.Z += 300.0f;

	FCollisionShape CollisionShape;
	CollisionShape.ShapeType = ECollisionShape::Sphere;
	CollisionShape.SetSphere(Radius);

	if (GetWorld()->SweepMultiByChannel(HitActors, StartTrace, EndTrace, FQuat::FQuat(), ECC_WorldStatic, CollisionShape))
	{
		for (auto Actors = HitActors.CreateIterator(); Actors; Actors++)
		{
			UStaticMeshComponent* SM = Cast<UStaticMeshComponent>((*Actors).Actor->GetRootComponent());
			ADestructibleActor* DA = Cast<ADestructibleActor>((*Actors).GetActor());

			if (SM)
			{
				SM->AddRadialImpulse(GetActorLocation(), 1000.f, 5000.f, ERadialImpulseFalloff::RIF_Linear, true);
			}

			else if (DA)
			{
				DA->GetDestructibleComponent()->ApplyRadiusDamage(10.f, Actors->ImpactPoint, 500.f, 3000.f, false);
			}
		}
		
	}
	Destroy();
}*/