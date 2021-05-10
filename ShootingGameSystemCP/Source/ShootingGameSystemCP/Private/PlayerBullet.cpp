// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "kismet/GameplayStatics.h"		// �_���[�W�����̂��߂̒ǉ�
#include "Particles/ParticleSystem.h"	// particle����̂��߂̒ǉ�

#include "Components/SphereComponent.h"
#include "Runtime/Engine/Classes/kismet/GameplayStatics.h"

// Sets default values
APlayerBullet::APlayerBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// bullet�R���|�[�l���g�̏����ݒ�
	bullet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
	//scale����
	bullet->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
	// �R���W�����v���t�@�C����projectile�^�C�v�ɐݒ�
	bullet->BodyInstance.SetCollisionProfileName("Projectile");

	//componentHit�C�x���g�ŃR�[������֐�
	bullet->OnComponentHit.AddDynamic(this, &APlayerBullet::OnHit);
	
	// �R���W�����ݒ��block�ɂ��Ă���
	bullet->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	// static mesh���A�T�C��
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BulletStaticMseh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	if (BulletStaticMseh.Object != NULL) {
		bullet->SetStaticMesh(BulletStaticMseh.Object);
	}
	// �}�e���A�����A�T�C������
	static ConstructorHelpers::FObjectFinder<UMaterialInstance> BulletMatAsset(TEXT("MaterialInstanceConstant'/Game/ShootingSystem/playerBulletA_m.playerBulletA_m'"));

	if (BulletMatAsset.Object != NULL) {
		bullet->SetMaterial(0, BulletMatAsset.Object);
	}
	// bullet���N���X�̃��[�g�R���|�[�l���g�Ɏw��
	RootComponent = bullet;
	// projectile�̏����ݒ�
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectilecomp"));
	ProjectileMovement->UpdatedComponent = bullet;	// �ΏۃR���|�[�l���g���w��
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;	// ��]�l�ɉ����x��z��
	ProjectileMovement->bShouldBounce = true;	// ���˂�

	// phisics�����ɂ�����e�ۂ̎��ʂ��`���Ă���
	bullet->SetMassOverrideInKg("", 100.0f, true);
	// 3�b�ŏ���
	this->InitialLifeSpan = 3.0f;

	// �����p�[�e�B�N���̏����ݒ�
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/Particles/P_Explosion.P_Explosion'"));
	if (ParticleAsset.Object != NULL) {
		ExplosionParticle = ParticleAsset.Object;
	}

}

// Called when the game starts or when spawned
void APlayerBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerBullet::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImplse, const FHitResult& Hit)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		// [WIP]���L�����ɏՓ˂����Ƃ������蔻���������邽�߂̃��\�b�h
		// AActor��Acharacter�ɂȂ邽�ߔ�r�ł��Ȃ�
		//FString test = UGameplayStatics::GetPlayerCharacter(this, 0)->GetName();
		//if (OtherActor != UGameplayStatics::GetPlayerCharacter(this, 0))  {

			// �Փˑ���Ƀ_���[�W��^����
			float DamageAmount = 10.0f;
			FDamageEvent de;  // ����̓R���X�g���N�^�̏����͂͂�����Ȃ����A�K�v�ɉ����ă_���[�W��ނȂǂ��w��
			AController* EventInstigator = nullptr;	 // �����player controller�̎w��͕K�v�Ȃ�
			AActor* DamageCauser = this;	// �_���[�W�v���Ƃ��Ď��g�i�e�ہj���w��
			OtherActor->TakeDamage(DamageAmount, de, EventInstigator, DamageCauser);

			// ����𐁂���΂�
			OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

			FVector Location = GetActorTransform().GetLocation();
			FRotator Rotation = GetActorTransform().GetRotation().Rotator();
			FVector Scale = FVector(1.0f);
			// �q�b�g�G�t�F�N�g�Ƃ��Ĕ��e�p�[�e�B�N�����X�|�[��
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticle, FTransform(Rotation, Location, Scale));
			// �e�ێ��M�����ł�����
			Destroy();

		//}
	}
}

