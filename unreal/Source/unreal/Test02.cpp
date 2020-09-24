// Fill out your copyright notice in the Description page of Project Settings.


#include "Test02.h"

void UTest02::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	UTexture* Texture = LoadObject<UTexture>(GetTransientPackage(), TEXT("/Game/TestTexture.TestTexture"));
	UMaterial* Material = LoadObject<UMaterial>(GetTransientPackage(), TEXT("/Game/UIMaterial.UIMaterial"));
	UMaterialInstanceDynamic* MaterialDynamic = UMaterialInstanceDynamic::Create(Material, GetTransientPackage());
	MaterialDynamic->SetTextureParameterValue(TEXT("TexObject"), Texture);

	MaterialDynamic->SetScalarParameterValue(TEXT("AlphaSwitch"), 0);
	// MaterialDynamic->SetScalarParameterValue(TEXT("AlphaSwitch"), 1);
	MaterialDynamic->SetScalarParameterValue(TEXT("Rate"), 0.2);

	FSlateBrush Brush = FSlateBrush();
	Brush.SetResourceObject(MaterialDynamic);
	TestImage->SetBrush(Brush);

}