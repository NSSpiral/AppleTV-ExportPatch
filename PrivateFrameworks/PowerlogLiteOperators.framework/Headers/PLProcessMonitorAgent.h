/* Runtime dump - PLProcessMonitorAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLProcessMonitorAgent : PLAgent
{
    char _firstBoot;
    NSDate * _currentCachedDate;
    NSDate * _previousCacheDate;
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
    PLNSNotificationOperatorComposition * _asertionNotifications;
    double _currentCachedTotalCPUTime;
}

@property (retain) NSDate * currentCachedDate;
@property (retain) NSDate * previousCacheDate;
@property double currentCachedTotalCPUTime;
@property char firstBoot;
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition * asertionNotifications;

+ (void)load;
+ (PLProcessMonitorAgent *)defaults;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSObject *)entryEventForwardProcessID;
+ (PLProcessMonitorAgent *)entryEventBackwardDefinitionProcessMonitor;
+ (PLProcessMonitorAgent *)entryEventIntervalDefinitionProcessMonitorDiff;

- (PLProcessMonitorAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelChanged;
- (NSDate *)trimmingConditionsForRolloverAtDate:(NSDate *)arg0;
- (void)logEventIntervalProcessMonitorInterval;
- (char)isCachedForProcessID:(int)arg0;
- (id)eventForwardProcessIDForPID:(int)arg0;
- (NSDate *)currentCachedDate;
- (void)setPreviousCacheDate:(NSDate *)arg0;
- (void)setCurrentCachedDate:(NSDate *)arg0;
- (void)setCurrentCachedTotalCPUTime:(double)arg0;
- (void)updateProcessMonitorCache;
- (void)logEventIntervalProcessMonitorIntervalUsingCache;
- (void)logEventBackwardProcessMonitorUsingCache;
- (NSObject *)processMonitorMultiKeyFromProcessID:(NSObject *)arg0;
- (NSDate *)previousCacheDate;
- (double)currentCachedTotalCPUTime;
- (char)isCachedForProcessID:(int)arg0 andName:(id *)arg1;
- (void)logEventBackwardProcessMonitor;
- (char)firstBoot;
- (void)setFirstBoot:(char)arg0;
- (PLNSNotificationOperatorComposition *)asertionNotifications;
- (void)setAsertionNotifications:(PLNSNotificationOperatorComposition *)arg0;

@end
