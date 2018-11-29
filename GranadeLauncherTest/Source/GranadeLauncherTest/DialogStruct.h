// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object.h"
#include "Engine/DataTable.h"
#include "SubtitleStruct.h"
#include "DialogStruct.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct FDialogStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
		FString QuestionExcerpt;

	UPROPERTY(EditAnywhere)
		TArray<FSubtitleStruct> Subtitles;

	UPROPERTY(EditAnywhere)
		bool bShouldAIAnswer;


};
