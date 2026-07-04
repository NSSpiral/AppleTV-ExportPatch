/* Runtime dump - PLPowerAssertionAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLPowerAssertionAgent : PLAgent
{
    char _assertionBufferFullNotificationActive;
    char _firstBufferDrain;
    PLCFNotificationOperatorComposition * _assertionNotification;
    PLCFNotificationOperatorComposition * _assertionBufferFullNotification;
    PLNSTimerOperatorComposition * _assertionBufferFullNotificationRearmTimer;
    NSMutableArray * _assertionBufferNotificationTracking;
    PLEntryNotificationOperatorComposition * _batteryLevelNotificiations;
    PLEntryNotificationOperatorComposition * _wakeNotification;
    PLEntryNotificationOperatorComposition * _canSleepNotification;
    PLNSTimerOperatorComposition * _runQueryTimer;
    PLNSTimerOperatorComposition * _assertionSnapShotTimer;
    NSMutableDictionary * _assertionAggregatedLastSample;
}

@property (retain) PLCFNotificationOperatorComposition * assertionNotification;
@property (retain) PLCFNotificationOperatorComposition * assertionBufferFullNotification;
@property (retain) PLNSTimerOperatorComposition * assertionBufferFullNotificationRearmTimer;
@property (nonatomic) char assertionBufferFullNotificationActive;
@property (retain) NSMutableArray * assertionBufferNotificationTracking;
@property (retain) PLEntryNotificationOperatorComposition * batteryLevelNotificiations;
@property (retain) PLEntryNotificationOperatorComposition * wakeNotification;
@property (retain) PLEntryNotificationOperatorComposition * canSleepNotification;
@property (retain) PLNSTimerOperatorComposition * runQueryTimer;
@property (retain) PLNSTimerOperatorComposition * assertionSnapShotTimer;
@property (nonatomic) char assertionSnapshotTimerActive;
@property char firstBufferDrain;
@property (retain, nonatomic) NSMutableDictionary * assertionAggregatedLastSample;

+ (void)load;
+ (PLPowerAssertionAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSObject *)entryEventPointDefinitionSnapshot;
+ (NSString *)entryEventPointDefinitionSnapshotReason;
+ (PLPowerAssertionAgent *)entryEventPointDefinitionBufferStatus;
+ (NSSet *)entryEventPointDefinitionAggregateReset;
+ (PLPowerAssertionAgent *)entryEventIntervalDefinitionAssertion;

- (PLPowerAssertionAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)resetIOPMSetAssertionActivityAggregateWithReason:(short)arg0 withPidCount:(int)arg1;
- (void)setRunQueryTimer:(PLNSTimerOperatorComposition *)arg0;
- (void)logEventIntervalAssertionWithReason:(NSString *)arg0;
- (void)setAssertionNotification:(PLCFNotificationOperatorComposition *)arg0;
- (NSMutableArray *)assertionBufferNotificationTracking;
- (void)checkAssertionBufferFullNotificationRate;
- (void)setAssertionBufferFullNotification:(PLCFNotificationOperatorComposition *)arg0;
- (void)setAssertionBufferFullNotificationActive:(char)arg0 withReason:(NSString *)arg1;
- (void)logAggregatedAssertionActivity;
- (void)setBatteryLevelNotificiations:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setAssertionSnapshotTimerActive:(char)arg0;
- (void)setWakeNotification:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setCanSleepNotification:(PLEntryNotificationOperatorComposition *)arg0;
- (char)assertionBufferFullNotificationActive;
- (void)setAssertionBufferFullNotificationActive:(char)arg0;
- (void)setAssertionBufferFullNotificationRearmTimer:(PLNSTimerOperatorComposition *)arg0;
- (PLCFNotificationOperatorComposition *)assertionBufferFullNotification;
- (void)logEventPointSnapshotWithReason:(NSString *)arg0;
- (void)setAssertionSnapShotTimer:(PLNSTimerOperatorComposition *)arg0;
- (PLNSTimerOperatorComposition *)assertionSnapShotTimer;
- (NSMutableDictionary *)assertionAggregatedLastSample;
- (void)logEventPointAggregateResetWithReason:(short)arg0 withPidCount:(int)arg1;
- (void)setAssertionAggregatedLastSample:(NSMutableDictionary *)arg0;
- (void)logEventIntervalAssertion;
- (void)sanitizeAssertionNameForEntry:(id)arg0;
- (char)firstBufferDrain;
- (void)setFirstBufferDrain:(char)arg0;
- (id)bundleIDForAssertionProcessPID:(int)arg0;
- (char)assertionSnapshotTimerActive;
- (void)logEventPointSnapshot;
- (PLCFNotificationOperatorComposition *)assertionNotification;
- (PLNSTimerOperatorComposition *)assertionBufferFullNotificationRearmTimer;
- (void)setAssertionBufferNotificationTracking:(NSMutableArray *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelNotificiations;
- (PLEntryNotificationOperatorComposition *)wakeNotification;
- (PLEntryNotificationOperatorComposition *)canSleepNotification;
- (PLNSTimerOperatorComposition *)runQueryTimer;

@end
