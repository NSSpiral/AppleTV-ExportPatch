/* Runtime dump - SSSoftwareUpdatesStore
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdatesStore : NSObject
{
    NSObject<OS_dispatch_queue> * _calloutQueue;
    SSXPCConnection * _connection;
    SSUpdatesDatabase * _database;
    char _didMigration;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    void * _mobileCoreServices;
    char _useLocalRead;
    char _useLocalWrite;
}

+ (NSString *)databasePath;

- (void)dealloc;
- (SSSoftwareUpdatesStore *)init;
- (id)_copyUpdates;
- (NSObject *)_copyUpdatesWithSession:(NSObject *)arg0 predicate:(NSPredicate *)arg1;
- (void)_readUsingSessionBlock:(id /* block */)arg0;
- (char)_migrateReadOnlyDatabase;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(id /* block */)arg0;
- (void)getUpdatesWithCompletionBlock:(id /* block */)arg0;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)arg0;
- (void)removeUpdateBulletins;
- (void)showApplicationBadgeForPendingUpdates;
- (NSString *)updateWithItemIdentifier:(long long)arg0;

@end
