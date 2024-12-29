#pragma once


/*

#include "CoreMinimal.h"
#include "Misc/ScopeLock.h"

namespace ULogger
{
    // Define Log Level Enum
    enum class EMSLogLevel : uint8
    {
        Error = 0,
        Warning,
        Log,
        Verbose
    };

    // Global Log Level (modifiable at runtime)
    inline EMSLogLevel CurrentLogLevel = EMSLogLevel::Log;

    // Mutex for Thread Safety
    inline FCriticalSection LogMutex;

    // Utility to Get Network Mode from World Context
    inline FString GetNetMode(const UObject* WorldContext)
    {
        if (!GEngine || !WorldContext) return TEXT("[Unknown]");

        UWorld* World = WorldContext->GetWorld();
        if (!World) return TEXT("[Unknown]");

        ENetMode NetMode = GEngine->GetNetMode(World);
        switch (NetMode)
        {
            case NM_Client: return TEXT("[Client]");
            case NM_ListenServer: return TEXT("[ListenServer]");
            case NM_DedicatedServer: return TEXT("[DedicatedServer]");
            case NM_Standalone: return TEXT("[Standalone]");
            default: return TEXT("[Unknown]");
        }
    }

    // Internal Logging Macro (Handles NetMode inclusion)
    #define LOG_MS_INTERNAL(LogCategory, WorldContext, bEnableNetMode, Verbosity, Format, ...) \
    { \
        if (static_cast<uint8>(Verbosity) <= static_cast<uint8>(ULogger::CurrentLogLevel)) \
        { \
            FScopeLock Lock(&ULogger::LogMutex); \
            const FString NetMode = (bEnableNetMode) ? ULogger::GetNetMode(WorldContext) : TEXT(""); \
            UE_LOG(LogCategory, Verbosity, TEXT("%s%s() : %s"), *NetMode, FUNC_NAME, *FString::Printf(TEXT(Format), ##__VA_ARGS__)); \
        } \
    }

    // Internal Debug Macro (Handles On-Screen Debug Messages with Color)
    #define DEBUG_MS_INTERNAL(WorldContext, bEnableNetMode, DisplayTime, Color, Format, ...) \
    { \
        FScopeLock Lock(&ULogger::LogMutex); \
        const FString NetMode = (bEnableNetMode) ? ULogger::GetNetMode(WorldContext) : TEXT(""); \
        const FString Message = FString::Printf(TEXT("%s%s() : %s"), *NetMode, FUNC_NAME, *FString::Printf(TEXT(Format), ##__VA_ARGS__)); \
        if (GEngine) \
        { \
            GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, Message); \
        } \
    }

    // Helper Macro to Set Default for bEnableNetMode
    #define LOG_MS(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ##__VA_ARGS__)
    #define DEBUG_MS(WorldContext, DisplayTime, Color, ...) DEBUG_MS_INTERNAL(WorldContext, true, DisplayTime, Color, ##__VA_ARGS__)

    // Specific Verbosity-Level Macros with Optional bEnableNetMode
    #define LOG_MS_ERROR(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Error, ##__VA_ARGS__)
    #define LOG_MS_WARNING(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Warning, ##__VA_ARGS__)
    #define LOG_MS_LOG(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Log, ##__VA_ARGS__)

    // File Logger Instance
#define CREATE_FILE_LOGGER(TagName, OptionalFileName) \
UFileLogger FileLogger(FGameplayTag::RequestGameplayTag(TEXT(TagName)), OptionalFileName)

    // Extend Existing Macro to Include File Logging
#define LOG_MS_INTERNAL(LogCategory, WorldContext, bEnableNetMode, Verbosity, Format, ...) \
{ \
if (static_cast<uint8>(Verbosity) <= static_cast<uint8>(ULogger::CurrentLogLevel)) \
{ \
FScopeLock Lock(&ULogger::LogMutex); \
const FString NetMode = (bEnableNetMode) ? ULogger::GetNetMode(WorldContext) : TEXT(""); \
const FString Message = FString::Printf(TEXT("%s%s() : %s"), *NetMode, FUNC_NAME, *FString::Printf(TEXT(Format), ##__VA_ARGS__)); \
UE_LOG(LogCategory, Verbosity, TEXT("%s"), *Message); \
\
/* File Logging Integration #1# \
CREATE_FILE_LOGGER("GameplayTagNameHere", TEXT("")); \
FileLogger.LogToFile(Message, true); /* Async file logging #1# \
} \
}

    // Specific Verbosity-Level Macros
#define LOG_MS_ERROR(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Error, ##__VA_ARGS__)
#define LOG_MS_WARNING(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Warning, ##__VA_ARGS__)
#define LOG_MS_LOG(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Log, ##__VA_ARGS__)
}*/

/*#pragma once

#include "CoreMinimal.h"
#include "Misc/ScopeLock.h"

namespace ULogger
{

    // Define Log Level Enum
    enum class EMSLogLevel : uint8
    {
        Error = 0,
        Warning,
        Log,
        Verbose
    };

    // Global Log Level (modifiable at runtime)
    inline EMSLogLevel CurrentLogLevel = EMSLogLevel::Log;

    // Mutex for Thread Safety
    inline FCriticalSection LogMutex;

    // Utility to Get Network Mode from World Context
    inline FString GetNetMode(const UObject* WorldContext)
    {
        if (!GEngine || !WorldContext) return TEXT("[Unknown]");

        UWorld* World = WorldContext->GetWorld();
        if (!World) return TEXT("[Unknown]");

        ENetMode NetMode = GEngine->GetNetMode(World);
        switch (NetMode)
        {
            case NM_Client: return TEXT("[Client]");
            case NM_ListenServer: return TEXT("[ListenServer]");
            case NM_DedicatedServer: return TEXT("[DedicatedServer]");
            case NM_Standalone: return TEXT("[Standalone]");
            default: return TEXT("[Unknown]");
        }
    }

    // Internal Logging Macro (Handles NetMode inclusion)
    #define LOG_MS_INTERNAL(LogCategory, WorldContext, bEnableNetMode, Verbosity, Format, ...) \
    { \
        if (static_cast<uint8>(Verbosity) <= static_cast<uint8>(ULogger::CurrentLogLevel)) \
        { \
            FScopeLock Lock(&ULogger::LogMutex); \
            const FString NetMode = (bEnableNetMode) ? ULogger::GetNetMode(WorldContext) : TEXT(""); \
            UE_LOG(LogCategory, Verbosity, TEXT("%s%s() : %s"), *NetMode, FUNC_NAME, *FString::Printf(TEXT(Format), ##__VA_ARGS__)); \
        } \
    }

    // Internal Debug Macro (Handles On-Screen Debug Messages)
    #define DEBUG_MS_INTERNAL(WorldContext, bEnableNetMode, Verbosity, DisplayTime, Color, Format, ...) \
    { \
        if (static_cast<uint8>(Verbosity) <= static_cast<uint8>(ULogger::CurrentLogLevel)) \
        { \
            FScopeLock Lock(&ULogger::LogMutex); \
            const FString NetMode = (bEnableNetMode) ? ULogger::GetNetMode(WorldContext) : TEXT(""); \
            const FString Message = FString::Printf(TEXT("%s%s() : %s"), *NetMode, FUNC_NAME, *FString::Printf(TEXT(Format), ##__VA_ARGS__)); \
            if (GEngine) \
            { \
                GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, Message); \
            } \
        } \
    }

    // Helper Macro to Set Default for bEnableNetMode
    #define LOG_MS(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ##__VA_ARGS__)
    #define DEBUG_MS(WorldContext, ...) DEBUG_MS_INTERNAL(WorldContext, true, ##__VA_ARGS__)

    // Specific Verbosity-Level Macros with Optional bEnableNetMode
    #define LOG_MS_ERROR(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Error, ##__VA_ARGS__)
    #define LOG_MS_WARNING(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Warning, ##__VA_ARGS__)
    #define LOG_MS_LOG(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Log, ##__VA_ARGS__)
    #define LOG_MS_VERBOSE(LogCategory, WorldContext, ...) LOG_MS_INTERNAL(LogCategory, WorldContext, true, ELogVerbosity::Verbose, ##__VA_ARGS__)

    #define DEBUG_MS_ERROR(WorldContext, DisplayTime, Color, ...) DEBUG_MS_INTERNAL(WorldContext, true, EMSLogLevel::Error, DisplayTime, Color, ##__VA_ARGS__)
    #define DEBUG_MS_WARNING(WorldContext, DisplayTime, Color, ...) DEBUG_MS_INTERNAL(WorldContext, true, EMSLogLevel::Warning, DisplayTime, Color, ##__VA_ARGS__)
    #define DEBUG_MS_LOG(WorldContext, DisplayTime, Color, ...) DEBUG_MS_INTERNAL(WorldContext, true, EMSLogLevel::Log, DisplayTime, Color, ##__VA_ARGS__)
    #define DEBUG_MS_VERBOSE(WorldContext, DisplayTime, Color, ...) DEBUG_MS_INTERNAL(WorldContext, true, EMSLogLevel::Verbose, DisplayTime, Color, ##__VA_ARGS__)

    // Unified Log Macro by Level with Optional bEnableNetMode
    #define LOG_MS_ByLevel(LogCategory, Level, WorldContext, ...) \
    { \
        switch (Level) \
        { \
            case ULogger::EMSLogLevel::Error: \
                LOG_MS_ERROR(LogCategory, WorldContext, ##__VA_ARGS__); \
                break; \
            case ULogger::EMSLogLevel::Warning: \
                LOG_MS_WARNING(LogCategory, WorldContext, ##__VA_ARGS__); \
                break; \
            case ULogger::EMSLogLevel::Log: \
                LOG_MS_LOG(LogCategory, WorldContext, ##__VA_ARGS__); \
                break; \
            case ULogger::EMSLogLevel::Verbose: \
                LOG_MS_VERBOSE(LogCategory, WorldContext, ##__VA_ARGS__); \
                break; \
            default: \
                break; \
        } \
    }

    #define DEBUG_MS_ByLevel(Level, WorldContext, DisplayTime, Color, ...) \
    { \
        switch (Level) \
        { \
            case ULogger::EMSLogLevel::Error: \
                DEBUG_MS_ERROR(WorldContext, DisplayTime, Color, ##__VA_ARGS__); \
                break; \
            case ULogger::EMSLogLevel::Warning: \
                DEBUG_MS_WARNING(WorldContext, DisplayTime, Color, ##__VA_ARGS__); \
                break; \
            case ULogger::EMSLogLevel::Log: \
                DEBUG_MS_LOG(WorldContext, DisplayTime, Color, ##__VA_ARGS__); \
                break; \
            case ULogger::EMSLogLevel::Verbose: \
                DEBUG_MS_VERBOSE(WorldContext, DisplayTime, Color, ##__VA_ARGS__); \
                break; \
            default: \
                break; \
        } \
    }
}*/

// Fill out your copyright notice in the Description page of Project Settings.







/*namespace ULoggerSystem
{


  // Define Logging Categories 
  
  ULOGGER_API DECLARE_LOG_CATEGORY_EXTERN(LogULoggerSystem, All, All);
  ULOGGER_API DECLARE_LOG_CATEGORY_EXTERN(LogULoggerTemp, All, All);
  
// Define Network Modes for Logging
// This macro evaluates the network mode of the current Unreal Engine world context.
// Depending on the result, it appends a corresponding label to log messages, indicating the running environment:
//   - [Client]: Running as a client.
//   - [ListenServer]: Running as a server that can also host clients.
//   - [DedicatedServer]: Running purely as a server.
//   - [Standalone]: Running independently without networking.
#define NET_MODE_WORLD ((GEngine == nullptr || GetWorld() == nullptr) ? TEXT("") \
: (GEngine->GetNetMode(GetWorld()) == NM_Client) ? TEXT("[Client] ") \
: (GEngine->GetNetMode(GetWorld()) == NM_ListenServer) ? TEXT("[ListenServer] ") \
: (GEngine->GetNetMode(GetWorld()) == NM_DedicatedServer) ? TEXT("[DedicatedServer] ") \
: TEXT("[Standalone] "))

// Define Function Name Macro
// This macro retrieves the function name as a string. It uses the compiler-specific preprocessor directive:
//   - TEXT(__FUNCTION__) for MSVC compilers.
//   - TEXT(__func__) for non-MSVC compilers.
// This ensures compatibility across different platforms.
#if _MSC_VER
#define FUNC_NAME TEXT(__FUNCTION__)
#else
#define FUNC_NAME TEXT(__func__)
#endif

/* Log Macro Definitions
These macros standardize the format of log messages with additional context:
  - Network mode, function name, class instance, log category, and message.
  - Colors for log types to enhance clarity.
#1#

// Log with Network Mode and Function Context
// MMO_SYSTEM_LOG_NF outputs a message prefixed by the network mode, function name, and optional log message.
//   - `LogCategory`: The category under which the log falls (e.g., LogMmoSystem).
//   - `Color`: ANSI color code for the log (e.g., COLOR_RED).
//   - `Format`: Message template with variable interpolation.
// If no message is provided, it defaults to showing the class instance name.
#define UL_SYSTEM_LOG_NF(LogCategory,Color,Format, ...) \
{ \
SET_WARN_COLOR(Color); /* Set log text color #1# \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); /* Format the message #1# \
if (Msg == "") \
{ \
UE_LOG(LogCategory, Warning, TEXT("%s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *GetNameSafe(this)); /* Default log #1# \
} \
else \
{ \
UE_LOG(LogCategory, Warning, TEXT("%s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *Msg); /* Log with message #1# \
} \
CLEAR_WARN_COLOR(); /* Reset text color #1# \
}

  // General Log Macro with Custom Colors
  // UL_SYSTEM_LOG_CB logs messages with the calling function's name, formatted text, and user-defined text and background colors.
  //   - `LogCategory`: The category under which the log message is recorded.
  //   - `TextColor`: The color of the text in the log (e.g., COLOR_GREEN).
  //   - `BackGroundColor`: The background color of the text in the log.
  //   - `Format`: The format string for the log message, supporting variable interpolation.
  //   - `...`: Variadic arguments to populate the format string.
  // This macro ensures logs are displayed with enhanced customization for better clarity and distinction.
#define UL_SYSTEM_LOG_CB(LogCategory,TextColor,BackGroundColor,Format, ...) \
{ \
SET_WARN_COLOR_AND_BACKGROUND(TextColor,BackGroundColor); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Log, TEXT("%s() : %s"), FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// General Log Macro
// UL_SYSTEM_LOG simplifies logs with only the function name and a message.
//   - It defaults to the color GREEN for all such logs.
#define UL_SYSTEM_LOG(LogCategory,Format, ...) \
{ \
SET_WARN_COLOR(COLOR_GREEN); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Log, TEXT("%s() : %s"), FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// Warning Log Macro
// UL_SYSTEM_WARN logs warnings with the prefix "**WARNING**", network mode, and function name.
//   - The log text color defaults to YELLOW to signify a warning level.
#define UL_SYSTEM_WARN(LogCategory,Format, ...) \
{ \
SET_WARN_COLOR(COLOR_YELLOW); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Warning, TEXT("**WARNING** %s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// Error Log Macro
// UL_SYSTEM_ERROR logs errors with the prefix "**ERROR**", network mode, and function name.
//   - The log text color defaults to RED to signify an error level.
#define UL_SYSTEM_ERROR(LogCategory,Format, ...) \
{ \
SET_WARN_COLOR(COLOR_RED); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Error, TEXT("**ERROR** %s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// On-Screen Debug Log
// UL_SCREEN_DEBUG displays logs directly on the screen using the Unreal Engine's GEngine->AddOnScreenDebugMessage.
//   - If no message is provided, it defaults to logging the class instance name.
#define UL_SCREEN_DEBUG(Key,Time,Color,Format, ...) \
{ \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
if (Msg == "") \
{ \
TCHAR StdMsg[MAX_SPRINTF] = TEXT(""); \
FCString::Sprintf(StdMsg, TEXT("%s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *GetNameSafe(this)); \
GEngine->AddOnScreenDebugMessage(Key, Time, Color, StdMsg); \
} \
else \
{ \
GEngine->AddOnScreenDebugMessage(Key, Time, Color, Msg); \
} \
}

}*/


class UFileLogger;

namespace ULoggerSystem
{

   

// Define Logging Categories
MMOSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(LogULoggerSystem, All, All);
MMOSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(LogULoggerTemp, All, All);

// Define Network Modes for Logging
// This macro evaluates the network mode of the specified Unreal Engine world context.
// Depending on the result, it appends a corresponding label to log messages, indicating the running environment:
//   - [Client]: Running as a client.
//   - [ListenServer]: Running as a server that can also host clients.
//   - [DedicatedServer]: Running purely as a server.
//   - [Standalone]: Running independently without networking.
#define NET_MODE_WORLD_CONTEXT(WorldContext) \
((GEngine == nullptr || (WorldContext) == nullptr || (WorldContext)->GetWorld() == nullptr) ? TEXT("[Unknown] ") \
: (GEngine->GetNetMode((WorldContext)->GetWorld()) == NM_Client) ? TEXT("[Client] ") \
: (GEngine->GetNetMode((WorldContext)->GetWorld()) == NM_ListenServer) ? TEXT("[ListenServer] ") \
: (GEngine->GetNetMode((WorldContext)->GetWorld()) == NM_DedicatedServer) ? TEXT("[DedicatedServer] ") \
: TEXT("[Standalone] "))

// Define Function Name Macro
// This macro retrieves the function name as a string. It uses the compiler-specific preprocessor directive:
//   - TEXT(__FUNCTION__) for MSVC compilers.
//   - TEXT(__func__) for non-MSVC compilers.
// This ensures compatibility across different platforms.
#if _MSC_VER
#define FUNC_NAME TEXT(__FUNCTION__)
#else
#define FUNC_NAME TEXT(__func__)
#endif

/* Log Macro Definitions
These macros standardize the format of log messages with additional context:
  - Network mode, function name, class instance, log category, and message.
  - Colors for log types to enhance clarity.
*/

// Log with Network Mode and Function Context
// UL_SYSTEM_LOG_NF outputs a message prefixed by the network mode, function name, and optional log message.
//   - `LogCategory`: The category under which the log falls (e.g., LogULoggerSystem).
//   - `WorldContext`: The world context to evaluate network mode.
//   - `Color`: ANSI color code for the log (e.g., COLOR_RED).
//   - `Format`: Message template with variable interpolation.
// If no message is provided, it defaults to showing the class instance name.
#define UL_SYSTEM_LOG_NF(LogCategory, WorldContext, Color, Format, ...) \
{ \
SET_WARN_COLOR(Color); /* Set log text color */ \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); /* Format the message */ \
if (Msg.IsEmpty()) \
{ \
UE_LOG(LogCategory, Warning, TEXT("%s%s() : %s"), NET_MODE_WORLD_CONTEXT(WorldContext), FUNC_NAME, *GetNameSafe(this)); /* Default log */ \
} \
else \
{ \
UE_LOG(LogCategory, Warning, TEXT("%s%s() : %s"), NET_MODE_WORLD_CONTEXT(WorldContext), FUNC_NAME, *Msg); /* Log with message */ \
} \
CLEAR_WARN_COLOR(); /* Reset text color */ \
}

// General Log Macro with Custom Colors
// UL_SYSTEM_LOG_CB logs messages with the calling function's name, formatted text, and user-defined text and background colors.
//   - `LogCategory`: The category under which the log message is recorded.
//   - `WorldContext`: The world context to evaluate network mode.
//   - `TextColor`: The color of the text in the log (e.g., COLOR_GREEN).
//   - `BackGroundColor`: The background color of the text in the log.
//   - `Format`: The format string for the log message, supporting variable interpolation.
//   - `...`: Variadic arguments to populate the format string.
// This macro ensures logs are displayed with enhanced customization for better clarity and distinction.
#define UL_SYSTEM_LOG_CB(LogCategory, WorldContext, TextColor, BackGroundColor, Format, ...) \
{ \
SET_WARN_COLOR_AND_BACKGROUND(TextColor, BackGroundColor); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Log, TEXT("%s%s() : %s"), NET_MODE_WORLD_CONTEXT(WorldContext), FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// General Log Macro
// UL_SYSTEM_LOG simplifies logs with only the function name and a message.
//   - It defaults to the color GREEN for all such logs.
#define UL_SYSTEM_LOG(LogCategory, WorldContext, Format, ...) \
{ \
SET_WARN_COLOR(COLOR_GREEN); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Log, TEXT("%s%s() : %s"), NET_MODE_WORLD_CONTEXT(WorldContext), FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// Warning Log Macro
// UL_SYSTEM_WARN logs warnings with the prefix "**WARNING**", network mode, and function name.
//   - The log text color defaults to YELLOW to signify a warning level.
#define UL_SYSTEM_WARN(LogCategory, WorldContext, Format, ...) \
{ \
SET_WARN_COLOR(COLOR_YELLOW); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Warning, TEXT("**WARNING** %s%s() : %s"), NET_MODE_WORLD_CONTEXT(WorldContext), FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// Error Log Macro
// UL_SYSTEM_ERROR logs errors with the prefix "**ERROR**", network mode, and function name.
//   - The log text color defaults to RED to signify an error level.
#define UL_SYSTEM_ERROR(LogCategory, WorldContext, Format, ...) \
{ \
SET_WARN_COLOR(COLOR_RED); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Error, TEXT("**ERROR** %s%s() : %s"), NET_MODE_WORLD_CONTEXT(WorldContext), FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// On-Screen Debug Log
// UL_SCREEN_DEBUG displays logs directly on the screen using the Unreal Engine's GEngine->AddOnScreenDebugMessage.
//   - `WorldContext`: The world context to evaluate network mode.
//   - `Key`: A unique identifier for the debug message.
//   - `Time`: The duration (in seconds) that the message should remain visible on screen.
//   - `Color`: The display color of the debug message (e.g., FColor::Red).
//   - `Format`: The format string for the debug message, supporting variable interpolation.
//   - `...`: Variadic arguments to populate the format string.
#define UL_SCREEN_DEBUG(WorldContext, Key, Time, Color, Format, ...) \
{ \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
if (Msg.IsEmpty()) \
{ \
TCHAR StdMsg[MAX_SPRINTF] = TEXT(""); \
FCString::Sprintf(StdMsg, TEXT("%s%s() : %s"), NET_MODE_WORLD_CONTEXT(WorldContext), FUNC_NAME, *GetNameSafe(this)); \
GEngine->AddOnScreenDebugMessage(Key, Time, Color, StdMsg); \
} \
else \
{ \
GEngine->AddOnScreenDebugMessage(Key, Time, Color, Msg); \
} \
}

}

