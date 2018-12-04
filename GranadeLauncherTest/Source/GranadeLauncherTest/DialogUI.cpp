// Fill out your copyright notice in the Description page of Project Settings.

#include "DialogUI.h"

void UDialogUI::UpdateSubtitles(TArray<FSubtitleStruct> Subtitles)
{
	if (!Subtitles.IsValidIndex(0)) return;

	(new FAutoDeleteAsyncTask<UMGAsyncTask>(Subtitles, this))->StartBackgroundTask();
}