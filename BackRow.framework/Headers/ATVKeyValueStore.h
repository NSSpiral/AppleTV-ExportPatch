/* Runtime dump - ATVKeyValueStore
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVSettingsSaver;
@interface ATVKeyValueStore : NSObject <ATVSettingsSaver>
{
    struct sqlite3 * _db;
    NSObject<OS_dispatch_queue> * _dbQueue;
    NSString * _domain;
    char _usesCompression;
}

@property (nonatomic) char usesCompression;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVKeyValueStore *)_databaseDirectory;
+ (void)initialize;
+ (ATVKeyValueStore *)defaultStore;

- (void)addPathsToSaveTo:(NSMutableSet *)arg0;
- (char)deleteStoreCacheFile;
- (void)objectForKey:(NSString *)arg0 option:(int)arg1 withConflictResolver:(id)arg2 completionHandler:(/* block */ id)arg3;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 withConflictResolver:(id)arg2 completionHandler:(/* block */ id)arg3;
- (void)_setObjects:(NSArray *)arg0 forKeys:(NSArray *)arg1 resolver:(NSString *)arg2 handler:(/* block */ id)arg3;
- (void)_objectsForKeys:(NSArray *)arg0 option:(int)arg1 resolver:(NSString *)arg2 handler:(/* block */ id)arg3;
- (void)setObjects:(NSArray *)arg0 forKeys:(NSArray *)arg1 withConflictResolver:(id)arg2 completionHandler:(/* block */ id)arg3;
- (void)objectsForKeys:(NSArray *)arg0 option:(int)arg1 withConflictResolver:(id)arg2 completionHandler:(/* block */ id)arg3;
- (char)usesCompression;
- (void)setUsesCompression:(char)arg0;
- (void)objectsForKeys:(NSArray *)arg0 option:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)objectForKey:(NSString *)arg0 option:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)_dbDeleteCleanRowsNotUpdatedSince:(id)arg0 includeDirty:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)purgeCacheDataNotUpdatedSince:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)purgeCacheDataForUserSwitchWithCompletionHandler:(id /* block */)arg0;
- (void)_dbDropAllTables;
- (void)resetForRetailWithCompletionHandler:(id /* block */)arg0;
- (void)_putItemsToKVS:(id)arg0 resolver:(NSString *)arg1 completionHandler:(/* block */ id)arg2;
- (void)_dbVersionsForKeys:(NSArray *)arg0 handler:(<BRSelectionHandler> *)arg1;
- (void)_dbDataValuesForKeys:(NSArray *)arg0 option:(int)arg1 resolver:(NSString *)arg2 handler:(/* block */ id)arg3;
- (void)_internalPutItemsToKVS:(id)arg0 resolvedKeys:(NSArray *)arg1 resolver:(NSString *)arg2 completionHandler:(/* block */ id)arg3;
- (void)_dbSetDataValues:(NSArray *)arg0 versions:(AWDNFCVersions *)arg1 forKeys:(NSArray *)arg2 dirtyFlag:(char)arg3;
- (void)_getItemsFromKVSWithKeys:(NSArray *)arg0 resultValues:(NSArray *)arg1 sinceVersions:(id)arg2 handler:(<BRSelectionHandler> *)arg3;
- (void)setObjects:(NSArray *)arg0 forKeys:(NSArray *)arg1;
- (ATVKeyValueStore *)initWithDomain:(NSString *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(id /* <NSCopying> */)arg1;
- (void)dealloc;
- (NSString *)_databasePath;

@end
