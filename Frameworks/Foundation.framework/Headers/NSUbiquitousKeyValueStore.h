/* Runtime dump - NSUbiquitousKeyValueStore
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUbiquitousKeyValueStore : NSObject
{
    id _private1;
    id _private2;
    id _private3;
    void * _private4;
    id _reserved;
    int _daemonWakeToken;
}

@property (readonly, copy) NSDictionary * dictionaryRepresentation;

+ (void)_synchronizeStoresForced:(char)arg0;
+ (NSString *)additionalStoreWithIdentifier:(NSString *)arg0;
+ (void)_appWillDeactivate;
+ (void)_appWillActivate;
+ (NSUbiquitousKeyValueStore *)defaultStore;

- (void)_printDebugDescription;
- (void)setDouble:(double)arg0 forKey:(NSString *)arg1;
- (NSUbiquitousKeyValueStore *)initWithBundleIdentifier:(NSString *)arg0 storeIdentifier:(NSString *)arg1 additionalStore:(char)arg2;
- (void)_scheduleRemoteSynchronization;
- (void)_sourceDidChange:(NSDictionary *)arg0;
- (void)_configurationDidChange;
- (void)_registerToDaemon;
- (void)_pleaseSynchronize:(id)arg0;
- (NSUbiquitousKeyValueStore *)initWithBundleIdentifier:(NSString *)arg0 storeIdentifier:(NSString *)arg1;
- (void)_setShouldAvoidSynchronize:(char)arg0;
- (int)_storeChangeFromSourceChange:(int)arg0;
- (char)_hasPendingSynchronize;
- (void)_setHasPendingSynchronize:(char)arg0;
- (void)_rethrowException:(NSException *)arg0;
- (char)synchronizeWithSourceForced:(char)arg0;
- (char)_postDidChangeNotificationExternalChanges:(id)arg0 sourceChangeCount:(int)arg1;
- (void)_syncConcurrentlyForced:(char)arg0;
- (void)_syncConcurrently;
- (void)_adjustTimer:(NSObject *)arg0;
- (void)_adjustTimerForAutosync;
- (char)_synchronizeForced:(char)arg0 notificationQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (char)_shouldAvoidSynchronize;
- (char)_synchronizeForced:(char)arg0;
- (unsigned int)maximumKeyCount;
- (unsigned int)maximumKeyLength;
- (unsigned int)maximumDataLengthPerKey;
- (unsigned int)maximumTotalDataLength;
- (void)_useSourceAsyncWithBlock:(id /* block */)arg0;
- (void)_useSourceSyncWithBlock:(id /* block */)arg0;
- (void)registerDefaultValues:(NSArray *)arg0;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg0;
- (void)_unregisterFromDaemon;
- (void)setArray:(NSArray *)arg0 forKey:(NSString *)arg1;
- (void)setDictionary:(NSMutableDictionary *)arg0 forKey:(NSString *)arg1;
- (long long)longLongForKey:(NSString *)arg0;
- (void)setLongLong:(long long)arg0 forKey:(NSString *)arg1;
- (char)boolForKey:(NSString *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (NSUbiquitousKeyValueStore *)init;
- (void)removeObjectForKey:(NSString *)arg0;
- (char)synchronize;
- (NSString *)stringForKey:(NSString *)arg0;
- (void)setBool:(char)arg0 forKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg0;
- (NSUbiquitousKeyValueStore *)initWithBundleIdentifier:(NSString *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)dictionaryForKey:(NSString *)arg0;
- (void)setData:(NSData *)arg0 forKey:(NSString *)arg1;
- (void)setString:(NSString *)arg0 forKey:(NSString *)arg1;
- (NSString *)dataForKey:(NSString *)arg0;
- (void)finalize;
- (NSString *)arrayForKey:(NSString *)arg0;

@end
