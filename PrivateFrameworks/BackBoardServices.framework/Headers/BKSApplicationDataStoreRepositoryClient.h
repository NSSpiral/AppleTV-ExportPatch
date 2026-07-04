/* Runtime dump - BKSApplicationDataStoreRepositoryClient
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSApplicationDataStoreRepositoryClient : BSBaseXPCClient
{
    NSMutableDictionary * _prefetchedKeyCounts;
    NSMutableDictionary * _prefetchedKeyValues;
    NSMutableDictionary * _pendingChangesToPrefetchedKeys;
    NSObject<OS_dispatch_queue> * _prefetchedDataQueue;
}

- (BKSApplicationDataStoreRepositoryClient *)initWithEndpoint:(NSString *)arg0;
- (void)dealloc;
- (BKSApplicationDataStoreRepositoryClient *)init;
- (void)invalidate;
- (void)synchronizeWithCompletion:(id /* block */)arg0;
- (void)availableDataStores:(id)arg0;
- (void)addPrefetchedKeys:(NSArray *)arg0 withCompletion:(id /* block */)arg1;
- (char)_prefetchedObjectIfAvailableForKey:(NSString *)arg0 application:(NSString *)arg1 outObject:(id *)arg2;
- (void)objectForKey:(NSString *)arg0 forApplication:(UIApplication *)arg1 withResult:(NSObject *)arg2 checkPrefetch:(/* block */ id)arg3 useBSXPCCoding:(char)arg4;
- (void)objectForKey:(NSString *)arg0 forApplication:(UIApplication *)arg1 useBSXPCCoding:(char)arg2 withResult:(NSObject *)arg3;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 forApplication:(UIApplication *)arg2 useBSXPCCoding:(char)arg3 withCompletion:(id /* block */)arg4;
- (void)removeObjectForKey:(NSString *)arg0 forApplication:(UIApplication *)arg1 withCompletion:(id /* block */)arg2;
- (void)removeAllObjectsForApplication:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)_sendPrefetchedKeys:(NSArray *)arg0 withCompletion:(id /* block */)arg1;
- (void)fireCompletion:(id /* block */)arg0 arrayResults:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)fireCompletion:(id /* block */)arg0 result:(/* block */ id)arg1 error:(NSError *)arg2;
- (void)_setPrefetchedObjectIfNecessary:(id)arg0 forKey:(NSString *)arg1 application:(NSString *)arg2;
- (void)_setChangeInFlight:(char)arg0 forPrefetchedKey:(NSString *)arg1 application:(NSString *)arg2;
- (void)_handleValueChanged:(NSNotification *)arg0;
- (void)_handleStoreInvalidated:(id)arg0;
- (char)_isChangeInFlightForPrefetchedKey:(NSString *)arg0 application:(NSString *)arg1;
- (void)removePrefetchedKeys:(NSArray *)arg0 withCompletion:(id /* block */)arg1;
- (id)_allPrefetchedChangesInFlightForApplication:(id)arg0;
- (void)queue_handleMessage:(NSString *)arg0;
- (void)queue_connectionWasCreated;
- (void)fireCompletion:(id /* block */)arg0 error:(/* block */ id)arg1;
- (void)_sendMessageType:(int)arg0 withMessage:(NSString *)arg1 withReplyHandler:(/* block */ id)arg2 waitForReply:(id /* block */)arg3;
- (NSObject<OS_dispatch_queue> *)clientCallbackQueue;

@end
