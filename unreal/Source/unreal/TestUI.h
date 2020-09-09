// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "TestUI.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_API UTestUI : public UUserWidget
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadWrite, Meta = (BindWidget))
	UImage* TestImage;

	virtual void NativeOnInitialized() override;
};
