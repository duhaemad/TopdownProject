#include "AI_Bot_Controller.h"
#include "Ai_Character.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AAI_Bot_Controller::AAI_Bot_Controller()
{
	PrimaryActorTick.bCanEverTick = true;

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

	SightConfig->SightRadius = AISightRadius;
	SightConfig->LoseSightRadius = AILoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = AIFieldOfView;
	SightConfig->SetMaxAge(AISightAge);

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AAI_Bot_Controller::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);
}

void AAI_Bot_Controller::BeginPlay()
{
	Super::BeginPlay();

	if (GetPerceptionComponent() != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("All Systems Set"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Some Problem Occured"));
	}

}

void AAI_Bot_Controller::OnPossess(APawn* Pawn)
{
	Super::OnPossess(Pawn);
}

void AAI_Bot_Controller::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	AAI_Bot_Character* Character = Cast<AAI_Bot_Character>(GetPawn());
	if (Character->NextWaypoint != nullptr)
	{
		MoveToActor(Character->NextWaypoint, 5.0f);
	}
}

FRotator AAI_Bot_Controller::GetControlRotation() const
{
	if (GetPawn() == nullptr)
	{
		return FRotator(0.0f, 0.0f, 0.0f);
	}

	return FRotator(0.0f, GetPawn()->GetActorRotation().Yaw, 0.0f);

}

void AAI_Bot_Controller::OnPawnDetected(TArray<AActor*> DetectedPawns)
{

}






