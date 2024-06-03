// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawnBase.h"
#include "Engine/Classes/Camera/CameraComponent.h"
#include "SnakeBase.h"
#include "Components/InputComponent.h"



// Sets default values
APlayerPawnBase::APlayerPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));
	RootComponent = PawnCamera;

}

// Called when the game starts or when spawned
void APlayerPawnBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorRotation(FRotator(-90, 0, 0));
	CreateSnakeActor();
}

// Called every frame
void APlayerPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	stop = true;
}

// Called to bind functionality to input
void APlayerPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Vertical", this, &APlayerPawnBase::HandlePlayerVerticalInput);
	PlayerInputComponent->BindAxis("Horizontal", this, &APlayerPawnBase::HandlePlayerHorizontalInput);
}

void APlayerPawnBase::CreateSnakeActor()
{
	SnakeActor = GetWorld()->SpawnActor <ASnakeBase> (SnakeActorClass, FTransform());
}

void APlayerPawnBase::HandlePlayerVerticalInput(float value)
{

		if (IsValid(SnakeActor))
		{
			if (value > 0 && SnakeActor->LastMoveDirection != EmovementDirection::DOWN)
			{

				SnakeActor->LastMoveDirection = EmovementDirection::UP;
			}
			else if (value < 0 && SnakeActor->LastMoveDirection != EmovementDirection::UP)
			{
				SnakeActor->LastMoveDirection = EmovementDirection::DOWN;
			}
		}
	
}

void APlayerPawnBase::HandlePlayerHorizontalInput(float value)
{

	if (stop = true)
	{
		if (IsValid(SnakeActor))
		{
			if (value > 0 && SnakeActor->LastMoveDirection != EmovementDirection::LEFT)
			{
				SnakeActor->LastMoveDirection = EmovementDirection::RIGHT;
				stop = false;
			}
			else if (value < 0 && SnakeActor->LastMoveDirection != EmovementDirection::RIGHT)
			{
				SnakeActor->LastMoveDirection = EmovementDirection::LEFT;
				stop = false;
			}
		}
	}
}
