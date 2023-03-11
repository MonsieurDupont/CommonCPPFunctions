// Copyright 2023 Monsieur Dupond. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FCommonCPPFunctionsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
