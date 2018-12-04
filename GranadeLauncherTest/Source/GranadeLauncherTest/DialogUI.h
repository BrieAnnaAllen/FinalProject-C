// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogStruct.h"
#include "Async/AsyncWork.h"
#include "Async.h"
#include "DialogUI.generated.h"


/**
 * 
 */
UCLASS()
class GRANADELAUNCHERTEST_API UDialogUI : public UUserWidget
{
	GENERATED_BODY()
	
	
public:
	//bind Subtitles to UI to see if there has been changes
	UPROPERTY(BlueprintReadOnly)
		FString SubtitleToDisplay;

	//display subtitles based on current subtitle array
	UFUNCTION(BlueprintCallable, Category = DialogSystem)
		void UpdateSubtitles(TArray<FSubtitleStruct> Subtitles);
	
	//populate buttons
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray<FString>Questions;

	//Add widget to viewport
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = DialogSystem)
		void Show();
	
};

class UMGAsyncTask : public FNonAbandonableTask
{
	TArray<FSubtitleStruct> Subs;

	UDialogUI* DialogUI;

public:

	UMGAsyncTask(TArray<FSubtitleStruct>& Subs, UDialogUI* DialogUI)
	{
		this->Subs = Subs;
		this->DialogUI = DialogUI;
	}

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UMGAsyncTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	/*This function executes each time this thread is active - UE4 searches for a function named DoWord() and executes it*/
	void DoWork()
	{
		for (int32 i = 0; i < Subs.Num(); i++)
		{
			//Sleep means that we pause this thread for the given time
			FPlatformProcess::Sleep(Subs[i].AssociatedTime);

			//Update our subtitles after the thread comes back
			DialogUI->SubtitleToDisplay = Subs[i].Subtitle;
		}

		//Sleep 1 second to let the user read the text
		FPlatformProcess::Sleep(1.f);

		//Clear the subtitle
		DialogUI->SubtitleToDisplay = FString("");
	}
	/*FORCEINLINE TStatId GetStatId() const { RETURN_QUICK_DECLARE_CYCLE_STAT(UMGAsyncTask, STARTGROUP_ThreadPoolAsyncTasks); }
		//RETURN_QUICK_DECLARE_CYCLE_STAT(UMGAsyncTask, FStatGroup_STATGROUP_ThreadPoolAsyncTasks);


	void DoWork()
	{
		for (int32 i = 0; i < Subs.Num(); i++)
		{
			FPlatformProcess::Sleep(Subs[i].AssociatedTime);

			DialogUI->SubtitleToDisplay = Subs[i].Subtitle;
		}

		FPlatformProcess::Sleep(1.f);

		DialogUI->SubtitleToDisplay = FString("");
	}*/
};