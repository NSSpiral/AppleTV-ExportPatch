/* Runtime dump - PLPersistentConnectionAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLPersistentConnectionAgent : PLAgent
{
    PLCFNotificationOperatorComposition * _intervalChangedNotification;
    PLCFNotificationOperatorComposition * _preferencesChangedNotification;
}

@property (readonly) PLCFNotificationOperatorComposition * intervalChangedNotification;
@property (readonly) PLCFNotificationOperatorComposition * preferencesChangedNotification;

+ (void)load;
+ (PLPersistentConnectionAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;

- (PLPersistentConnectionAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (int)pollingInterval;
- (void)logEventForwardConfig;
- (void)logEventPointCache;
- (char)pushEnabled;
- (PLCFNotificationOperatorComposition *)intervalChangedNotification;
- (PLCFNotificationOperatorComposition *)preferencesChangedNotification;
- (void)initOperatorDependancies;

@end
