#include "LuaManager.h"
extern "C" {
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}


DEFINE_LOG_CATEGORY_STATIC(LuaManagerLog, Log, All);


ULuaManager::ULuaManager()
{
	LuaState = nullptr;
}



void ULuaManager::BeginDestroy()
{

	if (LuaState)
	{
		lua_close(LuaState);
		LuaState = nullptr;
	}
	UObject::BeginDestroy();
}

bool ULuaManager::InitializeLua()
{

	if (LuaState)
	{
		UE_LOG(LuaManagerLog, Warning, TEXT("LuaState already initialized."));
		return true;
	}

	LuaState = luaL_newstate();
	if (!LuaState)
	{
		UE_LOG(LuaManagerLog, Error, TEXT("Failed to initialize LuaState."));
		return false;
	}
	luaL_openlibs(LuaState);

	FString ScriptPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Scripts/ChatCommands.lua"));
	if (!FPaths::FileExists(ScriptPath))
	{
		UE_LOG(LuaManagerLog, Warning, TEXT("Lua script not found, using default."));
		return LoadDefaultScript();
	}

	if (luaL_loadfile(LuaState, TCHAR_TO_UTF8(*ScriptPath)) || lua_pcall(LuaState, 0, 0, 0))
	{
		UE_LOG(LuaManagerLog, Error, TEXT("Failed to load Lua script: %s"), UTF8_TO_TCHAR(lua_tostring(LuaState, -1)));
		ResetLuaState(); // Reset on failure
		return false;
	}

	UE_LOG(LuaManagerLog, Log, TEXT("Lua script loaded successfully."));
	return true;
}

FString ULuaManager::ExecuteLuaScript(const FString& Script)
{
	if (luaL_loadstring(LuaState, TCHAR_TO_UTF8(*Script)) || lua_pcall(LuaState, 0, 1, 0))
	{
		const char* Error = lua_tostring(LuaState, -1);
		lua_pop(LuaState, 1);
		return FString::Printf(TEXT("Lua Error: %s"), UTF8_TO_TCHAR(Error));
	}

	const char* Result = lua_tostring(LuaState, -1);
	FString LuaResult = UTF8_TO_TCHAR(Result);
	lua_pop(LuaState, 1);
	return LuaResult;
}

bool ULuaManager::ReloadScript()
{
	FString ScriptPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("Scripts/ChatCommands.lua"));

	if (!ValidateScriptPath(ScriptPath))
	{
		return false;
	}

	ResetLuaState();

	if (luaL_loadfile(LuaState, TCHAR_TO_UTF8(*ScriptPath)) || lua_pcall(LuaState, 0, 0, 0))
	{
		const char* Error = lua_tostring(LuaState, -1);
		UE_LOG(LuaManagerLog, Error, TEXT("Failed to reload Lua script: %s"), UTF8_TO_TCHAR(Error));
		lua_pop(LuaState, 1);
		return false;
	}

	UE_LOG(LuaManagerLog, Log, TEXT("Lua script reloaded successfully from %s"), *ScriptPath);
	return true;
}

void ULuaManager::ResetLuaState()
{
	if (LuaState)
	{
		lua_close(LuaState);
	}
	LuaState = luaL_newstate();
	luaL_openlibs(LuaState);

	OnLuaStateReset.Broadcast(); // Notify listeners
	UE_LOG(LuaManagerLog, Warning, TEXT("Lua state has been reset."));
}

bool ULuaManager::ValidateScriptPath(const FString& ScriptPath) const
{
	if (!FPaths::FileExists(ScriptPath))
	{
		UE_LOG(LuaManagerLog, Error, TEXT("Lua script not found at %s. Please ensure the file exists."), *ScriptPath);
		return false;
	}

	UE_LOG(LuaManagerLog, Log, TEXT("Validated Lua script path: %s"), *ScriptPath);
	return true;
}

bool ULuaManager::IsInitialized() const
{
	return LuaState != nullptr;
}

bool ULuaManager::LoadDefaultScript()
{
	const char* DefaultScript = R"(
        function handleMessage(message)
            return "Default: Received " .. message
        end
    )";

	if (luaL_loadstring(LuaState, DefaultScript) || lua_pcall(LuaState, 0, 0, 0))
	{
		const char* Error = lua_tostring(LuaState, -1);
		UE_LOG(LuaManagerLog, Error, TEXT("Failed to load default script: %s"), UTF8_TO_TCHAR(Error));
		ResetLuaState();
		return false;
	}

	return true;
}