// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Framework/Commands/Commands.h"
#include "MmoSystemEditorStyle.h"

class FMmoSystemEditorCommands : public TCommands<FMmoSystemEditorCommands>
{
public:

	FMmoSystemEditorCommands()
		: TCommands<FMmoSystemEditorCommands>(TEXT("MmoSystemEditor"), NSLOCTEXT("Contexts", "MmoSystemEditor", "MmoSystemEditor Plugin"), NAME_None, FMmoSystemEditorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
