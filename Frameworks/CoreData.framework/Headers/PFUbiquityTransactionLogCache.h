/* Runtime dump - PFUbiquityTransactionLogCache
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionLogCache : NSObject
{
    NSString * _localPeerID;
    NSMutableDictionary * _transactionLogCache;
    NSRecursiveLock * _transactionLogCacheLock;
    PFUbiquityGlobalObjectIDCache * _gidCache;
}

- (void)cacheExportedLog:(id)arg0;
- (PFUbiquityTransactionLogCache *)initWithLocalPeerID:(NSString *)arg0 andGlobalIDCache:(NSObject *)arg1;
- (NSObject *)retainedCachedLogForLocation:(NSObject *)arg0 loadWithRetry:(char)arg1 error:(id *)arg2;
- (void)removeLogsCachedForStoreNamed:(id)arg0 withUbiquityRootLocation:(PFUbiquityLocation *)arg1;
- (void)dealloc;
- (PFUbiquityTransactionLogCache *)init;

@end
