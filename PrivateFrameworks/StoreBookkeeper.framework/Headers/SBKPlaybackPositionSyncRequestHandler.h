/* Runtime dump - SBKPlaybackPositionSyncRequestHandler
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _syncOperationQueue;
    char _syncInProgress;
    char _canceled;
    <SBKUniversalPlaybackPositionDataSource> * _dataSource;
    SBKTransactionController * _kvsController;
    <SBKUniversalPlaybackPositionTransactionContext> * _dataSourceTransactionContext;
    NSMutableDictionary * _metadataItemsFromDataSource;
    NSDictionary * _metadataItemsToCommitToDataSource;
    NSDictionary * _metadataItemsToCommitToKVSStorage;
    NSMutableDictionary * _responseMetadataItemsToCommitToDataSource;
    NSMutableDictionary * _responseMetadataItemsMergedToCommitBackToKVSStorage;
    SBKSyncTransaction * _currentKVSTransaction;
    NSError * _fatalSyncError;
    NSString * _overrideSyncAnchor;
}

@property (retain) <SBKUniversalPlaybackPositionDataSource> * dataSource;
@property (retain) SBKTransactionController * kvsController;
@property (retain) <SBKUniversalPlaybackPositionTransactionContext> * dataSourceTransactionContext;
@property (retain) NSMutableDictionary * metadataItemsFromDataSource;
@property (retain) NSDictionary * metadataItemsToCommitToDataSource;
@property (retain) NSDictionary * metadataItemsToCommitToKVSStorage;
@property (retain) NSMutableDictionary * responseMetadataItemsToCommitToDataSource;
@property (retain) NSMutableDictionary * responseMetadataItemsMergedToCommitBackToKVSStorage;
@property (retain) SBKSyncTransaction * currentKVSTransaction;
@property char syncInProgress;
@property char canceled;
@property (retain) NSError * fatalSyncError;
@property (retain) NSString * overrideSyncAnchor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)synchronizeWithCompletionHandler:(id /* block */)arg0;
- (void)cancel;
- (void)setDataSource:(<SBKUniversalPlaybackPositionDataSource> *)arg0;
- (<SBKUniversalPlaybackPositionDataSource> *)dataSource;
- (void).cxx_destruct;
- (void)cancelWithError:(NSError *)arg0;
- (char)canceled;
- (void)setCanceled:(char)arg0;
- (void)timeout;
- (char)transactionController:(SBKTransactionController *)arg0 transactionDidFail:(id)arg1 error:(NSError *)arg2;
- (void)transactionController:(SBKTransactionController *)arg0 transactionDidCancel:(id)arg1 error:(NSError *)arg2;
- (void)transactionController:(SBKTransactionController *)arg0 transactionDidFinish:(id)arg1;
- (SBKPlaybackPositionSyncRequestHandler *)initWithDataSource:(<SBKUniversalPlaybackPositionDataSource> *)arg0 bagContext:(NSObject *)arg1;
- (void)setMetadataItemsFromDataSource:(NSMutableDictionary *)arg0;
- (void)setMetadataItemsToCommitToDataSource:(NSDictionary *)arg0;
- (void)setMetadataItemsToCommitToKVSStorage:(NSDictionary *)arg0;
- (void)setResponseMetadataItemsToCommitToDataSource:(NSMutableDictionary *)arg0;
- (void)setResponseMetadataItemsMergedToCommitBackToKVSStorage:(NSMutableDictionary *)arg0;
- (void)setKvsController:(SBKTransactionController *)arg0;
- (void)setDataSourceTransactionContext:(<SBKUniversalPlaybackPositionTransactionContext> *)arg0;
- (void)setCurrentKVSTransaction:(SBKSyncTransaction *)arg0;
- (NSMutableDictionary *)metadataItemsFromDataSource;
- (NSMutableDictionary *)responseMetadataItemsToCommitToDataSource;
- (NSMutableDictionary *)responseMetadataItemsMergedToCommitBackToKVSStorage;
- (void)clearTransactionResponseData;
- (<SBKUniversalPlaybackPositionTransactionContext> *)dataSourceTransactionContext;
- (char)syncInProgress;
- (void)setSyncInProgress:(char)arg0;
- (char)_shouldStop;
- (void)_dataSourceCancelTransaction;
- (NSDictionary *)metadataItemsToCommitToKVSStorage;
- (NSString *)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg0 processConflicts:(char)arg1;
- (SBKSyncTransaction *)currentKVSTransaction;
- (NSObject *)_synchronouslyRunKVSTransaction:(NSObject *)arg0;
- (void)_mergeMetadataItemsFromSyncResponse;
- (NSDictionary *)metadataItemsToCommitToDataSource;
- (NSError *)fatalSyncError;
- (SBKTransactionController *)kvsController;
- (void)_signalKVSTransactionCompletion:(id /* block */)arg0 withError:(NSError *)arg1;
- (char)_synchronize:(id *)arg0;
- (void)setFatalSyncError:(NSError *)arg0;
- (void)_signalKVSTransactionCompletion:(id /* block */)arg0;
- (void)transaction:(SBKTransaction *)arg0 willProcessResponseData:(NSData *)arg1;
- (void)transaction:(SBKTransaction *)arg0 didProcessResponseData:(NSData *)arg1;
- (void)transaction:(SBKTransaction *)arg0 processUpdatedKey:(NSString *)arg1 data:(NSData *)arg2 conflict:(char)arg3 isDirty:(char *)arg4;
- (int)_mergeConflictedItemFromSyncResponse:(NSURLResponse *)arg0;
- (void)transaction:(SBKTransaction *)arg0 processDeletedKey:(NSString *)arg1 isDirty:(char *)arg2;
- (NSObject *)transaction:(SBKTransaction *)arg0 keyValuePairForUpdatedKey:(NSString *)arg1;
- (NSObject *)transaction:(SBKTransaction *)arg0 syncAnchorForTransactionSyncAnchor:(id)arg1;
- (NSObject *)transaction:(SBKTransaction *)arg0 conflictDetectionOrdinalForKey:(NSString *)arg1;
- (NSString *)overrideSyncAnchor;
- (void)setOverrideSyncAnchor:(NSString *)arg0;

@end
