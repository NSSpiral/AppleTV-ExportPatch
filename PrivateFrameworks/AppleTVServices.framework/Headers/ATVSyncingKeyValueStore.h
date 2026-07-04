/* Runtime dump - ATVSyncingKeyValueStore
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSyncingKeyValueStore : NSObject
{
    NSString * _domain;
    NSString * _databaseDirectory;
    int _conflictResolversLock;
    int _ivarLock;
    NSArray * _conflictResolvers;
    int _conflictDetectionType;
    NSMutableArray * _pendingCompletionBlocks;
    ATVBackgroundTask * _periodicCleanupTask;
    id _activeAccountOrNull;
    NSObject<OS_dispatch_queue> * _dbQueue;
    struct sqlite3 * _db;
    struct sqlite3_stmt * _dbStmtValueForKey;
    struct sqlite3_stmt * _dbStmtSelectDirty;
    struct sqlite3_stmt * _dbStmtInsertReplaceStmt;
    struct sqlite3_stmt * _dbStringForKeyStmt;
    struct sqlite3_stmt * _dbSetStringForKeyStmt;
    NSNumberFormatter * _dbNumberFormatter;
    ATVStateMachine * _syncEngineStateMachine;
    double _lastSyncTimestamp;
}

+ (ATVSyncingKeyValueStore *)_dbDataFromBlobForStatement:(struct sqlite3_stmt *)arg0 column:(int)arg1;
+ (ATVSyncingKeyValueStore *)_dbStringFromTextForStatement:(struct sqlite3_stmt *)arg0 column:(int)arg1;
+ (ATVSyncingKeyValueStore *)_dbNumberFromIntegerForStatement:(struct sqlite3_stmt *)arg0 column:(int)arg1;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)synchronizeWithCompletion:(id /* block */)arg0;
- (NSArray *)objectsForKeys:(NSArray *)arg0;
- (void)_resetForRetailWithCompletion:(id /* block */)arg0;
- (void)setObjectsInDictionary:(NSDictionary *)arg0;
- (id)ActiveStoreAccountBinding;
- (void)bindActiveStoreAccountBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)_addConflictResolver:(id)arg0 forKeyPrefix:(/* block */ id)arg1;
- (char)_initializeKeyValueStoreCache;
- (char)_syncEngineInitialize;
- (void)_syncEngineSetNeedsSync;
- (void)_deleteCleanRowsNotUpdatedSince:(id)arg0;
- (void)_syncEngineDidAccessKeyValueStore;
- (NSArray *)_dbDataValuesForKeys:(NSArray *)arg0;
- (NSArray *)_objectsForKeys:(NSArray *)arg0;
- (void)_dbSetDataValues:(NSArray *)arg0;
- (void)_dbSetNumber:(NSNumber *)arg0 forKey:(NSString *)arg1;
- (void)updateBoundActiveStoreAccount;
- (NSArray *)_dbDirtyValues;
- (NSString *)_conflictResolverForKey:(SEL)arg0;
- (NSString *)_dbStringForKey:(NSString *)arg0;
- (NSArray *)_dirtySyncItems;
- (NSString *)_dbNumberForKey:(NSString *)arg0;
- (void)_dbSetString:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)_dbClearAllDirtyFlags;
- (void)_dbTransaction:(NSObject *)arg0;
- (void)_syncWithServer:(NSObject *)arg0 version:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (void)_stateChangedNotification:(NSNotification *)arg0;
- (void)_synchronize;
- (void)_dropAllTables;
- (NSObject *)_newSyncEngineStateMachine;
- (char)_deleteKeyValueStoreCache;
- (NSNumberFormatter *)_dbNumberFormatter;
- (ATVSyncingKeyValueStore *)initWithDomain:(NSString *)arg0 cacheDirectory:(id)arg1 conflictResolvers:(NSArray *)arg2;
- (NSString *)_databasePath;

@end
