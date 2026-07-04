/* Runtime dump - PLNetworkAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLNetworkAgent : PLAgent
{
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
    PLEntryNotificationOperatorComposition * _canSleep;
    PLSemaphore * _canSleepSemaphore;
    PLProcessPortMap * _portMapper;
    NSDate * _priorLogEventPointPortMappingTimestamp;
}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition * canSleep;
@property (retain) PLSemaphore * canSleepSemaphore;
@property (retain) PLProcessPortMap * portMapper;
@property (retain) NSDate * priorLogEventPointPortMappingTimestamp;

+ (void)load;
+ (PLNetworkAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;

- (PLNetworkAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelChanged;
- (PLSemaphore *)canSleepSemaphore;
- (void)setCanSleepSemaphore:(PLSemaphore *)arg0;
- (void)logEventPointPortMapping;
- (void)setCanSleep:(PLEntryNotificationOperatorComposition *)arg0;
- (void)logEventBackwardCumulativeNetworkUsage;
- (NSDate *)priorLogEventPointPortMappingTimestamp;
- (void)setPriorLogEventPointPortMappingTimestamp:(NSDate *)arg0;
- (PLProcessPortMap *)portMapper;
- (PLEntryNotificationOperatorComposition *)canSleep;
- (void)setPortMapper:(PLProcessPortMap *)arg0;

@end
