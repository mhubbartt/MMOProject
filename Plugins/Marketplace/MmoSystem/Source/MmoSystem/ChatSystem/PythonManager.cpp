#include "PythonManager.h"
#include "Python.h"
#include "ChatSettings.h"
#include <chrono>

// Singleton instance
static PythonManager* SingletonInstance = nullptr;

PythonManager& PythonManager::GetInstance()
{
    if (!SingletonInstance)
    {
        SingletonInstance = new PythonManager();
    }
    return *SingletonInstance;
}

PythonManager::PythonManager()
    : bPythonAvailable(false), RetryCount(3), InstanceCount(0)
{
    const UChatSettings* Settings = GetDefault<UChatSettings>();
    if (Settings)
    {
        RetryCount = Settings->MaxChatHistory; // Assume a dedicated setting for retries exists
    }
}

PythonManager::~PythonManager()
{
    Finalize();
}

bool PythonManager::Initialize()
{
    if (InstanceCount.fetch_add(1) == 0)
    {
        bool bInitialized = false;

        for (int Attempt = 1; Attempt <= RetryCount; ++Attempt)
        {
            Py_Initialize();
            if (Py_IsInitialized())
            {
                UE_LOG(LogTemp, Log, TEXT("Python initialized successfully on attempt %d."), Attempt);
                bInitialized = true;
                bPythonAvailable = true;
                break;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Python initialization failed on attempt %d."), Attempt);
            }
        }

        if (!bInitialized)
        {
            UE_LOG(LogTemp, Error, TEXT("Python failed to initialize after %d attempts. Disabling Python-dependent features."), RetryCount);
            bPythonAvailable = false;
        }
    }
    return bPythonAvailable;
}

void PythonManager::Finalize()
{
    if (InstanceCount.fetch_sub(1) == 1 && bPythonAvailable)
    {
        Py_Finalize();
        if (!Py_IsInitialized())
        {
            UE_LOG(LogTemp, Log, TEXT("Python finalized successfully."));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Python finalization failed."));
        }
    }
}

bool PythonManager::IsPythonAvailable() const
{
    return bPythonAvailable;
}

