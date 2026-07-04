/* Runtime dump - PLDebugService
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLDebugService : PLService
{
    PLXPCListenerOperatorComposition * _xpcListenerPLLog;
    PLXPCResponderOperatorComposition * _xpcResponderPLLog;
    PLXPCListenerOperatorComposition * _aggregateTestListener;
    PLXPCResponderOperatorComposition * _aggregateTestResponder;
    PLXPCListenerOperatorComposition * _schemaTestListener;
    PLEntryNotificationOperatorComposition * _assertionListener;
    PLEntryNotificationOperatorComposition * _assertionNewListener;
    PLEntryNotificationOperatorComposition * _assertionUpdateListener;
    PLEntryNotificationOperatorComposition * _canSleepNotification;
    PLSemaphore * _canSleepSemaphore;
    PLEntryNotificationOperatorComposition * _sleepNotification;
    PLEntryNotificationOperatorComposition * _wakeNotification;
}

@property (retain) PLXPCListenerOperatorComposition * xpcListenerPLLog;
@property (retain) PLXPCResponderOperatorComposition * xpcResponderPLLog;
@property (retain) PLXPCListenerOperatorComposition * aggregateTestListener;
@property (retain) PLXPCResponderOperatorComposition * aggregateTestResponder;
@property (retain) PLXPCListenerOperatorComposition * schemaTestListener;
@property (retain) PLEntryNotificationOperatorComposition * assertionListener;
@property (retain) PLEntryNotificationOperatorComposition * assertionNewListener;
@property (retain) PLEntryNotificationOperatorComposition * assertionUpdateListener;
@property (retain) PLEntryNotificationOperatorComposition * canSleepNotification;
@property (retain) PLSemaphore * canSleepSemaphore;
@property (retain) PLEntryNotificationOperatorComposition * sleepNotification;
@property (retain) PLEntryNotificationOperatorComposition * wakeNotification;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;
+ (id /* block */)entryAggregateDefinitionAggregateTest;
+ (id /* block */)entryEventNoneDefinitionArrayTest;
+ (id /* block */)entryEventNoneDefinitionSleepNotificationTest;
+ (id /* block */)entryEventNoneDefinitionFastInsertTest;

- (PLDebugService *)init;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setWakeNotification:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setCanSleepNotification:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)wakeNotification;
- (PLEntryNotificationOperatorComposition *)canSleepNotification;
- (PLSemaphore *)canSleepSemaphore;
- (void)setCanSleepSemaphore:(PLSemaphore *)arg0;
- (void)printNullTestResultsForEntry:(id)arg0 withDescription:(NSString *)arg1;
- (void)setXpcListenerPLLog:(PLXPCListenerOperatorComposition *)arg0;
- (void)setAggregateTestListener:(PLXPCListenerOperatorComposition *)arg0;
- (void)setAggregateTestResponder:(PLXPCResponderOperatorComposition *)arg0;
- (void)setSchemaTestListener:(PLXPCListenerOperatorComposition *)arg0;
- (void)setAssertionListener:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setAssertionNewListener:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setAssertionUpdateListener:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setSleepNotification:(PLEntryNotificationOperatorComposition *)arg0;
- (void)bombardRails;
- (void)testDailyTasks;
- (void)testArchive;
- (void)testArray;
- (void)testGenerateOTASubmission;
- (void)testQMI;
- (void)testFastInserts;
- (void)testAllEntryKeyRequests;
- (void)testEntrySleep;
- (void)testEntryWake;
- (void)testEntryLogRequestedForEntryKey:(NSString *)arg0;
- (void)testEntryApplicationAgent;
- (void)testEntryDelete;
- (void)testEntryQueries;
- (PLXPCListenerOperatorComposition *)xpcListenerPLLog;
- (PLXPCResponderOperatorComposition *)xpcResponderPLLog;
- (void)setXpcResponderPLLog:(PLXPCResponderOperatorComposition *)arg0;
- (PLXPCListenerOperatorComposition *)aggregateTestListener;
- (PLXPCResponderOperatorComposition *)aggregateTestResponder;
- (PLXPCListenerOperatorComposition *)schemaTestListener;
- (PLEntryNotificationOperatorComposition *)assertionListener;
- (PLEntryNotificationOperatorComposition *)assertionNewListener;
- (PLEntryNotificationOperatorComposition *)assertionUpdateListener;
- (PLEntryNotificationOperatorComposition *)sleepNotification;

@end
