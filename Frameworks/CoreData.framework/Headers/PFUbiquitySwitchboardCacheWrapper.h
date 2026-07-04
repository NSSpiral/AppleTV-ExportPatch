/* Runtime dump - PFUbiquitySwitchboardCacheWrapper
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboardCacheWrapper : NSObject
{
    NSString * _localPeerID;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _storeName;
    PFUbiquityGlobalObjectIDCache * _globalIDCache;
    PFUbiquityPeerRangeCache * _peerRangeCache;
    PFUbiquityTransactionLogCache * _transactionLogCache;
    PFUbiquityTransactionHistoryCache * _transactionHistoryCache;
    PFUbiquityKnowledgeVector * _kv;
    PFUbiquityKnowledgeVector * _baselineKV;
    PFUbiquityPeerReceipt * _peerReceipt;
    char _pendingReceiptWrite;
    NSLock * _receiptFileLock;
    char _allowSchedulingOfReceiptFileWrites;
}

@property (readonly, nonatomic) PFUbiquityGlobalObjectIDCache * globalIDCache;
@property (readonly, nonatomic) PFUbiquityPeerRangeCache * peerRangeCache;
@property (readonly, nonatomic) PFUbiquityTransactionLogCache * transactionLogCache;
@property (readonly, nonatomic) PFUbiquityTransactionHistoryCache * transactionHistoryCache;
@property (readonly, nonatomic) PFUbiquityPeerReceipt * peerReceipt;
@property (retain) PFUbiquityKnowledgeVector * kv;
@property (retain) PFUbiquityKnowledgeVector * baselineKV;
@property (readonly, nonatomic) NSString * localPeerID;
@property (retain, nonatomic) PFUbiquityLocation * ubiquityRootLocation;
@property (readonly, nonatomic) NSString * storeName;

- (NSString *)localPeerID;
- (NSString *)storeName;
- (PFUbiquityLocation *)ubiquityRootLocation;
- (PFUbiquityPeerRangeCache *)peerRangeCache;
- (PFUbiquityTransactionHistoryCache *)transactionHistoryCache;
- (PFUbiquityKnowledgeVector *)baselineKV;
- (void)setKv:(PFUbiquityKnowledgeVector *)arg0;
- (void)scheduleReceiptFileWrite:(id)arg0;
- (PFUbiquityKnowledgeVector *)kv;
- (PFUbiquityTransactionLogCache *)transactionLogCache;
- (void)setUbiquityRootLocation:(PFUbiquityLocation *)arg0;
- (void)cacheWrapperWillBeRemovedFromEntry;
- (PFUbiquitySwitchboardCacheWrapper *)initWithStoreName:(NSString *)arg0 privateStore:(NSObject *)arg1 forLocalPeerID:(NSObject *)arg2 andUbiquityRootLocation:(NSObject *)arg3;
- (void)setBaselineKV:(PFUbiquityKnowledgeVector *)arg0;
- (PFUbiquityGlobalObjectIDCache *)globalIDCache;
- (void)_appWillResignActive:(NSNotification *)arg0;
- (char)writeReceiptFile:(char)arg0 error:(id *)arg1;
- (PFUbiquityPeerReceipt *)peerReceipt;
- (void)dealloc;
- (PFUbiquitySwitchboardCacheWrapper *)init;

@end
