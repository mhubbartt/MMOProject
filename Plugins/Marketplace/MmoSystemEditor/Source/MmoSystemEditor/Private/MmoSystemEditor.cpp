// Copyright Epic Games, Inc. All Rights Reserved.

#include "MmoSystemEditor.h"
#include "MmoSystemEditorStyle.h"
#include "MmoSystemEditorCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

static const FName MmoSystemEditorTabName("MmoSystemEditor");

#define LOCTEXT_NAMESPACE "FMmoSystemEditorModule"

void FMmoSystemEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FMmoSystemEditorStyle::Initialize();
	FMmoSystemEditorStyle::ReloadTextures();

	FMmoSystemEditorCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FMmoSystemEditorCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FMmoSystemEditorModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FMmoSystemEditorModule::RegisterMenus));
}

void FMmoSystemEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FMmoSystemEditorStyle::Shutdown();

	FMmoSystemEditorCommands::Unregister();
}

void FMmoSystemEditorModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FMmoSystemEditorModule::PluginButtonClicked()")),
							FText::FromString(TEXT("MmoSystemEditor.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
}

void FMmoSystemEditorModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FMmoSystemEditorCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FMmoSystemEditorCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMmoSystemEditorModule, MmoSystemEditor)