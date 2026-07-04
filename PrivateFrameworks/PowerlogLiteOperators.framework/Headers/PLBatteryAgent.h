/* Runtime dump - PLBatteryAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBatteryAgent : PLAgent
{
    char _allowGasGaugeRead;
    char _deviceIsPluggedIn;
    PLIOKitOperatorComposition * _iokit;
    PLEntryNotificationOperatorComposition * _canSleepEntryNotifications;
    PLSemaphore * _canSleepSemaphore;
    PLEntryNotificationOperatorComposition * _wakeEntryNotifications;
    PLNSTimerOperatorComposition * _gasGaugeTimer;
    struct __IOHIDEventSystemClient * _accessoryVoltageHIDRef;
    struct __IOHIDEventSystemClient * _accessoryCurrentHIDRef;
    NSArray * _accessoryVoltageMatchingSensors;
    NSArray * _accessoryCurrentMatchingSensors;
    struct ggcontext * _gasGagueConnection;
    int _gasGaugeConsecutiveEmptyEntriesCount;
    PLXPCResponderOperatorComposition * _batteryInfoResponder;
    double _batteryLevelPercent;
    double _rawBatteryVoltageVolt;
}

@property (readonly) PLIOKitOperatorComposition * iokit;
@property (readonly) PLEntryNotificationOperatorComposition * canSleepEntryNotifications;
@property (retain) PLSemaphore * canSleepSemaphore;
@property (readonly) PLEntryNotificationOperatorComposition * wakeEntryNotifications;
@property (retain) PLNSTimerOperatorComposition * gasGaugeTimer;
@property struct __IOHIDEventSystemClient * accessoryVoltageHIDRef;
@property struct __IOHIDEventSystemClient * accessoryCurrentHIDRef;
@property (retain) NSArray * accessoryVoltageMatchingSensors;
@property (retain) NSArray * accessoryCurrentMatchingSensors;
@property struct ggcontext * gasGagueConnection;
@property int gasGaugeConsecutiveEmptyEntriesCount;
@property char allowGasGaugeRead;
@property char deviceIsPluggedIn;
@property double batteryLevelPercent;
@property double rawBatteryVoltageVolt;
@property (retain) PLXPCResponderOperatorComposition * batteryInfoResponder;

+ (void)load;
+ (PLBatteryAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (PLBatteryAgent *)entryEventIntervalDefinitionGasGauge;
+ (PLBatteryAgent *)entryEventBackwardDefinitionBattery;
+ (PLBatteryAgent *)entryEventBackwardDefinitionBatteryUI;

- (void)dealloc;
- (PLBatteryAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (NSDate *)trimmingConditionsForRolloverAtDate:(NSDate *)arg0;
- (PLSemaphore *)canSleepSemaphore;
- (void)setCanSleepSemaphore:(PLSemaphore *)arg0;
- (PLEntryNotificationOperatorComposition *)wakeEntryNotifications;
- (void)initializeAccessoryIOHIDForType:(short)arg0;
- (void)setBatteryLevelPercent:(double)arg0;
- (void)setDeviceIsPluggedIn:(char)arg0;
- (void)setRawBatteryVoltageVolt:(double)arg0;
- (double)rawBatteryVoltageVolt;
- (void)setAllowGasGaugeRead:(char)arg0;
- (void)logEventIntervalGasGauge;
- (char)gasGaugeOpenAndStartLogging;
- (char)gasGaugeStopLoggingAndClose;
- (void)setAccessoryCurrentHIDRef:(struct __IOHIDEventSystemClient *)arg0;
- (void)setAccessoryCurrentMatchingSensors:(NSArray *)arg0;
- (void)setAccessoryVoltageHIDRef:(struct __IOHIDEventSystemClient *)arg0;
- (void)setAccessoryVoltageMatchingSensors:(NSArray *)arg0;
- (void)setBatteryInfoResponder:(PLXPCResponderOperatorComposition *)arg0;
- (void)logEventBackwardBattery;
- (char)allowGasGaugeRead;
- (void)gasGaugeRead;
- (PLIOKitOperatorComposition *)iokit;
- (struct ggcontext *)gasGagueConnection;
- (void)setGasGagueConnection:(struct ggcontext *)arg0;
- (char)deviceIsPluggedIn;
- (double)batteryLevelPercent;
- (char)givePluggedInFreePass;
- (double)accessorySensorReadingForType:(short)arg0;
- (id)railGasGuage;
- (void)setGasGaugeConsecutiveEmptyEntriesCount:(int)arg0;
- (int)gasGaugeConsecutiveEmptyEntriesCount;
- (struct __IOHIDEventSystemClient *)accessoryCurrentHIDRef;
- (NSArray *)accessoryCurrentMatchingSensors;
- (struct __IOHIDEventSystemClient *)accessoryVoltageHIDRef;
- (NSArray *)accessoryVoltageMatchingSensors;
- (PLEntryNotificationOperatorComposition *)canSleepEntryNotifications;
- (PLNSTimerOperatorComposition *)gasGaugeTimer;
- (void)setGasGaugeTimer:(PLNSTimerOperatorComposition *)arg0;
- (PLXPCResponderOperatorComposition *)batteryInfoResponder;

@end
