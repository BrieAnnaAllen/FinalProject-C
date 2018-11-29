// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SubtitleStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FSubtitleStruct : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
		FString Subtitle;

	UPROPERTY(EditAnywhere)
		float AssociatedTime;
};
