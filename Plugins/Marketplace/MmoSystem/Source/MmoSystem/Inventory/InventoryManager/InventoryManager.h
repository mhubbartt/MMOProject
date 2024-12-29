#pragma once

#include "CoreMinimal.h"
#include "Windows/WindowsHWrapper.h"
#include "InventorySaveBlobStruct.h"
#include "mysql.h"
#include "MmoSystem/Inventory/InventoryComponent.h"
#include "InventoryManager.generated.h"


struct FInventorySaveBlobStruct;


USTRUCT(BlueprintType)
struct FDatabaseConnectionDetails
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "A WPU|Inventory Manager|Database Connection")
    FString Host;

    UPROPERTY(BlueprintReadWrite, Category = "A WPU|Inventory Manager|Database Connection")
    FString User;

    UPROPERTY(BlueprintReadWrite, Category = "A WPU|Inventory Manager|Database Connection")
    FString Password;

    UPROPERTY(BlueprintReadWrite, Category = "A WPU|Inventory Manager|Database Connection")
    FString DatabaseName;

    UPROPERTY(BlueprintReadWrite, Category = "A WPU|Inventory Manager|Database Connection")
    int32 Port = 3306;
};

USTRUCT(BlueprintType)
struct FMySQLQueryResultRow
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "A WPU|Inventory Manager|Database Query Results")
    TMap<FString, FString> Columns;
};

USTRUCT(BlueprintType)
struct FPreparedStatement
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "A WPU|Inventory Manager|Prepared Statements")
    FString Key;

    UPROPERTY(BlueprintReadOnly, Category = "A WPU|Inventory Manager|Prepared Statements")
    FString Query;
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FMySQLQueryResultDelegate, bool, bSuccess);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FMySQLQueryResultDelegateWithResults, bool, bSuccess, const TArray<FMySQLQueryResultRow>&, Results);

UCLASS()
class MMOSYSTEM_API UInventoryManager : public UInventoryComponent
{
    GENERATED_BODY()

public:
    UInventoryManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    MYSQL* GetMySQLConnection() const { return MySQLConnection; }

    bool BeginTransaction();
    bool CommitTransaction();
    bool RollbackTransaction();

    bool ExecuteQueryWithBlob(const FString& Query);
    void LoadInventoryFromDatabaseAsync(UInventoryComponent* InventoryComponent, FName InPlayerName);
    void HandleInventoryLoadingAsync(TObjectPtr<UInventoryComponent> InventoryComponent, FName InPlayerName,
                                     FInventoryLoaded Callback) ;
    void SaveInventoryToDatabaseAsync(UInventoryComponent* InventoryComponent, FName InPlayerName);

    UFUNCTION()
    void OnDatabaseConnectionCompleteSave(bool bConnectionSuccess);

    void HandleInventorySavingAsync(TObjectPtr<UInventoryComponent> InventoryComponent, FName InPlayerName,
                                    FInventorySaved Callback);

  
    void OnDatabaseConnectionCompleteLoad(bool bConnectionSuccess);

    bool SetInventoryLoaded(bool bSuccess);

    UFUNCTION()
    void OnInventoryLoaded(bool bLoadSuccess);

    bool ExecuteQuery(const FString& Query) const;
    bool NextRow(TArray<FString>& RowData) ;
    FString GetString(int32 ColumnIndex);
    int32 GetInt32(int32 ColumnIndex);
    TArray<uint8> GetBlob(int32 ColumnIndex);

    UFUNCTION(BlueprintCallable, Category = "A WPU|Inventory Manager|Database Connection")
    void ConnectToDatabaseAsync(const FDatabaseConnectionDetails& ConnectionDetails, const FMySQLQueryResultDelegate& Callback);

    UFUNCTION(BlueprintCallable, Category = "A WPU|Inventory Manager|Database Connection")
    void Disconnect();

    UFUNCTION(BlueprintCallable, Category = "A WPU|Inventory Manager|Prepared Statements")
    bool LoadPreparedStatements(const FString& FilePath);

    FMySQLQueryResultDelegate ConnectToDatabaseDelegate;
    FMySQLQueryResultDelegate QueryDatabaseDelegate;
    FInventorySaved SavedSuccessDelegate;

    UFUNCTION(BlueprintCallable, Category = "A WPU|Inventory Manager|Testing")
    void TestBlobSerialization(FName ItemName, TArray<FStatsAndEffects> InSNE, float InCondition) ;
    UFUNCTION()
    void TestDatabaseConnectionCallback(bool bConnectionSuccess);
    void TestRetrieveData(bool bConnectionSuccess);
    void TestDatabaseQueries();
    UFUNCTION(BlueprintCallable, Category = "A WPU|Inventory Manager|Testing")
    void RunInventoryTests();

    UFUNCTION(BlueprintCallable, Category = "A WPU|Inventory Manager|Testing")
    void RunSerialDeserializationTests(FName ItemName, TArray<FStatsAndEffects> Effects, float Condition, FLinearColor Color1, FLinearColor Color2);

private:
    
    MYSQL* MySQLConnection = nullptr;
    TArray<uint8> BlobData = {};
    MYSQL_RES* ResultSet = nullptr;
    TMap<FString, FPreparedStatement> PreparedStatements = {};

    void HandleConnect(const FDatabaseConnectionDetails& ConnectionDetails, const FMySQLQueryResultDelegate& Callback);
    void HandlePreparedStatementExecutionWithResults(
        const FString& StatementKey,
        const TMap<int32, FString>& Parameters,
        const FMySQLQueryResultDelegateWithResults& Callback
    );
    
    FPreparedStatement* FindPreparedStatementByKey(const FString& StatementKey);   


    // For testing
    UPROPERTY()
    FString PlayerName = "Test";   
    // Create a mock inventory item
    FInventorySaveBlobStruct MockBlob;
};
