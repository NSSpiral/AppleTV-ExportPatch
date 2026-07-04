/* Runtime dump - PLPMUAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLPMUAgent : PLAgent
{
    struct __IOHIDEventSystemClient * hidEventSystem;
    NSMutableDictionary * matchingSensors;
    NSMutableArray * sensorNamesC;
    NSMutableArray * sensorNamesV;
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;

+ (void)load;
+ (PLPMUAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;

- (PLPMUAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)logEventPointSensors;
- (void)initOperatorDependancies;
- (void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelChanged;

@end
