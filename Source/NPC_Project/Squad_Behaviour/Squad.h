// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Squad_Behaviour/NPC_Unit.h"
#include "Squad.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable )
class NPC_PROJECT_API USquad : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USquad();

private:
	TArray<ANPC_Unit*> Squad_Members;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
