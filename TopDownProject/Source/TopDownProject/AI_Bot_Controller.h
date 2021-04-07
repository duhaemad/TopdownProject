// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AI_Bot_Controller.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNPROJECT_API AAI_Bot_Controller : public AAIController
{
	GENERATED_BODY()

public:
	AAI_Bot_Controller();


	virtual void BeginPlay() override;  //runned when the possess intialaized 

	virtual void OnPossess(APawn* MyPawn) override;  //runs when the controller plugs into the  character

	virtual void Tick(float DeltaSecs) override;  //runs every frame update 


	virtual FRotator GetControlRotation() const override;  // alawwws the ai preception component to always point into the directtion the char facing in 


	UFUNCTION()

		void OnPawnDetected(TArray<AActor*> DetectedPawnes);  //like event handeller that will process any detected objects --->any objects are detected by the perception component 



	UPROPERTY(VisibleAnywhere, BlueprintReaddwrite, Catogory = AI)

		float AISightRadius = 500.0f;


	UPROPERTY(VisibleAnywhere, BlueprintReaddwrite, Catogory = AI)

		float AISightAge = 5.0f;


	UPROPERTY(VisibleAnywhere, BlueprintReaddwrite, Catogory = AI)

		float AILoseSightRadius = AISightRadius +50.0f;


	UPROPERTY(VisibleAnywhere, BlueprintReaddwrite, Catogory = AI)

		float AIfileldOfView = 90.0f;



	
};
