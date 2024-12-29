

#include "InventoryManager.h"
#include "InventorySaveBlobStruct.h"
#include "Async/Async.h"
#include "Misc/FileHelper.h"
#include "MmoSystem/GlobalsNTags.h"
#include "MmoSystem/SystemMessages/LoggingMacros.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"


using namespace MSGlobal;



UInventoryManager::UInventoryManager(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) { MySQLConnection = nullptr; }



void UInventoryManager::ConnectToDatabaseAsync(const FDatabaseConnectionDetails& ConnectionDetails,
                                               const FMySQLQueryResultDelegate& Callback) {
    if (MySQLConnection)
    {
        MMO_SYSTEM_WARN(LogMSInventorySystem, "MySQL is already connected.");
        TArray<uint8> none;
        Callback.ExecuteIfBound(true);
        return;
    }

    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, ConnectionDetails, Callback]()
    {
        HandleConnect(ConnectionDetails, Callback);
    });
}

void UInventoryManager::HandleConnect(const FDatabaseConnectionDetails& ConnectionDetails,
                                      const FMySQLQueryResultDelegate& Callback) {
    MYSQL* TempConnection = mysql_init(nullptr);
    if (!TempConnection)
    {
        MMO_SYSTEM_WARN(LogMSInventorySystem, "Failed to initialize MySQL connection.");
        AsyncTask(ENamedThreads::GameThread, [Callback]() { Callback.ExecuteIfBound(false); });
        return;
    }
    FString DB = "DB_CharInv";
    if (!mysql_real_connect(
        TempConnection,
        TCHAR_TO_UTF8(*ConnectionDetails.Host),
        TCHAR_TO_UTF8(*ConnectionDetails.User),
        TCHAR_TO_UTF8(*ConnectionDetails.Password),
        TCHAR_TO_UTF8(*DB),
        ConnectionDetails.Port, nullptr, 0))
    {
        FString ErrorMsg = UTF8_TO_TCHAR(mysql_error(TempConnection));
        MMO_SYSTEM_WARN(LogMSInventorySystem, "MySQL connection failed: %s", *ErrorMsg);
        mysql_close(TempConnection);
        AsyncTask(ENamedThreads::GameThread, [Callback]() { Callback.ExecuteIfBound(false); });
        return;
    }

    MySQLConnection = TempConnection;
    MMO_SYSTEM_WARN(LogMSInventorySystem, "Successfully connected to MySQL database.");
    AsyncTask(ENamedThreads::GameThread, [Callback]() { Callback.ExecuteIfBound(true); });
}

void UInventoryManager::Disconnect() {
    if (MySQLConnection)
    {
        mysql_close(MySQLConnection);
        MySQLConnection = nullptr;
        MMO_SYSTEM_WARN(LogMSInventorySystem, "Disconnected from MySQL database.");
    }
}

bool UInventoryManager::LoadPreparedStatements(const FString& FilePath) {
    FString JsonContent;
    if (!FFileHelper::LoadFileToString(JsonContent, *FilePath))
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "Failed to load prepared statements file: %s", *FilePath);
        return false;
    }

    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonContent);

    if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "Failed to parse prepared statements JSON.");
        return false;
    }

    PreparedStatements.Empty();

    for (const auto& Pair : JsonObject->Values)
    {
        if (Pair.Value->Type == EJson::String)
        {
            FPreparedStatement Statement;
            Statement.Key = Pair.Key;
            Statement.Query = Pair.Value->AsString();
            PreparedStatements.Add(Statement.Key, Statement);
            MMO_SYSTEM_LOG(LogMSInventorySystem, "Loaded prepared statement: %s", *Statement.Key);
        }
        else { MMO_SYSTEM_WARN(LogMSInventorySystem, "Skipping non-string prepared statement: %s", *Pair.Key); }
    }

    MMO_SYSTEM_LOG(LogMSInventorySystem, "Prepared statements loaded successfully.");
    return true;
}



void UInventoryManager::HandlePreparedStatementExecutionWithResults(const FString& StatementKey,
                                                                    const TMap<int32, FString>& Parameters,
                                                                    const FMySQLQueryResultDelegateWithResults& Callback) {
    FPreparedStatement* Statement = FindPreparedStatementByKey(StatementKey);

    if (!Statement)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "Prepared statement not found: %s", *StatementKey);
        AsyncTask(ENamedThreads::GameThread, [Callback]() { Callback.ExecuteIfBound(false, {}); });
        return;
    }

    MYSQL_STMT* MySQLStatement = mysql_stmt_init(MySQLConnection);
    if (!MySQLStatement || mysql_stmt_prepare(MySQLStatement, TCHAR_TO_UTF8(*Statement->Query), Statement->Query.Len()) != 0)
    {
        FString ErrorMsg = UTF8_TO_TCHAR(mysql_stmt_error(MySQLStatement));
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "Failed to prepare MySQL statement: %s", *ErrorMsg);
        if (MySQLStatement) { mysql_stmt_close(MySQLStatement); }
        AsyncTask(ENamedThreads::GameThread, [Callback]() { Callback.ExecuteIfBound(false, {}); });
        return;
    }

    TArray<MYSQL_BIND> Binds;
    Binds.SetNum(Parameters.Num());

    int32 Index = 0;
    for (const auto& Pair : Parameters)
    {
        MYSQL_BIND& Bind = Binds[Index++];
        FMemory::Memzero(Bind);

        Bind.buffer_type = MYSQL_TYPE_STRING;
        Bind.buffer = static_cast<void*>(TCHAR_TO_UTF8(*Pair.Value));
        Bind.buffer_length = Pair.Value.Len();
    }

    if (mysql_stmt_bind_param(MySQLStatement, Binds.GetData()) != 0 || mysql_stmt_execute(MySQLStatement) != 0)
    {
        FString ErrorMsg = UTF8_TO_TCHAR(mysql_stmt_error(MySQLStatement));
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "Failed to execute MySQL statement: %s", *ErrorMsg);
        mysql_stmt_close(MySQLStatement);
        AsyncTask(ENamedThreads::GameThread, [Callback]() { Callback.ExecuteIfBound(false, {}); });
        return;
    }

    MYSQL_RES* Result = mysql_store_result(MySQLConnection);
    if (!Result)
    {
        FString ErrorMsg = UTF8_TO_TCHAR(mysql_error(MySQLConnection));
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "Failed to retrieve result set: %s", *ErrorMsg);
        mysql_stmt_close(MySQLStatement);
        AsyncTask(ENamedThreads::GameThread, [Callback]() { Callback.ExecuteIfBound(false, {}); });
        return;
    }

    TArray<FMySQLQueryResultRow> ResultRows;
    MYSQL_ROW Row = mysql_fetch_row(Result);
    while ((Row == mysql_fetch_row(Result)))
    {
        FMySQLQueryResultRow ResultRow;
        MYSQL_FIELD* Fields = mysql_fetch_fields(Result);

        for (unsigned int i = 0; i < mysql_num_fields(Result); ++i)
        {
            ResultRow.Columns.Add(UTF8_TO_TCHAR(Fields[i].name), UTF8_TO_TCHAR(Row[i]));
        }

        ResultRows.Add(ResultRow);
    }

    mysql_free_result(Result);
    mysql_stmt_close(MySQLStatement);

    AsyncTask(ENamedThreads::GameThread, [Callback, ResultRows]() { Callback.ExecuteIfBound(true, ResultRows); });
}

FPreparedStatement* UInventoryManager::FindPreparedStatementByKey(const FString& StatementKey) {
    return PreparedStatements.Find(StatementKey);
}

bool UInventoryManager::ExecuteQuery(const FString& Query) const {
    if (!MySQLConnection)
    {
        MMO_SYSTEM_WARN(LogMSInventorySystem, "ExecuteQuery failed: Not connected to MySQL.");
        return false;
    }

    if (mysql_query(MySQLConnection, TCHAR_TO_UTF8(*Query)) != 0)
    {
        FString ErrorMsg = UTF8_TO_TCHAR(mysql_error(MySQLConnection));
        MMO_SYSTEM_WARN(LogMSInventorySystem, "ExecuteQuery failed: %s ", *ErrorMsg);
        return false;
    }
    MMO_SYSTEM_WARN(LogMSInventorySystem, "Query executed successfully: %s", *Query);
    return true;
}

bool UInventoryManager::NextRow(TArray<FString>& RowData) {
    if (!ResultSet)
    {
        ResultSet = mysql_store_result(MySQLConnection);
        if (!ResultSet)
        {
            FString ErrorMsg = UTF8_TO_TCHAR(mysql_error(MySQLConnection));
            MMO_SYSTEM_WARN(LogMSInventorySystem, "Failed to fetch result set: %s", *ErrorMsg);
            return false;
        }
    }

    MYSQL_ROW Row = mysql_fetch_row(ResultSet);
    if (!Row)
    {
        mysql_free_result(ResultSet);
        ResultSet = nullptr; // No more rows, cleanup result set
        return false;
    }

    RowData.Empty();
    unsigned long* Lengths = mysql_fetch_lengths(ResultSet);

    for (unsigned int i = 0; i < mysql_num_fields(ResultSet); ++i) { RowData.Add(Row[i] ? UTF8_TO_TCHAR(Row[i]) : FString()); }

    return true;
}

FString UInventoryManager::GetString(int32 ColumnIndex) {
    if (!ResultSet || ColumnIndex >= static_cast<int32>(mysql_num_fields(ResultSet)))
    {
        MMO_SYSTEM_WARN(LogMSInventorySystem, "Invalid column index: %d", ColumnIndex);
        return FString();
    }

    MYSQL_ROW Row = mysql_fetch_row(ResultSet);
    if (!Row || !Row[ColumnIndex]) { return FString(); }

    return UTF8_TO_TCHAR(Row[ColumnIndex]);
}

int32 UInventoryManager::GetInt32(int32 ColumnIndex) {
    FString Value = GetString(ColumnIndex);
    return Value.IsNumeric() ? FCString::Atoi(*Value) : 0;
}

TArray<uint8> UInventoryManager::GetBlob(int32 ColumnIndex) {
    if (!ResultSet || ColumnIndex >= static_cast<int32>(mysql_num_fields(ResultSet)))
    {
        MMO_SYSTEM_WARN(LogMSInventorySystem, "Invalid column index for blob: %d", ColumnIndex);
        return BlobData;
    }

    MYSQL_ROW Row = mysql_fetch_row(ResultSet);
    if (!Row || !Row[ColumnIndex]) { return BlobData; }

    unsigned long* Lengths = mysql_fetch_lengths(ResultSet);
    if (Lengths && Lengths[ColumnIndex] > 0)
    {
        BlobData.SetNumUninitialized(Lengths[ColumnIndex]);
        FMemory::Memcpy(BlobData.GetData(), Row[ColumnIndex], Lengths[ColumnIndex]);
    }

    return BlobData;
}

bool UInventoryManager::BeginTransaction() {
    if (!MySQLConnection)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "BeginTransaction: No database connection.");
        return false;
    }

    if (mysql_query(MySQLConnection, "START TRANSACTION;"))
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "BeginTransaction: Failed to start transaction. MySQL Error: %s",
                         ANSI_TO_TCHAR(mysql_error(MySQLConnection)));
        return false;
    }

    MMO_SYSTEM_WARN(LogMSInventorySystem, "BeginTransaction: Transaction started successfully.");
    return true;
}

bool UInventoryManager::CommitTransaction() {
    if (!MySQLConnection)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "CommitTransaction: No database connection.");
        return false;
    }

    if (mysql_query(MySQLConnection, "COMMIT;"))
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "CommitTransaction: Failed to commit transaction. MySQL Error: %s",
                         ANSI_TO_TCHAR(mysql_error(MySQLConnection)));
        return false;
    }

    MMO_SYSTEM_LOG(LogMSInventorySystem, "CommitTransaction: Transaction committed successfully.");
    return true;
}

bool UInventoryManager::RollbackTransaction() {
    if (!MySQLConnection)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "RollbackTransaction: No database connection.");
        return false;
    }

    if (mysql_query(MySQLConnection, "ROLLBACK;"))
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "RollbackTransaction: Failed to rollback transaction. MySQL Error: %s",
                         ANSI_TO_TCHAR(mysql_error(MySQLConnection)));
        return false;
    }

    MMO_SYSTEM_LOG(LogMSInventorySystem, "RollbackTransaction: Transaction rolled back successfully.");
    return true;
}



bool UInventoryManager::ExecuteQueryWithBlob(const FString& Query) {
    if (!MySQLConnection)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "ExecuteQueryWithBlob: No database connection.");
        return false;
    }

    MYSQL_STMT* Statement = mysql_stmt_init(MySQLConnection);
    if (!Statement)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "ExecuteQueryWithBlob: Failed to initialize statement. MySQL Error: %s",
                         ANSI_TO_TCHAR(mysql_error(MySQLConnection)));
        return false;
    }

    if (mysql_stmt_prepare(Statement, TCHAR_TO_ANSI(*Query), Query.Len()))
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "ExecuteQueryWithBlob: Statement preparation failed. MySQL Error: %s",
                         ANSI_TO_TCHAR(mysql_error(MySQLConnection)));
        mysql_stmt_close(Statement);
        return false;
    }

    MYSQL_BIND Bind[1];
    FMemory::Memzero(Bind, sizeof(Bind));

    Bind[0].buffer_type = MYSQL_TYPE_BLOB;
    Bind[0].buffer = static_cast<void*>(BlobData.GetData());
    Bind[0].buffer_length = BlobData.Num();

    if (mysql_stmt_bind_param(Statement, Bind))
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "ExecuteQueryWithBlob: Parameter binding failed. MySQL Error: %s",
                         ANSI_TO_TCHAR(mysql_error(MySQLConnection)));
        mysql_stmt_close(Statement);
        return false;
    }

    if (mysql_stmt_execute(Statement))
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "ExecuteQueryWithBlob: Execution failed. MySQL Error: %s",
                         ANSI_TO_TCHAR(mysql_error(MySQLConnection)));
        mysql_stmt_close(Statement);
        return false;
    }

    MMO_SYSTEM_LOG(LogMSInventorySystem, "ExecuteQueryWithBlob: Query executed successfully.");
    mysql_stmt_close(Statement);
    return true;
}

void UInventoryManager::LoadInventoryFromDatabaseAsync(UInventoryComponent* InventoryComponent, FName InPlayerName) {
    if (!InventoryComponent)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "LoadInventoryFromDatabaseAsync: InventoryComponent is null.");
        return;
    }


    // Bind the delegate for database connection
    FMySQLQueryResultDelegate ConnectionDelegate;


    ConnectionDelegate.BindDynamic(this, &UInventoryManager::OnDatabaseConnectionCompleteLoad);

    // Store parameters for later use
    PendingInventoryComponent = InventoryComponent;
    PendingPlayerName = InPlayerName;

    // Initiate async database connection
    ConnectToDatabaseAsync(DatabaseConnectionDetails, ConnectionDelegate);
}

void UInventoryManager::HandleInventoryLoadingAsync(TObjectPtr<UInventoryComponent> InventoryComponent, FName InPlayerName,
                                                    FInventoryLoaded Callback) {
    // Validate InventoryComponent
    if (!InventoryComponent)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "HandleInventoryLoadingAsync: InventoryComponent is null.");
        Callback.ExecuteIfBound(false);
        return;
    }

    // Perform database loading asynchronously
    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, InventoryComponent, InPlayerName, Callback]()
    {
        // SQL query to load inventory
        FString Query = FString::Printf(TEXT(
            "SELECT UniqueItemID, ItemName, SlotIndex, SlotTag, Quantity, ItemStaticData, ItemData FROM %s"),
                                        *InPlayerName.ToString());

        // Execute the query
        if (!ExecuteQuery(Query))
        {
            MMO_SYSTEM_ERROR(LogMSInventorySystem, "HandleInventoryLoadingAsync: Query execution failed.");
            AsyncTask(ENamedThreads::GameThread, [Callback]() { Callback.ExecuteIfBound(false); });
            return;
        }

        // Process the query results
        MYSQL_RES* ResultSet = nullptr;
        TArray<FInventorySaveItem> LoadedItems;
        while (true)
        {
            TArray<FString> RowData;

            // Fetch next row
            if (!NextRow(RowData))
            {
                break; // No more rows
            }

            // Parse the row into an inventory item
            FInventorySaveItem Item;
            Item.UniqueItemID = RowData[0];
            Item.ItemName = FName(*RowData[1]);
            Item.SlotIndex = FCString::Atoi(*RowData[2]);
            Item.SlotTag = FGameplayTag::RequestGameplayTag(FName(*RowData[3]));
            Item.Quantity = FCString::Atoi(*RowData[4]);
            FSoftObjectPath SoftPath = FSoftObjectPath(RowData[5]);
            TSoftObjectPtr<UStaticItemData> SoftPtr = Cast<UStaticItemData>(SoftPath.TryLoad());
            Item.StaticData = SoftPtr;

            TArray<uint8> BlobData;
            unsigned long* Lengths = mysql_fetch_lengths(ResultSet);
            if (Lengths && Lengths[6] > 0)
            {
                BlobData.SetNumUninitialized(Lengths[6]);
                FMemory::Memcpy(BlobData.GetData(), *RowData[6], Lengths[6]);
            }
            // Deserialize ItemData blob into FCharProfileBlobStruct
            // = DatabaseSubsystem->GetBlob(ResultSet, 6);
            if (BlobData.Num() > 0)
            {
                FInventorySaveBlobStruct BlobStruct;
                if (BlobStruct.DeserializeFromBinary(BlobData,BlobStruct.SaveObject.StatsAndEffects)) { Item.DynamicData = BlobStruct; }
                else
                {
                    MMO_SYSTEM_WARN(LogMSInventorySystem,
                                    "HandleInventoryLoadingAsync: Failed to deserialize ItemData for ItemId %s.",
                                    *Item.UniqueItemID);
                }
            }

            LoadedItems.Add(Item);
        }

        // Free the ResultSet after processing
        if (ResultSet)
        {
            mysql_free_result(ResultSet);
            ResultSet = nullptr;
        }


        // Update the InventoryComponent on the game thread
        AsyncTask(ENamedThreads::GameThread, [this,InventoryComponent, LoadedItems, Callback]()
        {
            if (InventoryComponent)
            {
                for (FInventorySaveItem Item : LoadedItems)
                {
                    FString RetrievedPath(Item.StaticData.ToString());
                    FSoftObjectPath ReconstructedPath(RetrievedPath);
                    FSoftObjectPtr AssetPointer(ReconstructedPath);
                    UStaticItemData* LoadedAsset = Cast<UStaticItemData>(AssetPointer.LoadSynchronous());
                    FDynamicItemData DynamicItemData;
                    DynamicItemData.ItemName = Item.DynamicData.SaveObject.ItemName;
                    DynamicItemData.Condition = Item.DynamicData.SaveObject.Condition;
                    DynamicItemData.ITemColor1 = Item.DynamicData.SaveObject.ITemColor1;
                    DynamicItemData.ITemColor2 = Item.DynamicData.SaveObject.ITemColor2;
                    for (auto StatsAndEffects : Item.DynamicData.SaveObject.StatsAndEffects)
                    {
                        DynamicItemData.StatsAndEffects.Add(StatsAndEffects);
                    }
                    
                    InventoryComponent->AddItemToInventory(Item.ItemName, LoadedAsset, DynamicItemData, Item.Quantity);
                    Callback.ExecuteIfBound(true);
                }
            }
            else
            {
                MMO_SYSTEM_ERROR(LogMSInventorySystem, "HandleInventoryLoadingAsync: InventoryComponent is null on GameThread.");
                Callback.ExecuteIfBound(false);
            }
        });
    });
}

/* Save Inventory to Database*/

void UInventoryManager::SaveInventoryToDatabaseAsync(UInventoryComponent* InventoryComponent, FName InPlayerName) {
    if (!InventoryComponent)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "SaveInventoryToDatabaseAsync: InventoryComponent is null.");
        return;
    }


    // Bind the delegate for database connection
    FMySQLQueryResultDelegate ConnectionDelegate;
    ConnectionDelegate.BindDynamic(this, &UInventoryManager::OnDatabaseConnectionCompleteSave);

    // Store parameters for later use
    PendingInventoryComponent = InventoryComponent;
    PendingPlayerName = InPlayerName;

    // Initiate async database connection
    ConnectToDatabaseAsync(DatabaseConnectionDetails, ConnectionDelegate);
}
void UInventoryManager::OnDatabaseConnectionCompleteSave(bool bConnectionSuccess) {
    if (bConnectionSuccess)
    {
        if (PendingInventoryComponent)
        {
            // Load inventory data
            HandleInventorySavingAsync(
                PendingInventoryComponent,
                PendingPlayerName, SavedSuccessDelegate);
        }
        else { MMO_SYSTEM_ERROR(LogMSInventorySystem, "OnDatabaseConnectionCompleteSave: PendingInventoryComponent is null."); }
    }
    else { MMO_SYSTEM_ERROR(LogMSInventorySystem, "OnDatabaseConnectionCompleteSave: Failed to connect to database."); }
}
void UInventoryManager::HandleInventorySavingAsync(
    TObjectPtr<UInventoryComponent> InventoryComponent,
    FName InPlayerName,
    FInventorySaved Callback
) {
    // Validate InventoryComponent
    if (!InventoryComponent)
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "HandleInventorySavingAsync: InventoryComponent is null.");
        Callback.ExecuteIfBound(false, "HandleInventorySavingAsync: InventoryComponent is null.");
        return;
    }

    // Perform database saving asynchronously
    AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [this, InventoryComponent, InPlayerName, Callback]()
    {
        // Begin database transaction
        if (!BeginTransaction())
        {
            MMO_SYSTEM_ERROR(LogMSInventorySystem, "HandleInventorySavingAsync: Failed to begin transaction.");
            AsyncTask(ENamedThreads::GameThread, [Callback]()
            {
                Callback.ExecuteIfBound(false, "HandleInventorySavingAsync: Failed to begin transaction.");
            });
            return;
        }

        // Clear existing inventory data for the player
        FString DeleteQuery = FString::Printf(TEXT("DELETE FROM %s WHERE 1=1;"), *InPlayerName.ToString());
        if (!ExecuteQuery(DeleteQuery))
        {
            MMO_SYSTEM_ERROR(LogMSInventorySystem, "HandleInventorySavingAsync: Failed to clear old inventory entries.");
            RollbackTransaction();
            AsyncTask(ENamedThreads::GameThread, [Callback]()
            {
                Callback.ExecuteIfBound(false, "HandleInventorySavingAsync: Failed to clear old inventory entries.");
            });
            return;
        }

        // Save each inventory entry
        bool bSaveSuccess = true;
        for (const FInvEntry& Entry : InventoryComponent->GetInventory())
        {
            if (!Entry.ItemObject)
            {
                MMO_SYSTEM_WARN(LogMSInventorySystem, "HandleInventorySavingAsync: Skipping entry with null ItemObject.");
                continue;
            }

            // Prepare ItemData blob using FArchive
            TArray<uint8> BlobData;
            // FMemoryWriter MemoryWriter(BlobData, true);
            FInventorySaveBlobStruct BlobStruct;            
            BlobStruct.CharacterName = InPlayerName.ToString();

            BlobStruct.SaveObject.ItemName = Entry.ItemObject->DynamicItemData.ItemName;
            BlobStruct.SaveObject.StatsAndEffects = Entry.ItemObject->DynamicItemData.StatsAndEffects;
            BlobStruct.SaveObject.Condition = Entry.ItemObject->DynamicItemData.Condition;
            BlobStruct.SaveObject.ITemColor1 = Entry.ItemObject->DynamicItemData.ITemColor1;
            BlobStruct.SaveObject.ITemColor2 = Entry.ItemObject->DynamicItemData.ITemColor2;

            // Serialize the BlobStruct into BlobData
            BlobStruct.SerializeToBinary(BlobStruct.SaveObject.StatsAndEffects,BlobData);

            FSoftObjectPath ItemDataPath = Entry.ItemObject->ItemData;
            TSoftObjectPtr<UStaticItemData> SoftPtr = TSoftObjectPtr<UStaticItemData>(ItemDataPath);
            FString SoftPtrString = SoftPtr.ToString();

            // Construct insert query
            FString InsertQuery = FString::Printf(TEXT(
                "INSERT INTO %s ( UniqueItemID, ItemName, SlotIndex, SlotTag, Quantity, ItemStaticData, ItemData) "
                "VALUES ( '%s', '%s', %d, '%s', %d,'%s', ?);"),
                                                  *InPlayerName.ToString(),
                                                  *Entry.ItemObject->UniqueItemID,
                                                  *Entry.ItemObject->DynamicItemData.ItemName.ToString(),
                                                  Entry.SlotIndex,
                                                  *Entry.SlotTag.ToString(),
                                                  Entry.Quantity,
                                                  *ItemDataPath.ToString()

            );

            // Execute the query with the binary blob
            if (!ExecuteQueryWithBlob(InsertQuery))
            {
                UE_LOG(LogMSInventorySystem, Error, TEXT("HandleInventorySavingAsync: Failed to save item %s."),
                       *Entry.ItemObject->DynamicItemData.ItemName.ToString());
                bSaveSuccess = false;
            }
        }

        // Commit or roll back the transaction based on success
        if (bSaveSuccess)
        {
            if (!CommitTransaction())
            {
                UE_LOG(LogMSInventorySystem, Error, TEXT("HandleInventorySavingAsync: Failed to commit transaction."));
                bSaveSuccess = false;
            }
            else { UE_LOG(LogMSInventorySystem, Warning, TEXT("HandleInventorySavingAsync: Inventory successfully saved.")); }
        }
        else { RollbackTransaction(); }

        // Notify on the game thread
        AsyncTask(ENamedThreads::GameThread, [Callback, bSaveSuccess]()
        {
            Callback.ExecuteIfBound(bSaveSuccess, "HandleInventorySavingAsync: Inventory successfully saved.");
        });
    });
}


void UInventoryManager::OnDatabaseConnectionCompleteLoad(bool bConnectionSuccess) {
    if (bConnectionSuccess)
    {
        if (PendingInventoryComponent)
        {
            // Bind the delegate for inventory loading
            FInventoryLoaded InventoryLoadDelegate;
            InventoryLoadDelegate.BindDynamic(this, &UInventoryManager::OnInventoryLoaded);

            // Load inventory data
            HandleInventoryLoadingAsync(
                PendingInventoryComponent,
                PendingPlayerName,
                InventoryLoadDelegate);
        }
        else
        {
            MMO_SYSTEM_ERROR(LogMSInventorySystem, "OnDatabaseConnectionCompleteLoad: PendingInventoryComponent is null.");
            SetInventoryLoaded(false);
        }
    }
    else
    {
        MMO_SYSTEM_ERROR(LogMSInventorySystem, "OnDatabaseConnectionCompleteLoad: Failed to connect to database.");
        SetInventoryLoaded(false);
    }
}

bool UInventoryManager::SetInventoryLoaded(bool bSuccess) {
    bIsInventoryLoaded = bSuccess;
    return bIsInventoryLoaded;
}

void UInventoryManager::OnInventoryLoaded(bool bLoadSuccess) {
    if (bLoadSuccess) { MMO_SYSTEM_LOG(LogMSInventorySystem, "OnInventoryLoaded: Inventory successfully loaded."); }
    else { MMO_SYSTEM_ERROR(LogMSInventorySystem, "OnInventoryLoaded: Failed to load inventory."); }

    // Set inventory loaded status
    SetInventoryLoaded(bLoadSuccess);

    // Clear pending variables
    PendingInventoryComponent = nullptr;
    PendingPlayerName = NAME_None;
}



// Test functions

void UInventoryManager::TestBlobSerialization(FName ItemName,TArray<FStatsAndEffects> InSNE,float InCondition)
{
    MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "Testing Blob Serialization and Deserialization");
    // Create a sample object
    FInventorySaveBlobStruct OriginalBlob;
    OriginalBlob.SaveObject.ItemName = ItemName;
    OriginalBlob.SaveObject.StatsAndEffects = InSNE;
    OriginalBlob.SaveObject.Condition = InCondition;
    OriginalBlob.SaveObject.ITemColor1 = FColor::Red;
    OriginalBlob.SaveObject.ITemColor2 = FColor::Blue;
    // Serialize the object
    TArray<uint8> SerializedData;
    bool bSerializeSuccess = OriginalBlob.SerializeToBinary(InSNE,SerializedData);
    check(bSerializeSuccess);
    check(SerializedData.Num() > 0);


    MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "Serialization successful. Serialized data size: %d",
                      SerializedData.Num());

    TArray<FStatsAndEffects> MockStatsAndEffects;
    // Deserialize the object
    FInventorySaveBlobStruct DeserializedBlob;
    bool bDeserializeSuccess = DeserializedBlob.DeserializeFromBinary(SerializedData,MockStatsAndEffects);

    MMO_SYSTEM_WARN(LogMSInventorySystem, "Blob serialization/deserialization test. bDeserializeSuccess : =  %hs",
                    bDeserializeSuccess ? "true" : "false");
    check(bDeserializeSuccess);
    MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "Deserialization successful. Comparing fields...")


    // Validate data integrity
    check(OriginalBlob.SaveObject.ItemName == DeserializedBlob.SaveObject.ItemName);
    check(OriginalBlob.SaveObject.Condition == DeserializedBlob.SaveObject.Condition);
    // check(OriginalBlob.SaveObject.StatsAndEffects == DeserializedBlob.SaveObject.StatsAndEffects);
    check(OriginalBlob.SaveObject.ITemColor1 == DeserializedBlob.SaveObject.ITemColor1);
    check(OriginalBlob.SaveObject.ITemColor2 == DeserializedBlob.SaveObject.ITemColor2);
    MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "Blob serialization/deserialization test passed.")
}

void UInventoryManager::TestDatabaseConnectionCallback(bool bConnectionSuccess)
{
    // Insert mock data
    FString InsertQuery = FString::Printf(TEXT(
        "INSERT INTO %s (UniqueItemID, ItemName, SlotIndex, SlotTag, Quantity, ItemStaticData, ItemData) VALUES ('TestID', 'TestItem', 1, 'TestTag', 10, 'TestPath', ?);"),
                                          *PlayerName
    );
    bConnectionSuccess = ExecuteQueryWithBlob(InsertQuery);
    if (bConnectionSuccess)
    {
        MMO_SYSTEM_WARN(LogMSInventorySystem, "Execute Query With Blob successful.");
        MMO_SYSTEM_WARN(LogMSInventorySystem, "Data insertion test passed.");
    }
    else { MMO_SYSTEM_ERROR(LogMSInventorySystem, "Execute Query With Blob failed."); }
}

void UInventoryManager::TestRetrieveData(bool bConnectionSuccess) {
    // Retrieve the data back
    FString SelectQuery = FString::Printf(TEXT("SELECT ItemData FROM %s WHERE UniqueItemID = 'TestID';"), *PlayerName);
    bool bQuerySuccess = ExecuteQuery(SelectQuery);
    check(bQuerySuccess);


    if (bQuerySuccess)
    {
        TArray<FString> RowData;
        bool bHasRow = NextRow(RowData);
        check(bHasRow);

        MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "Query retrieval successful.");


        // Validate blob data length
        TArray<uint8> RetrievedBlobData;
        unsigned long* Lengths = mysql_fetch_lengths(ResultSet);
        check(Lengths[0] > 0);
        RetrievedBlobData.SetNumUninitialized(Lengths[0]);
        FMemory::Memcpy(RetrievedBlobData.GetData(), *RowData[0], Lengths[0]);


        MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "Retrieved blob size: %d", RetrievedBlobData.Num());

        TArray<FStatsAndEffects> MockStatsAndEffects;

        // Deserialize and validate data
        FInventorySaveBlobStruct RetrievedBlob;
        bool bBlobDeserialized = RetrievedBlob.DeserializeFromBinary(RetrievedBlobData,MockStatsAndEffects);
        check(bBlobDeserialized);
        // check(MockBlob.SaveObject.Stat1 == RetrievedBlob.SaveObject.Stat1);
       

        MMO_SYSTEM_WARN(LogMSInventorySystem, "Blob retrieval and deserialization test passed.");
    }
    MMO_SYSTEM_WARN(LogMSInventorySystem, "Data insertion test passed.");


    // Cleanup
    if (ResultSet) { mysql_free_result(ResultSet); }
    Disconnect();
    ResultSet = nullptr; // No more rows, cleanup result set
    BlobData.Empty();
    MockBlob = FInventorySaveBlobStruct();
    MMO_SYSTEM_WARN(LogMSInventorySystem, "Database query test completed.");
}
void UInventoryManager::TestDatabaseQueries() {
    MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "Testing Database Query Execution.")
    MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "Serializing mock data...")


    
    TArray<FStatsAndEffects> MockStatsAndEffects;

    BlobData.Empty();
    bool bBlobSerialized = MockBlob.SerializeToBinary(MockStatsAndEffects,BlobData);
    check(bBlobSerialized);
    MMO_SYSTEM_WARN(LogMSInventorySystem, "Blob serialization Query test. bBlobSerialized : =  %hs",
                    bBlobSerialized ? "true" : "false");


    // Bind the delegate for database connection                                               
    FMySQLQueryResultDelegate ConnectionDelegate;
    ConnectionDelegate.BindDynamic(this, &UInventoryManager::TestDatabaseConnectionCallback);
    FDatabaseConnectionDetails DatabaseConnectionDetailsLocal = FDatabaseConnectionDetails(
        "localhost", "root", "Mph76Dor@", "DB_CharInv", 3306);
    ConnectToDatabaseAsync(DatabaseConnectionDetailsLocal, ConnectionDelegate);
}
void UInventoryManager::RunInventoryTests() {
    Disconnect();
    // TestBlobSerialization();
    TestDatabaseQueries();
    MMO_SYSTEM_LOG_NF(LogMSInventorySystem, COLOR_PURPLE, "All inventory tests completed successfully.")
}
void UInventoryManager::RunSerialDeserializationTests( FName ItemName, 
     TArray<FStatsAndEffects> Effects, 
    float Condition, 
    FLinearColor Color1, 
    FLinearColor Color2)
{
    
    TArray<FStatsAndEffects> MockStatsAndEffects;
    MockBlob.TestSerializationAndDeserialization( ItemName, Effects, Condition, Color1, Color2); 
}

