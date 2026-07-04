/* Runtime dump - CallHistoryDBClientHandle
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable
{
    CallHistoryDBHandle * dbStoreHandle;
    id _observerCallRecordRef;
    id _observerCallTimersRef;
    char _dataStoreCreated;
    NSObject<OS_dispatch_queue> * _recentCallQueue;
}

@property (readonly, nonatomic) CallHistoryDBHandle * dbStoreHandle;
@property (nonatomic) char dataStoreCreated;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * recentCallQueue;

+ (NSObject *)createForClient;
+ (NSObject *)createForServer;

- (CallHistoryDBClientHandle *)init:(char)arg0;
- (void)dealloc;
- (CallHistoryDBClientHandle *)init;
- (void).cxx_destruct;
- (char)deleteAll:(id *)arg0;
- (void)createDataStore;
- (void)unRegisterForNotifications;
- (char)deleteObjectsWithUniqueIds:(id)arg0;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)timerLifetime;
- (void)resetTimers;
- (char)createCallRecord:(NSObject *)arg0;
- (char)createCallRecords:(NSArray *)arg0;
- (id)fetchAll;
- (NSObject *)fetchObjectWithUniqueId:(NSObject *)arg0;
- (NSPredicate *)fetchObjectsWithPredicate:(NSPredicate *)arg0;
- (char)deleteObjectWithUniqueId:(NSObject *)arg0;
- (id)fetchObjectsWithUniqueIds:(id)arg0;
- (id)fetchAllNoLimit;
- (NSArray *)updateCallRecords:(NSArray *)arg0;
- (NSArray *)updateAllCallRecords:(NSArray *)arg0;
- (NSArray *)fetchWithCallTypes:(unsigned int)arg0;
- (NSSet *)timerLastReset;
- (void)parseCallStatus_sync:(unsigned int)arg0 isAnswered:(char *)arg1 isOriginated:(char *)arg2;
- (unsigned int)getCallStatus_sync:(id)arg0 isOriginated:(id)arg1 isAnswered:(id)arg2;
- (NSObject<OS_dispatch_queue> *)recentCallQueue;
- (void)setClientObject_sync:(id)arg0 withStoreObject:(NSObject *)arg1;
- (CallHistoryDBHandle *)dbStoreHandle;
- (void)setDataStoreCreated:(char)arg0;
- (void)handleCallRecordSave_sync:(id)arg0;
- (void)handleCallTimersSave_sync:(id)arg0;
- (id)convertToCHRecentCalls_sync:(id)arg0;
- (char)deleteObjectWithUniqueId:(NSObject *)arg0 error:(id *)arg1;
- (char)deleteObjectWithUniqueId:(NSObject *)arg0 error:(id *)arg1 save:(char)arg2;
- (char)deleteObjectsWithUniqueIds:(id)arg0 error:(id *)arg1;
- (char)createCallRecord:(NSObject *)arg0 error:(id *)arg1;
- (char)createCallRecord:(NSObject *)arg0 error:(id *)arg1 save:(char)arg2;
- (void)setStoreObject_sync:(id)arg0 withClientObject:(NSObject *)arg1;
- (char)createCallRecords:(NSArray *)arg0 error:(id *)arg1;
- (NSArray *)updateCallRecords:(NSArray *)arg0 error:(id *)arg1;
- (NSArray *)updateCallRecords:(NSArray *)arg0 error:(id *)arg1 save:(char)arg2;
- (id)updateCallRecords_sync:(id)arg0 error:(id *)arg1 save:(char)arg2;
- (NSArray *)updateAllCallRecords:(NSArray *)arg0 error:(id *)arg1;
- (id)updateAllCallRecords_sync:(id)arg0 error:(id *)arg1;
- (char)willHandleNotification_sync:(id)arg0;
- (char)dataStoreCreated;
- (char)updateCallRecord_sync:(id)arg0 withChangeDict:(id)arg1;
- (char)saveDatabase:(id *)arg0;
- (void)setRecentCallQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (CoreRCManager *)manager;
- (void)registerForNotifications;
- (char)deleteAll;

@end
