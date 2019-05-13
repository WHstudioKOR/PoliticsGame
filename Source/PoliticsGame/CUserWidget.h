// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CUserWidget.generated.h"


/**
 * 
 */
UCLASS()
class POLITICSGAME_API UCUserWidget : public UUserWidget
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "WindowMoveTo")
		void WindowMoveTo(FVector2D Pos);

	UFUNCTION(BlueprintCallable, Category = "WindowMoveTo")
		FVector2D GetWindowPosition();
};
