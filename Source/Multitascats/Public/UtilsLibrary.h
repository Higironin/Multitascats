// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilsLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MULTITASCATS_API UUtilsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="MyUtils")
	static void SetMobileOrientationLandscape();

	UFUNCTION(BlueprintCallable, Category="MyUtils")
	static void SetMobileOrientationPortrait();
	
};
