// Fill out your copyright notice in the Description page of Project Settings.


#include "Test01.h"

void UTest01::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	UTexture* Texture = LoadObject<UTexture>(GetTransientPackage(), TEXT("/Game/TestTexture.TestTexture"));
	UMaterial* Material = LoadObject<UMaterial>(GetTransientPackage(), TEXT("/Game/UIMaterial.UIMaterial"));
	UMaterialInstanceDynamic* MaterialDynamic = UMaterialInstanceDynamic::Create(Material, GetTransientPackage());
	MaterialDynamic->SetTextureParameterValue(TEXT("TexObject"), Texture);
	MaterialDynamic->SetScalarParameterValue(TEXT("Rate"), 0.3);
	// MaterialDynamic->SetScalarParameterValue(TEXT("Rate"), 0.1);
	// MaterialDynamic->SetScalarParameterValue(TEXT("Rate"), 0.5);
	// MaterialDynamic->SetScalarParameterValue(TEXT("Rate"), 0.9);

	FSlateBrush Brush = FSlateBrush();
	Brush.SetResourceObject(MaterialDynamic);
	TestImage->SetBrush(Brush);

}