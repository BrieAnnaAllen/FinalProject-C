// Fill out your copyright notice in the Description page of Project Settings.

#include "AICharacter.h"


AAICharacter::AAICharacter()
{
	BoxComp = CreateDefaultSubobject<UBoxComponent>(FName("BoxComp"));
	BoxComp->AttachTo(GetRootComponent());
}


void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	//BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AAICharacter::OnBoxOverlap);
	//BoxComp->OnComponentEndOverlap.AddDynamic(this, &AAICharacter::OnBoxEndOverlap);
}
void AAICharacter::OnBoxOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult & SweepResult)
{
}
void AAICharacter::OnBoxEndOverlap(AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherIndex)
{
}

void AAICharacter::Talk(TArray<FSubtitleStruct> Subs)
{
}

void AAICharacter::AnswerToCharacter(FName PlayerLine, TArray<FSubtitleStruct>& SubtitlesToDisplay, float Delay)
{
}
