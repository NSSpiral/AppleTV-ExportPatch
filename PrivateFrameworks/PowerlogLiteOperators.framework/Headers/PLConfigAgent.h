/* Runtime dump - PLConfigAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLConfigAgent : PLAgent
{
    PLNSTimerOperatorComposition * _timedTrigger;
}

@property (retain) PLNSTimerOperatorComposition * timedTrigger;

+ (void)load;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventNoneDefinitions;

- (PLConfigAgent *)init;
- (void)log;
- (NSString *)buildVersion;
- (void).cxx_destruct;
- (NSString *)deviceName;
- (void)initOperatorDependancies;
- (void)logEventNoneConfig;
- (NSString *)hardwareModel;
- (NSString *)crashReporterKey;
- (id)bootArgs;
- (int)autolockTime;
- (id)baseband;
- (id)basebandFirmware;
- (char)noWatchdogs;
- (char)disableCABlanking;
- (NSObject *)logAutomatedDeviceGroup;
- (NSDate *)trimmingConditionsForRolloverAtDate:(NSDate *)arg0;
- (PLNSTimerOperatorComposition *)timedTrigger;
- (void)setTimedTrigger:(PLNSTimerOperatorComposition *)arg0;

@end
