// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "DoomVRHUD.generated.h"

UCLASS()
class ADoomVRHUD : public AHUD
{
	GENERATED_BODY()

public:
	ADoomVRHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

