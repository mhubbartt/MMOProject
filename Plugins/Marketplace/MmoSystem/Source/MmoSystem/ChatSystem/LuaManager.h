#pragma once

#include "CoreMinimal.h"
#include "LuaManager.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLuaStateResetDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLuaReloadedDelegate);

UCLASS(Blueprintable)
class MMOSYSTEM_API ULuaManager : public UObject
{
	GENERATED_BODY()

public:
	ULuaManager();
	

	virtual void BeginDestroy() override;

	UPROPERTY(BlueprintAssignable, Category = "Lua")
	FLuaStateResetDelegate OnLuaStateReset;

	UPROPERTY(BlueprintAssignable, Category = "Lua")
	FLuaReloadedDelegate OnLuaReloaded;

	bool LoadDefaultScript();
	UFUNCTION(BlueprintCallable, Category = "Lua")
	bool InitializeLua();

	UFUNCTION(BlueprintCallable, Category = "Lua")
	FString ExecuteLuaScript(const FString& Script);

	// Add method for hot-reloading Lua scripts
	UFUNCTION(BlueprintCallable, Category = "Lua")
	bool ReloadScript();
	void ResetLuaState();

	UFUNCTION(BlueprintCallable, Category = "Lua")
	bool ValidateScriptPath(const FString& ScriptPath) const;
	bool IsInitialized() const;

private:
	struct lua_State* LuaState;
};