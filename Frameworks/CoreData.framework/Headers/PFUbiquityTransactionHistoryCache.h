/* Runtime dump - PFUbiquityTransactionHistoryCache
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionHistoryCache : NSObject
{
    NSString * _localPeerID;
    PFUbiquityLocation * _rootLocation;
    NSString * _storeName;
    NSPersistentStore * _privateStore;
    NSPersistentStoreCoordinator * _privatePSC;
    NSMutableDictionary * _peerIDToHistoryArray;
    NSMutableDictionary * _globalIDToHistoryArray;
    NSRecursiveLock * _peerIDToHistoryArrayLock;
    NSMutableArray * _entriesToWrite;
    PFUbiquityKnowledgeVector * _cacheKV;
    PFUbiquityKnowledgeVector * _minCacheKV;
    PFUbiquityGlobalObjectIDCache * _globalIDCache;
    char _hasScheduledWriteBlock;
}

@property (readonly, nonatomic) PFUbiquityLocation * ubiquityRootLocation;
@property (retain, nonatomic) PFUbiquityGlobalObjectIDCache * globalIDCache;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector * cacheKV;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector * minCacheKV;
@property (readonly, nonatomic) NSArray * cachedGlobalIDs;

- (PFUbiquityLocation *)ubiquityRootLocation;
- (char)cacheTransactionHistory:(id *)arg0;
- (PFUbiquityKnowledgeVector *)cacheKV;
- (PFUbiquityKnowledgeVector *)minCacheKV;
- (char)purgeCacheAndWritePendingEntries:(char)arg0 error:(id *)arg1;
- (char)writePendingEntries:(id *)arg0;
- (NSObject *)cachedTransactionHistoryForGlobalID:(NSObject *)arg0;
- (char)addTransactionEntryLight:(PFUbiquityTransactionEntryLight *)arg0 needsWrite:(char)arg1 error:(id *)arg2;
- (char)addTransactionEntryLights:(id)arg0 error:(id *)arg1;
- (PFUbiquityGlobalObjectIDCache *)globalIDCache;
- (id)describeCaches;
- (id)describeCachesVerbose;
- (char)addTransactionEntry:(PFUbiquityTransactionEntry *)arg0 error:(id *)arg1;
- (PFUbiquityTransactionHistoryCache *)initWithLocalPeerID:(NSString *)arg0 storeName:(NSString *)arg1 privateStore:(NSPersistentStore *)arg2 andUbiquityRootLocation:(NSObject *)arg3;
- (NSArray *)cachedGlobalIDs;
- (void)setGlobalIDCache:(PFUbiquityGlobalObjectIDCache *)arg0;
- (void)dealloc;
- (PFUbiquityTransactionHistoryCache *)init;
- (NSString *)description;

@end
