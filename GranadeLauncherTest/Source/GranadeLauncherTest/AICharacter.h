// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GranadeLauncherTestCharacter.h"
#include "GameFramework/Character.h"
#include "SubtitleStruct.h"
#include "Components/BoxComponent.h"
#include "AICharacter.generated.h"

/**
 * 
 */
UCLASS()
class GRANADELAUNCHERTEST_API AAICharacter : public AGranadeLauncherTestCharacter
{
	GENERATED_BODY()
	
public:
	AAICharacter();

	virtual void BeginPlay() override;

private:
	UFUNCTION()
		void OnBoxOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult);
		//void OnBoxOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnBoxEndOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex);
		//void OnBoxEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex);

	UFUNCTION()
		void Talk(TArray<FSubtitleStruct> Subs);

public:
	void AnswerToCharacter(FName PlayerLine, TArray<FSubtitleStruct>& SubtitlesToDisplay, float Delay);

	UDataTable* GetPlayerLines() { return PlayerLines; }

protected:
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* BoxComp;

	UPROPERTY(EditAnywhere, Category = DialogSystem)
		UDataTable* PlayerLines;

	UPROPERTY(EditAnywhere, Category = DialogSystem)
		UDataTable* AILines;
	
	
};
