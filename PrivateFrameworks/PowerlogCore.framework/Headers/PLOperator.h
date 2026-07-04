/* Runtime dump - PLOperator
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLOperator : NSObject
{
    NSMutableDictionary * _localCache;
    NSMutableDictionary * _filterDefinitions;
    NSMutableDictionary * _filterDeltaLastEntryIDs;
    NSMutableArray * _bufferedEntries;
    PLNSTimerOperatorComposition * _triggerBufferFlush;
    NSMutableDictionary * _lastLogDateForEntryKey;
}

@property (readonly, weak) NSObject<OS_dispatch_queue> * workQueue;
@property (readonly, weak) NSObject<OS_dispatch_queue> * storageQueue;
@property (readonly, weak) PLCoreStorage * storage;
@property (readonly, weak) PLCoreRail * rails;
@property (readonly, weak) PLCoreAccountingGroup * accountingGroups;
@property (readonly, weak) NSString * className;
@property (retain) NSMutableDictionary * localCache;
@property (retain) NSMutableDictionary * filterDefinitions;
@property (retain) NSMutableDictionary * filterDeltaLastEntryIDs;
@property (retain) NSMutableArray * bufferedEntries;
@property (retain) PLNSTimerOperatorComposition * triggerBufferFlush;
@property (retain) NSMutableDictionary * lastLogDateForEntryKey;

+ (void)setEnabled:(char)arg0;
+ (char)isEnabled;
+ (NSString *)className;
+ (void)load;
+ (void)setDebugEnabled:(char)arg0;
+ (PLOperator *)defaults;
+ (SCRCMathExpression *)operator;
+ (NSObject *)entryKeyForType:(NSObject *)arg0 andName:(id *)arg1 isDynamic:(char)arg2;
+ (NSArray *)entryDefinitions;
+ (void)setDebugEnabled:(char)arg0 forKey:(NSString *)arg1;
+ (NSObject *)entryKeyForType:(NSObject *)arg0 andName:(id *)arg1;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;
+ (char)isDebugEnabled;
+ (char)fullMode;
+ (char)isDebugEnabledForKey:(NSString *)arg0;
+ (NSArray *)entryKeys;

- (void)dealloc;
- (PLOperator *)init;
- (void)log;
- (NSString *)className;
- (void).cxx_destruct;
- (void)setDebugEnabled:(char)arg0;
- (PLCoreStorage *)storage;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)maintainAggregateStorage;
- (NSObject<OS_dispatch_queue> *)storageQueue;
- (NSArray *)entryDefinitions;
- (void)setFilterDefinitions:(NSMutableDictionary *)arg0;
- (void)setFilterDeltaLastEntryIDs:(NSMutableDictionary *)arg0;
- (void)setBufferedEntries:(NSMutableArray *)arg0;
- (void)setTriggerBufferFlush:(PLNSTimerOperatorComposition *)arg0;
- (void)subscribeNotificationsForEntries;
- (NSString *)defaultObjectForKey:(NSString *)arg0;
- (void)setDebugEnabled:(char)arg0 forKey:(NSString *)arg1;
- (NSMutableDictionary *)lastLogDateForEntryKey;
- (NSMutableArray *)bufferedEntries;
- (PLNSTimerOperatorComposition *)triggerBufferFlush;
- (void)flushBuffer;
- (char)shouldWriteEntry:(GEODBWriteEntry *)arg0 withDebug:(char)arg1;
- (void)enableBufferFlushTimer:(unsigned int)arg0;
- (void)postEntries:(NSArray *)arg0;
- (void)postEntries:(NSArray *)arg0 withGroupID:(NSString *)arg1;
- (NSMutableDictionary *)filterDefinitions;
- (char)postFilteredNotificationForEntry:(id)arg0 withFilteredDefition:(char)arg1 withNotificationName:(NSString *)arg2;
- (NSMutableDictionary *)filterDeltaLastEntryIDs;
- (void)logRequestNotification:(NSNotification *)arg0;
- (void)setupFilterRequest:(NSURLRequest *)arg0;
- (void)setLastLogDateForEntryKey:(NSMutableDictionary *)arg0;
- (void)logEntry:(id)arg0;
- (void)initOperatorDependancies;
- (char)isDebugEnabled;
- (char)defaultBoolForKey:(NSString *)arg0;
- (void)logEntries:(NSArray *)arg0 withGroupID:(NSString *)arg1;
- (double)defaultDoubleForKey:(NSString *)arg0;
- (long)defaultLongForKey:(NSString *)arg0;
- (void)updateEntry:(id)arg0;
- (NSDate *)trimmingConditionsForRolloverAtDate:(NSDate *)arg0;
- (PLCoreRail *)rails;
- (PLCoreAccountingGroup *)accountingGroups;
- (double)timeIntervalSinceLastLogForEntryKey:(NSString *)arg0;
- (char)isDebugEnabledForKey:(NSString *)arg0;
- (void)logFromCFCallback:(id /* block */)arg0;
- (NSArray *)entryKeys;
- (NSMutableDictionary *)localCache;
- (void)setLocalCache:(NSMutableDictionary *)arg0;

@end
