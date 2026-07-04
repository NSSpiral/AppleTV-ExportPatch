/* Runtime dump - PLLocaleAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLLocaleAgent : PLAgent
{
    PLNSNotificationOperatorComposition * _timeNotifications;
}

@property (retain) PLNSNotificationOperatorComposition * timeNotifications;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventNoneDefinitions;

- (PLLocaleAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)logEventForwardTimeZoneWithTrigger:(id)arg0;
- (void)logEventForwardTimeZone;
- (PLNSNotificationOperatorComposition *)timeNotifications;
- (void)setTimeNotifications:(PLNSNotificationOperatorComposition *)arg0;

@end
