// Fill out your copyright notice in the Description page of Project Settings.

#include "AICharacter.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"


AAICharacter::AAICharacter()
{
	BoxComp = CreateDefaultSubobject<UBoxComponent>(FName("BoxComp"));
	BoxComp->AttachTo(GetRootComponent());
}


void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	BoxComp->OnComponentBeginOverlap.AddDynamic(this, &AAICharacter::OnBoxOverlap);
	BoxComp->OnComponentEndOverlap.AddDynamic(this, &AAICharacter::OnBoxEndOverlap);
}
void AAICharacter::OnBoxOverlap(UPrimitiveComponent* HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor->IsA<AGranadeLauncherTestCharacter>())
	{
		AGranadeLauncherTestCharacter* Char = Cast<AGranadeLauncherTestCharacter>(OtherActor);
		Char->SetTalkRangeStatus(true);
		Char->GeneratePlayerLines(*PlayerLines);
		Char->setAssociatedPawn(this);
	}
}
void AAICharacter::OnBoxEndOverlap(UPrimitiveComponent* HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherIndex)
{
	if (OtherActor->IsA<AGranadeLauncherTestCharacter>())
	{
		AGranadeLauncherTestCharacter* Char = Cast<AGranadeLauncherTestCharacter>(OtherActor);
		Char->SetTalkRangeStatus(false);
		Char->setAssociatedPawn(nullptr);
	}
}

void AAICharacter::Talk(TArray<FSubtitleStruct> Subs)
{
	AGranadeLauncherTestCharacter* Char = Cast<AGranadeLauncherTestCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	
	Char->GetUI()->UpdateSubtitles(Subs);
}

void AAICharacter::AnswerToCharacter(FName PlayerLine, TArray<FSubtitleStruct>& SubtitlesToDisplay, float Delay)
{
	if (!AILines) return;
	//retrieve corresponding line
	FString ContextString;
	FDialogStruct* Dialog = AILines->FindRow<FDialogStruct>(PlayerLine, ContextString);

	AGranadeLauncherTestCharacter* MainChar = Cast<AGranadeLauncherTestCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (Dialog && MainChar)
	{
		FTimerHandle TimerHandle;
		FTimerDelegate TimerDel;

		TimerDel.BindUFunction(this, FName("Talk"), Dialog->Subtitles);

		GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, Delay, false);
	}
}
