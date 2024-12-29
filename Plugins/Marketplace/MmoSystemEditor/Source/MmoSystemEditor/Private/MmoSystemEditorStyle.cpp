// Copyright Epic Games, Inc. All Rights Reserved.

#include "MmoSystemEditorStyle.h"
#include "MmoSystemEditor.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FMmoSystemEditorStyle::StyleInstance = nullptr;

void FMmoSystemEditorStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FMmoSystemEditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FMmoSystemEditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("MmoSystemEditorStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FMmoSystemEditorStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("MmoSystemEditorStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("MmoSystemEditor")->GetBaseDir() / TEXT("Resources"));

	Style->Set("MmoSystemEditor.PluginAction", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));
	return Style;
}

void FMmoSystemEditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FMmoSystemEditorStyle::Get()
{
	return *StyleInstance;
}
