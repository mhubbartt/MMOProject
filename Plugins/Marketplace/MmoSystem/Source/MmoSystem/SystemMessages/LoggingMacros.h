// Fill out your copyright notice in the Description page of Project Settings.

#pragma once





namespace MSGlobal
{


  // Define Logging Categories
  // This macro declares a logging category named "LogMmoSystem" with default verbosity set to display all messages (All).
  // MMOSYSTEM_API is likely a specifier for export/import in DLL builds, enabling cross-module usage of the log category.
  
  MMOSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(LogMmoSystem, All, All);
  MMOSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(LogMSInventorySystem, All, All);
  MMOSYSTEM_API DECLARE_LOG_CATEGORY_EXTERN(LogMSPlayerCharacter,All,All);

  
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
*/

// Log with Network Mode and Function Context
// MMO_SYSTEM_LOG_NF outputs a message prefixed by the network mode, function name, and optional log message.
//   - `LogCategory`: The category under which the log falls (e.g., LogMmoSystem).
//   - `Color`: ANSI color code for the log (e.g., COLOR_RED).
//   - `Format`: Message template with variable interpolation.
// If no message is provided, it defaults to showing the class instance name.
#define MMO_SYSTEM_LOG_NF(LogCategory,Color,Format, ...) \
{ \
SET_WARN_COLOR(Color); /* Set log text color */ \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); /* Format the message */ \
if (Msg == "") \
{ \
UE_LOG(LogCategory, Warning, TEXT("%s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *GetNameSafe(this)); /* Default log */ \
} \
else \
{ \
UE_LOG(LogCategory, Warning, TEXT("%s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *Msg); /* Log with message */ \
} \
CLEAR_WARN_COLOR(); /* Reset text color */ \
}

  // General Log Macro with Custom Colors
  // MMO_SYSTEM_LOG_CB logs messages with the calling function's name, formatted text, and user-defined text and background colors.
  //   - `LogCategory`: The category under which the log message is recorded.
  //   - `TextColor`: The color of the text in the log (e.g., COLOR_GREEN).
  //   - `BackGroundColor`: The background color of the text in the log.
  //   - `Format`: The format string for the log message, supporting variable interpolation.
  //   - `...`: Variadic arguments to populate the format string.
  // This macro ensures logs are displayed with enhanced customization for better clarity and distinction.
#define MMO_SYSTEM_LOG_CB(LogCategory,TextColor,BackGroundColor,Format, ...) \
{ \
SET_WARN_COLOR_AND_BACKGROUND(TextColor,BackGroundColor); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Log, TEXT("%s() : %s"), FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// General Log Macro
// MMO_SYSTEM_LOG simplifies logs with only the function name and a message.
//   - It defaults to the color GREEN for all such logs.
#define MMO_SYSTEM_LOG(LogCategory,Format, ...) \
{ \
SET_WARN_COLOR(COLOR_GREEN); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogCategory, Log, TEXT("%s() : %s"), FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// Warning Log Macro
// MMO_SYSTEM_WARN logs warnings with the prefix "**WARNING**", network mode, and function name.
//   - The log text color defaults to YELLOW to signify a warning level.
#define MMO_SYSTEM_WARN(LogCategory,Format, ...) \
{ \
SET_WARN_COLOR(COLOR_YELLOW); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogMmoSystem, Warning, TEXT("**WARNING** %s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// Error Log Macro
// MMO_SYSTEM_ERROR logs errors with the prefix "**ERROR**", network mode, and function name.
//   - The log text color defaults to RED to signify an error level.
#define MMO_SYSTEM_ERROR(LogCategory,Format, ...) \
{ \
SET_WARN_COLOR(COLOR_RED); \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
UE_LOG(LogMmoSystem, Error, TEXT("**ERROR** %s%s() : %s"), NET_MODE_WORLD, FUNC_NAME, *Msg); \
CLEAR_WARN_COLOR(); \
}

// On-Screen Debug Log
// MMO_SCREEN_DEBUG displays logs directly on the screen using the Unreal Engine's GEngine->AddOnScreenDebugMessage.
//   - If no message is provided, it defaults to logging the class instance name.
#define MMO_SCREEN_DEBUG(Key,Time,Color,Format, ...) \
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

  // On-Screen Debug Log
  // MMO_INVENTORY_DEBUG displays messages directly on the screen using Unreal Engine's GEngine->AddOnScreenDebugMessage.
  //   - `Key`: A unique identifier for the debug message (useful for updating or removing it later).
  //   - `Time`: The duration (in seconds) that the message should remain visible on screen.
  //   - `Color`: The display color of the debug message (e.g., FColor::Red).
  //   - `Format`: The format string for the debug message, supporting variable interpolation.
  //   - `...`: Variadic arguments to populate the format string.
  // If no message is provided, it defaults to logging the network mode and the function's name.
#define MMO_INVENTORY_DEBUG(Key,Time,Color,Format, ...) \
{ \
const FString Msg = FString::Printf(TEXT(Format), ##__VA_ARGS__); \
TCHAR StdMsg[MAX_SPRINTF] = TEXT(""); \
if (Msg.IsEmpty()) \
{ \
FCString::Sprintf(StdMsg, TEXT("%s : No message provided."), NET_MODE_WORLD); \
} \
else \
{ \
FCString::Sprintf(StdMsg, TEXT("%s : %s"), NET_MODE_WORLD, *Msg); \
} \
if (GEngine) \
{ \
GEngine->AddOnScreenDebugMessage(Key, Time, Color, StdMsg); \
} \
}

}

