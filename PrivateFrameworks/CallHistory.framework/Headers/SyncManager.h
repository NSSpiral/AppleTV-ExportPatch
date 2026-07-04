/* Runtime dump - SyncManager
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface SyncManager : CHLogger <SyncManagerProtocol>
{
    TransactionManager * _transactionManager;
    CallHistoryDBClientHandle * _dbHandle;
}

@property (readonly, nonatomic) CallHistoryDBClientHandle * dbHandle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)insert:(_NSOrderedSetDiffInsert *)arg0;
- (SyncManager *)init;
- (void).cxx_destruct;
- (id)fetchObjectsWithLimits:(struct ? *)arg0;
- (void)insertWithoutTransaction:(NSObject *)arg0;
- (void)updateAllObjects:(NSArray *)arg0;
- (void)updateObjects:(NSArray *)arg0;
- (void)deleteObjectsWithUniqueIds:(id)arg0;
- (void)deleteObjectsWithLimits:(struct ? *)arg0;
- (double)timerIncoming;
- (double)timerOutgoing;
- (double)timerLifetime;
- (void)resetTimers;
- (void)insertRecordsWithoutTransactions:(id)arg0;
- (void)initDBHandle;
- (NSObject *)archiveCallObject:(NSObject *)arg0;
- (NSObject *)fetchObjectWithUniqueId:(NSObject *)arg0;
- (void)deleteObjectWithUniqueId:(NSObject *)arg0;
- (void)deleteAllObjects;
- (void)addUpdateTransactions:(id)arg0;
- (NSArray *)fetchAllObjects;
- (CallHistoryDBClientHandle *)dbHandle;

@end
