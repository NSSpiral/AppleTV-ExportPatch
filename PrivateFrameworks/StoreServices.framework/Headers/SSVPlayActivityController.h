/* Runtime dump - SSVPlayActivityController
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    SSXPCConnection * _connection;
    NSMutableDictionary * _endpointIdentifierToEndpointRevisionInformation;
    int _endpointRevisionInformationDidChangeNotifyToken;
    char _hasAttemptedTableCreation;
    char _hasLoadedEndpointRevisionInformation;
    char _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
    char _hasValidEndpointRevisionInformationDidChangeNotifyToken;
    NSMutableArray * _pendingFlushingSessions;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SSVPlayActivityTable * _table;
    unsigned int _writingStyle;
}

@property (readonly, nonatomic) unsigned int writingStyle;

+ (SSVPlayActivityController *)_requiredEndpointIdentifiers;

- (void)dealloc;
- (SSVPlayActivityController *)init;
- (void).cxx_destruct;
- (NSURLConnection *)_connection;
- (SSVPlayActivityController *)initWithWritingStyle:(unsigned int)arg0;
- (void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(NSString *)arg0 withStoreAccountID:(unsigned long long)arg1 shouldFilterStoreAccountID:(char)arg2 completionHandler:(id /* block */)arg3;
- (id)_revisionsIndexSetForPlayActivityEvents:(id)arg0;
- (void)_completePendingPlayEventsWithRevisionIndexSet:(NSSet *)arg0 forSessionToken:(unsigned long long)arg1 withResult:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg0;
- (void)_getFlushSessionInformationForEndpointIdentifier:(NSString *)arg0 shouldAcquire:(char)arg1 storeAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(char)arg3 withCompletionHandler:(id /* block */)arg4;
- (SSVPlayActivityTable *)_table;
- (void)_loadEndpointIdentifierInformationIfNeeded;
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)arg0 withCompletionHandler:(id /* block */)arg1;
- (char)_setEndpointRevisionInformation:(_SSVPlayActivityEndpointRevisionInformation *)arg0 forEndpointIdentifier:(NSString *)arg1;
- (NSString *)_sessionInformationForSessionToken:(unsigned long long)arg0;
- (NSString *)_copyEndpointRevisionInformationForEndpointIdentifier:(NSString *)arg0;
- (void)getRevisionInformationWithCompletionHandler:(id /* block */)arg0;
- (void)_setupNotifyTokenIfNeeded;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(NSString *)arg0 withStoreAccountID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(NSString *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)completePendingPlayActivityEvents:(id)arg0 forSessionToken:(unsigned long long)arg1 withResult:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)completePendingPlayActivityEventPersistentIDs:(id)arg0 forSessionToken:(unsigned long long)arg1 withResult:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)getHasPendingPlayEventsForEndpointIdentifier:(NSString *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)getPlayActivityEventsFromRevision:(unsigned long long)arg0 toRevision:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)recordPlayActivityEvents:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)removeFlushedPlayActivityEventsWithCompletionHandler:(id /* block */)arg0;
- (void)setCurrentRevision:(unsigned long long)arg0 revisionVersionToken:(NSString *)arg1 forEndpointIdentifier:(NSString *)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned int)writingStyle;

@end
