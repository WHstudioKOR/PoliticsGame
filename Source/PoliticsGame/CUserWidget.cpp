// Fill out your copyright notice in the Description page of Project Settings.

#include "CUserWidget.h"
#include "Runtime/Core/Public/Misc/CString.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"

void UCUserWidget::WindowMoveTo(FVector2D Pos)
{
	if (GEngine && GEngine->GameViewport)
	{
		GEngine->GameViewport->GetWindow()->MoveWindowTo(Pos);
	}
}

FVector2D UCUserWidget::GetWindowPosition()
{
//	GEngine->GameViewport->GetWindow()->position
}