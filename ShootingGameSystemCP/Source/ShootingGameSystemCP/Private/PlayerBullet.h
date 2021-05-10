// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerBullet.generated.h"

UCLASS()
class APlayerBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerBullet();

	// íeä€ÉÅÉbÉVÉÖ
	UPROPERTY(VisibleDefaultsOnly, Category = "shooting")
		class UStaticMeshComponent* bullet;

	// projectile?
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "shooting")
		class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleDefaultsOnly, Category = "shooting")
		class UParticleSystem* ExplosionParticle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImplse, const FHitResult& Hit);

};
