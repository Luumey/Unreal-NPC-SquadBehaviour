// Fill out your copyright notice in the Description page of Project Settings.


#include "Squad_Behaviour/NPC_Unit.h"

// Sets default values
ANPC_Unit::ANPC_Unit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPC_Unit::BeginPlay()
{
	Super::BeginPlay();
	MergeZone = CreateDefaultSubobject<USphereComponent>(FName("SphereComponent"));
	MergeZone->SetSphereRadius(1000.0f);
	MergeZone->OnComponentBeginOverlap.AddDynamic(this, &ANPC_Unit::OnOverlapBegin);
	MergeZone->OnComponentEndOverlap.AddDynamic(this, &ANPC_Unit::OnOverlapEnd);
}

// Called every frame
void ANPC_Unit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPC_Unit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPC_Unit::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	if (OtherActor->IsA(ANPC_Unit::StaticClass())) {
		if (Cast<ANPC_Unit>((OtherActor))->GetSquad() != GetSquad()) {

		}
	}
}

void ANPC_Unit::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {

}

USquad* ANPC_Unit::GetSquad() {
	return Squad;
}