// Copyright Epic Games, Inc. All Rights Reserved.

#include "MmoSystemEditorCommands.h"

#define LOCTEXT_NAMESPACE "FMmoSystemEditorModule"

void FMmoSystemEditorCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "MmoSystemEditor", "Execute MmoSystemEditor action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
