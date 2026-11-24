// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Commander.generated.h"

UCLASS( ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable )
class NPC_PROJECT_API ACommander : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACommander();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UnitTypes")
	class ANPC_Unit* Unit1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UnitTypes")
	class ANPC_Unit* Unit2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UnitTypes")
	class ANPC_Unit* Unit3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UnitTypes")
	class ANPC_Unit* Unit4;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
