/* Runtime dump - PLSQLiteConnection
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLSQLiteConnection : NSObject
{
    NSString * _filePath;
    struct sqlite3 * _dbConnection;
    NSString * _dbLock;
    NSMutableDictionary * _preparedStatements;
    NSMutableDictionary * _preparedUpdateStatements;
    NSMutableDictionary * _preparedDynamicStatements;
    int _transactionInProgress;
    NSString * _transactionLock;
    NSString * _cachedClassName;
    int _cacheSize;
}

@property (readonly) NSObject<OS_dispatch_queue> * workQueue;
@property (copy, nonatomic) NSString * filePath;
@property struct sqlite3 * dbConnection;
@property (retain, nonatomic) NSString * dbLock;
@property (retain) NSMutableDictionary * preparedStatements;
@property (retain) NSMutableDictionary * preparedUpdateStatements;
@property (retain) NSMutableDictionary * preparedDynamicStatements;
@property int transactionInProgress;
@property (retain) NSString * transactionLock;
@property (retain) NSString * cachedClassName;
@property int cacheSize;

+ (void)removeDBAtFilePath:(NSString *)arg0;
+ (PLSQLiteConnection *)masterTableForTable:(id)arg0 andType:(NSObject *)arg1;
+ (PLSQLiteConnection *)versionForTable:(id)arg0;
+ (PLSQLiteConnection *)sharedSQLiteConnection;

- (void)dealloc;
- (PLSQLiteConnection *)init;
- (void).cxx_destruct;
- (void)setFilePath:(NSString *)arg0;
- (NSString *)filePath;
- (void)beginTransaction;
- (void)endTransaction;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)closeConnection;
- (void)setCacheSize:(int)arg0;
- (int)cacheSize;
- (PLSQLiteConnection *)initWithFilePath:(NSString *)arg0;
- (NSString *)mergeDataFromOtherDBFile:(NSString *)arg0;
- (char)tableExistsForTableName:(NSString *)arg0;
- (void)createTableName:(NSString *)arg0 withColumns:(NSArray *)arg1;
- (void)setSchemaVersion:(double)arg0 forTableName:(NSString *)arg1;
- (void)removeIDIndexes;
- (void)checkPointDB;
- (void)removeEmptyOldTables;
- (double)schemaVersionForTable:(id)arg0;
- (NSDictionary *)tableInfo:(TSTTableInfo *)arg0;
- (void)createIndexOnTable:(id)arg0 forColumn:(TSCHChartTypeMultiDataColumn *)arg1;
- (void)createCoveringIndexOnTable:(id)arg0 forColumns:(NSArray *)arg1;
- (NSArray *)writeEntries:(NSArray *)arg0;
- (long long)writeEntry:(GEODBWriteEntry *)arg0;
- (void)writeAggregateEntry:(id)arg0;
- (void)setAllNullValuesForEntryKey:(NSString *)arg0 forKey:(NSString *)arg1 toValue:(NSValue *)arg2 withFilters:(id)arg3;
- (void)loadArrayValuesIntoEntry:(id)arg0;
- (void)deleteEntryForKey:(NSString *)arg0 withRowID:(long long)arg1;
- (void)deleteAllEntriesForKey:(NSString *)arg0 withFilters:(id)arg1;
- (char)copyDatabaseToPath:(NSString *)arg0 fromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 withTableFilters:(id)arg3 vacuumDB:(char)arg4;
- (void)trimAllTablesFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1 withTableFilters:(id)arg2;
- (void)vacuum;
- (char)copyDatabaseToPath:(NSString *)arg0 fromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 withTableFilters:(id)arg3 vacuumDB:(char)arg4 withCacheSize:(int)arg5;
- (void)dropTables:(id)arg0;
- (void)hashEntryKeyKeys:(NSArray *)arg0;
- (PLSQLiteConnection *)initWithFilePath:(NSString *)arg0 withCacheSize:(int)arg1;
- (char)openCurrentFileWithCacheSize:(int)arg0;
- (char)passesIntegrityCheck;
- (void)setJournalMode:(short)arg0;
- (NSString *)dbLock;
- (id)sqlFormatedColumnNamesForTable:(id)arg0 withQuoteChar:(char)arg1;
- (int)rowCountForTable:(id)arg0;
- (id)sqlFormatedColumnNamesForTableInsert:(id)arg0;
- (id)sqlFormatedColumnNamesForTableSelect:(id)arg0;
- (void)removeTableNameFromMergeDB:(id)arg0;
- (void)enumerateAllTablesWithBlock:(id /* block */)arg0;
- (void)trimTable:(id)arg0 fromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 withFilter:(NSObject *)arg3;
- (struct sqlite3 *)dbConnection;
- (id)performStatement:(id)arg0;
- (char)tableHasTimestampColumn:(id)arg0;
- (void)runTrimQuery:(NSObject *)arg0;
- (void)dropTable:(id)arg0;
- (NSString *)cachedClassName;
- (int)transactionInProgress;
- (NSString *)transactionLock;
- (char)isTransactionInProgress;
- (void)setTransactionInProgress:(int)arg0;
- (NSMutableDictionary *)preparedStatements;
- (void)buildColumnInsert:(id *)arg0 andValueInsert:(id *)arg1 forEntry:(QLZipArchiveEntry *)arg2;
- (void)displaySchema:(id)arg0;
- (int)bindEntry:(id)arg0 toPreparedStatement:(id)arg1 atBindPosition:(int)arg2;
- (void)writeDynamicEntries:(NSArray *)arg0;
- (void)writeArrayEntries:(NSArray *)arg0;
- (NSMutableDictionary *)preparedDynamicStatements;
- (NSMutableDictionary *)preparedUpdateStatements;
- (void)deleteArrayEntriesForKey:(NSString *)arg0 withRowID:(long long)arg1;
- (void)deleteDynamicEntriesForKey:(NSString *)arg0 withRowID:(long long)arg1;
- (void)setDbConnection:(struct sqlite3 *)arg0;
- (char)copyDatabaseToPath:(NSString *)arg0;
- (char)openCurrentFile;
- (void)printDBStatusString;
- (void)lockDatabaseWithBlock:(id /* block */)arg0;
- (void)trimAllTablesFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1;
- (char)copyDatabaseToPath:(NSString *)arg0 fromDate:(NSDate *)arg1 toDate:(NSDate *)arg2;
- (void)setDbLock:(NSString *)arg0;
- (void)setPreparedStatements:(NSMutableDictionary *)arg0;
- (void)setPreparedUpdateStatements:(NSMutableDictionary *)arg0;
- (void)setPreparedDynamicStatements:(NSMutableDictionary *)arg0;
- (void)setTransactionLock:(NSString *)arg0;
- (void)setCachedClassName:(NSString *)arg0;
- (NSString *)entriesForKey:(NSString *)arg0 withProperties:(NSDictionary *)arg1;
- (void)updateEntry:(id)arg0;
- (NSString *)lookupValueForEntryKey:(NSString *)arg0 forKey:(NSString *)arg1 forNumberValue:(long)arg2;
- (void)setLookupValueForEntryKey:(NSString *)arg0 forKey:(NSString *)arg1 forNumberValue:(long)arg2 withStringValue:(NSString *)arg3;
- (NSObject *)performQuery:(NSObject *)arg0;
- (void)loadDynamicValuesIntoEntry:(id)arg0;
- (void)loadLookupTableValuesIntoEntry:(id)arg0;
- (void)releaseMemory;

@end
