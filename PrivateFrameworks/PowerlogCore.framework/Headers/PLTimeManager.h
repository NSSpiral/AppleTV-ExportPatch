/* Runtime dump - PLTimeManager
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeManager : NSObject <PLTimeReferenceManager>
{
    PLStorageOperator * _storageOperator;
    PLSQLiteConnection * _connection;
    NSDictionary * _timeReferences;
    NSDictionary * _notificationsToTimeReferences;
}

@property (weak) PLStorageOperator * storageOperator;
@property (weak) PLSQLiteConnection * connection;
@property (retain) NSDictionary * timeReferences;
@property (retain) NSDictionary * notificationsToTimeReferences;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PLTimeManager *)sharedInstance;

- (PLTimeManager *)init;
- (void).cxx_destruct;
- (PLSQLiteConnection *)connection;
- (void)setConnection:(PLSQLiteConnection *)arg0;
- (NSObject *)currentTimeFromTimeReference:(int)arg0 toTimeReference:(int)arg1;
- (id)convertTime:(id)arg0 fromTimeReference:(int)arg1 toTimeReference:(int)arg2;
- (void)logTimeEntry;
- (NSObject<OS_dispatch_queue> *)storageQueue;
- (NSDictionary *)timeReferences;
- (PLStorageOperator *)storageOperator;
- (id)initialMonotonicTime;
- (void)initializeTimeOffsets;
- (void)registerForTimeChangedCallbackWithIdentifier:(NSString *)arg0 forTimeReference:(int)arg1 usingBlock:(id /* block */)arg2;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(NSString *)arg0 forTimeReference:(int)arg1;
- (void)setStorageOperator:(PLStorageOperator *)arg0;
- (void)setTimeReferences:(NSDictionary *)arg0;
- (NSDictionary *)notificationsToTimeReferences;
- (void)setNotificationsToTimeReferences:(NSDictionary *)arg0;

@end
