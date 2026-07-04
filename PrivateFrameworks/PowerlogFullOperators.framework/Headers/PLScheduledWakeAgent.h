/* Runtime dump - PLScheduledWakeAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLScheduledWakeAgent : PLAgent
{
    PLEntryNotificationOperatorComposition * _canSleepNotification;
    PLSemaphore * _canSleepSemaphore;
}

@property (retain) PLEntryNotificationOperatorComposition * canSleepNotification;
@property (retain) PLSemaphore * canSleepSemaphore;

+ (void)load;
+ (PLScheduledWakeAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;

- (PLScheduledWakeAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)logEventForwardScheduledEvent;
- (NSString *)humanReadableScheduledWakeString:(NSString *)arg0;
- (void)initOperatorDependancies;
- (void)setCanSleepNotification:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)canSleepNotification;
- (PLSemaphore *)canSleepSemaphore;
- (void)setCanSleepSemaphore:(PLSemaphore *)arg0;

@end
