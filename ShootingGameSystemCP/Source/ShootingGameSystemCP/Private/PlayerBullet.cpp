// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBullet.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "kismet/GameplayStatics.h"		// ダメージ処理のための追加
#include "Particles/ParticleSystem.h"	// particle制御のための追加

#include "Components/SphereComponent.h"
#include "Runtime/Engine/Classes/kismet/GameplayStatics.h"

// Sets default values
APlayerBullet::APlayerBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// bulletコンポーネントの初期設定
	bullet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
	//scale調整
	bullet->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
	// コリジョンプロファイルをprojectileタイプに設定
	bullet->BodyInstance.SetCollisionProfileName("Projectile");

	//componentHitイベントでコールする関数
	bullet->OnComponentHit.AddDynamic(this, &APlayerBullet::OnHit);
	
	// コリジョン設定をblockにしておく
	bullet->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Block);
	// static meshをアサイン
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BulletStaticMseh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	if (BulletStaticMseh.Object != NULL) {
		bullet->SetStaticMesh(BulletStaticMseh.Object);
	}
	// マテリアルをアサインする
	static ConstructorHelpers::FObjectFinder<UMaterialInstance> BulletMatAsset(TEXT("MaterialInstanceConstant'/Game/ShootingSystem/playerBulletA_m.playerBulletA_m'"));

	if (BulletMatAsset.Object != NULL) {
		bullet->SetMaterial(0, BulletMatAsset.Object);
	}
	// bulletをクラスのルートコンポーネントに指定
	RootComponent = bullet;
	// projectileの初期設定
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectilecomp"));
	ProjectileMovement->UpdatedComponent = bullet;	// 対象コンポーネントを指定
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;	// 回転値に加速度を配慮
	ProjectileMovement->bShouldBounce = true;	// 跳ねる

	// phisics処理における弾丸の質量を定義しておく
	bullet->SetMassOverrideInKg("", 100.0f, true);
	// 3秒で消滅
	this->InitialLifeSpan = 3.0f;

	// 爆発パーティクルの初期設定
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
		// [WIP]自キャラに衝突したとき当たり判定を回避するためのメソッド
		// AActorとAcharacterになるため比較できない
		//FString test = UGameplayStatics::GetPlayerCharacter(this, 0)->GetName();
		//if (OtherActor != UGameplayStatics::GetPlayerCharacter(this, 0))  {

			// 衝突相手にダメージを与える
			float DamageAmount = 10.0f;
			FDamageEvent de;  // 今回はコンストラクタの初期力はいじらないが、必要に応じてダメージ種類などを指定
			AController* EventInstigator = nullptr;	 // 今回はplayer controllerの指定は必要なし
			AActor* DamageCauser = this;	// ダメージ要因として自身（弾丸）を指定
			OtherActor->TakeDamage(DamageAmount, de, EventInstigator, DamageCauser);

			// 相手を吹っ飛ばす
			OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

			FVector Location = GetActorTransform().GetLocation();
			FRotator Rotation = GetActorTransform().GetRotation().Rotator();
			FVector Scale = FVector(1.0f);
			// ヒットエフェクトとして爆弾パーティクルをスポーン
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionParticle, FTransform(Rotation, Location, Scale));
			// 弾丸自信を消滅させる
			Destroy();

		//}
	}
}

