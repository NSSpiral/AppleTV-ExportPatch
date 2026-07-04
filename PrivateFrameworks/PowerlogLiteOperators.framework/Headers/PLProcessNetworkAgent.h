/* Runtime dump - PLProcessNetworkAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLProcessNetworkAgent : PLAgent
{
    struct __NStatManager * _statManagerRef;
    UsageFeed * _usageFeed;
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
    NSDictionary * _lastEntry;
    NSDate * _lastEntryTime;
}

@property struct __NStatManager * statManagerRef;
@property (retain) UsageFeed * usageFeed;
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;
@property (retain) NSDictionary * lastEntry;
@property (retain) NSDate * lastEntryTime;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSURLConnection *)entryEventPointDefinitionConnection;
+ (PLProcessNetworkAgent *)entryEventBackwardDefinitionUsage;
+ (PLProcessNetworkAgent *)entryEventIntervalDefinitionUsage;

- (PLProcessNetworkAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)didAddNewSource:(struct __NStatSource *)arg0;
- (void)setStatManagerRef:(struct __NStatManager *)arg0;
- (struct __NStatManager *)statManagerRef;
- (void)setUsageFeed:(UsageFeed *)arg0;
- (void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg0;
- (void)didSetCountsBlock:(id /* block */)arg0 withCounts:(MSAccounts *)arg1;
- (void)didSetDescriptionBlock:(id /* block */)arg0 withDescription:(NSString *)arg1;
- (void)didRemoveSource:(NSObject *)arg0;
- (void)transferSource:(NSObject *)arg0 fromPID:(id)arg1 toPID:(id)arg2;
- (void)logEventPointConnectionEvent:(NSObject *)arg0 forSource:(NSObject *)arg1;
- (void)addSource:(NSObject *)arg0 toPID:(id)arg1;
- (void)logEventBackwardUsage;
- (UsageFeed *)usageFeed;
- (void)logEventBackwardUsageWithOutcome:(NSString *)arg0;
- (NSDictionary *)lastEntry;
- (NSDate *)lastEntryTime;
- (char)outcomeHasDataUsage:(id)arg0;
- (void)updateSumDictionary:(NSDictionary *)arg0 withProcessInfo:(HMDProcessInfo *)arg1 withDiffEntries:(NSArray *)arg2 withDate:(NSDate *)arg3 withEntryKey:(NSString *)arg4;
- (void)AccountForDiffEntries:(NSArray *)arg0 withStartDate:(NSDate *)arg1 andStopDate:(NSDate *)arg2 andTotal:(id)arg3;
- (void)setLastEntryTime:(NSDate *)arg0;
- (void)setLastEntry:(NSDictionary *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelChanged;

@end
