/* Runtime dump - SBKSyncTransaction
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncTransaction : SBKTransaction
{
    NSString * _syncAnchor;
    NSString * _domain;
    NSArray * _keysToUpdate;
    NSArray * _keysToDelete;
    int _conflictDetectionType;
    <SBKSyncTransactionProcessing> * _transactionProcessor;
    int _type;
    NSURL * _syncRequestURL;
}

@property (readonly) int type;
@property (readonly) int conflictDetectionType;
@property (readonly) NSURL * syncRequestURL;
@property (readonly, copy) NSString * syncAnchor;
@property (readonly) NSArray * keysToUpdate;
@property (readonly) NSArray * keysToDelete;
@property (weak) <SBKSyncTransactionProcessing> * transactionProcessor;

- (NSString *)description;
- (int)type;
- (NSString *)domain;
- (void).cxx_destruct;
- (NSURL *)requestURL;
- (NSString *)syncAnchor;
- (NSString *)clampsKey;
- (NSURLRequest *)newRequest;
- (void)processDataInResponse:(NSURLResponse *)arg0 withCompletionHandler:(id /* block */)arg1;
- (NSArray *)keysToUpdate;
- (NSArray *)keysToDelete;
- (int)conflictDetectionType;
- (NSString *)conflictDetectionOrdinalForKey:(NSString *)arg0;
- (NSString *)keyValuePairForUpdatedKey:(NSString *)arg0;
- (NSURL *)syncRequestURL;
- (SBKSyncTransaction *)initWithStoreBagContext:(RadioStoreBag *)arg0 syncAnchor:(NSString *)arg1 keysToUpdate:(NSArray *)arg2 keysToDelete:(NSArray *)arg3 conflictDetectionType:(int)arg4;
- (void)setTransactionProcessor:(<SBKSyncTransactionProcessing> *)arg0;
- (SBKSyncTransaction *)initWithSyncRequestURL:(NSURL *)arg0 domain:(NSString *)arg1 syncAnchor:(NSString *)arg2 keysToUpdate:(NSArray *)arg3 keysToDelete:(NSArray *)arg4 conflictDetectionType:(int)arg5;
- (<SBKSyncTransactionProcessing> *)transactionProcessor;
- (void)_validateTransactionProcessor:(id)arg0;

@end
