/* Runtime dump - CallHistoryDBHandle
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallHistoryDBHandle : CHLogger
{
    NSManagedObjectContext * fCallRecordContext;
    NSManagedObjectContext * fCallDBPropertiesContext;
    CallDBManager * callDBManager;
    NSString * objectId;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (readonly, nonatomic) NSString * objectId;
@property (readonly, nonatomic) CallDBManager * callDBManager;

+ (NSObject *)createForClient;
+ (NSObject *)createWithDBManager:(NSObject *)arg0;
+ (NSObject *)createForServer;

- (void)dealloc;
- (void).cxx_destruct;
- (char)save:(id *)arg0;
- (void)unRegisterForNotifications;
- (void)deleteObjectsWithUniqueIds:(id)arg0;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)timerLifetime;
- (void)resetTimers;
- (id)fetchAll;
- (NSObject *)fetchObjectWithUniqueId:(NSObject *)arg0;
- (NSPredicate *)fetchObjectsWithPredicate:(NSPredicate *)arg0;
- (void)deleteObjectWithUniqueId:(NSObject *)arg0;
- (id)fetchObjectsWithUniqueIds:(id)arg0;
- (id)fetchAllNoLimit;
- (NSPredicate *)fetchWithPredicate:(NSPredicate *)arg0 forEntity:(NSObject *)arg1;
- (CallHistoryDBHandle *)initWithDBManager:(NSObject *)arg0;
- (void)handleCallRecordContextDidSaveNotification:(NSNotification *)arg0;
- (void)handleCallDBPropContextDidSaveNotification:(NSNotification *)arg0;
- (void)moveCallRecordsFromTempDB;
- (CallDBManager *)callDBManager;
- (void)handlePersistentStoreChangedNotification:(NSNotification *)arg0;
- (NSObject *)createCallRecord;
- (char)handleSaveForCallRecordContext:(NSObject *)arg0 error:(id *)arg1;
- (void)postTimersChangedNotification;
- (NSDictionary *)callDBProperties;
- (NSPredicate *)fetchWithPredicate:(NSPredicate *)arg0 forEntity:(NSObject *)arg1 withLimit:(char)arg2;
- (NSObject *)getArrayForCallTypeMask:(unsigned int)arg0;
- (char)performSaveWithBackgroundTaskAssertion:(SBKTaskAssertion *)arg0 error:(id *)arg1;
- (void)updateCallDBProperties;
- (NSString *)callRecordContext;
- (void)registerForNotifications:(id)arg0;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (NSArray *)fetchWithCallTypes:(unsigned int)arg0;
- (NSSet *)timerLastReset;
- (NSString *)objectId;
- (void)deleteAll;

@end
