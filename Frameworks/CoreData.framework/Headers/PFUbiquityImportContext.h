/* Runtime dump - PFUbiquityImportContext
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityImportContext : NSObject
{
    _PFUbiquityStack * _stack;
    PFUbiquityStoreMetadata * _storeMetadata;
    PFUbiquityPeer * _actingPeer;
    PFUbiquityKnowledgeVector * _kv;
    PFUbiquityKnowledgeVector * _currentKnowledgeVector;
    NSString * _exportingPeerID;
    PFUbiquityTransactionLog * _transactionLog;
    PFUbiquityStoreSaveSnapshot * _storeSaveSnapshot;
    NSDictionary * _globalIDToLocalIDURICache;
    NSMutableDictionary * _globalIDToFetchedObject;
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
    PFUbiquityBaselineHeuristics * _heuristics;
}

@property (retain, nonatomic) _PFUbiquityStack * stack;
@property (retain, nonatomic) PFUbiquityStoreMetadata * storeMetadata;
@property (readonly, nonatomic) PFUbiquityPeer * actingPeer;
@property (retain, nonatomic) PFUbiquityKnowledgeVector * knowledgeVector;
@property (retain, nonatomic) PFUbiquityKnowledgeVector * currentKnowledgeVector;
@property (retain, nonatomic) NSString * exportingPeerID;
@property (retain, nonatomic) PFUbiquityTransactionLog * transactionLog;
@property (retain, nonatomic) PFUbiquityStoreSaveSnapshot * storeSaveSnapshot;
@property (retain, nonatomic) NSDictionary * globalIDToLocalIDURICache;
@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;
@property (readonly, nonatomic) NSMutableDictionary * globalIDToFetchedObject;
@property (retain, nonatomic) PFUbiquityBaselineHeuristics * heuristics;

- (PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
- (void)setGlobalIDToLocalIDURICache:(NSDictionary *)arg0;
- (char)prefetchManagedObjectsInContext:(NSObject *)arg0 error:(id *)arg1;
- (PFUbiquityTransactionLog *)transactionLog;
- (PFUbiquityImportContext *)initWithStack:(_PFUbiquityStack *)arg0 andStoreMetadata:(NSDictionary *)arg1;
- (void)setHeuristics:(PFUbiquityBaselineHeuristics *)arg0;
- (void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg0;
- (void)setStack:(_PFUbiquityStack *)arg0;
- (void)setStoreMetadata:(PFUbiquityStoreMetadata *)arg0;
- (NSString *)exportingPeerID;
- (void)setExportingPeerID:(NSString *)arg0;
- (void)setTransactionLog:(PFUbiquityTransactionLog *)arg0;
- (void)setStoreSaveSnapshot:(PFUbiquityStoreSaveSnapshot *)arg0;
- (PFUbiquityStoreSaveSnapshot *)storeSaveSnapshot;
- (PFUbiquityKnowledgeVector *)knowledgeVector;
- (void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (void)setCurrentKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (_PFUbiquityStack *)stack;
- (NSDictionary *)globalIDToLocalIDURICache;
- (NSMutableDictionary *)globalIDToFetchedObject;
- (PFUbiquityKnowledgeVector *)currentKnowledgeVector;
- (PFUbiquityBaselineHeuristics *)heuristics;
- (PFUbiquityPeer *)actingPeer;
- (PFUbiquityStoreMetadata *)storeMetadata;
- (void)setActingPeer:(PFUbiquityPeer *)arg0;
- (PFUbiquityImportContext *)initWithStoreName:(NSString *)arg0 andUbiquityRootLocation:(NSObject *)arg1 withLocalPeerID:(NSString *)arg2;
- (void)dealloc;
- (PFUbiquityImportContext *)init;

@end
