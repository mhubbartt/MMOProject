#pragma once

#include "CoreMinimal.h"
#include <atomic>

class PythonManager
{
public:
	// Get the singleton instance
	static PythonManager& GetInstance();

	// Initialize Python
	bool Initialize();

	// Finalize Python
	void Finalize();

	// Check Python availability
	bool IsPythonAvailable() const;

private:
	PythonManager();
	~PythonManager();
    
	PythonManager(const PythonManager&) = delete;
	PythonManager& operator=(const PythonManager&) = delete;

	// Python availability flag
	bool bPythonAvailable;

	// Retry count for initialization
	int RetryCount;

	// Atomic instance counter for thread safety
	std::atomic<int> InstanceCount;
};
