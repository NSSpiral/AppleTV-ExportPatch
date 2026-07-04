/* Runtime dump - SBKSyncRequestHandler
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _overrideResponseDomainVersion;
    SBKSyncResponseData * _responseData;
    NSMutableArray * _responseUpdatedKeys;
    NSMutableArray * _responseDeletedKeys;
    NSMutableArray * _responseConflictedKeys;
    NSMutableDictionary * _responseDataByKey;
    SBKTransactionController * _transactionController;
}

@property (readonly) SBKTransactionController * transactionController;
@property (copy) NSString * responseDomainVersion;
@property (readonly) NSArray * responseUpdatedKeys;
@property (readonly) NSArray * responseDeletedKeys;
@property (readonly) NSArray * responseConflictedKeys;
@property (readonly) SBKSyncResponseData * responseData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)conflictDetectionType;

- (void).cxx_destruct;
- (SBKSyncRequestHandler *)initWithBagContext:(SBKStoreURLBagContext *)arg0;
- (SBKSyncResponseData *)responseData;
- (SBKTransactionController *)transactionController;
- (NSString *)responseDomainVersion;
- (void)clearTransactionResponseData;
- (void)transaction:(SBKTransaction *)arg0 willProcessResponseData:(NSData *)arg1;
- (void)transaction:(SBKTransaction *)arg0 didProcessResponseData:(NSData *)arg1;
- (void)transaction:(SBKTransaction *)arg0 processUpdatedKey:(NSString *)arg1 data:(NSData *)arg2 conflict:(char)arg3 isDirty:(char *)arg4;
- (void)transaction:(SBKTransaction *)arg0 processDeletedKey:(NSString *)arg1 isDirty:(char *)arg2;
- (NSObject *)transaction:(SBKTransaction *)arg0 keyValuePairForUpdatedKey:(NSString *)arg1;
- (NSArray *)responseUpdatedKeys;
- (void)startTransactionWithSyncAnchor:(NSString *)arg0 keysToUpdate:(NSArray *)arg1 keysToDelete:(NSArray *)arg2 finishedBlock:(id /* block */)arg3;
- (void)_onQueue_clearTransactionResponseData;
- (void)setResponseDomainVersion:(NSString *)arg0;
- (NSArray *)responseDeletedKeys;
- (NSArray *)responseConflictedKeys;
- (NSString *)responseDataForResponseKey:(NSString *)arg0;

@end
