/* Runtime dump - PLAWDBattery
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDBattery : PLAWDAuxMetrics
{
    char _prevDeviceCharging;
    char _prevDisplayON;
    PLEntryNotificationOperatorComposition * _batteryEventCallback;
    PLEntryNotificationOperatorComposition * _displayEventCallback;
    long _dispOnOffCnt;
    long _batterySubmitCnt;
    double _prevCapacity;
    double _prevVoltage;
    double _prevDispTimeStamp;
}

@property (retain) PLEntryNotificationOperatorComposition * batteryEventCallback;
@property (retain) PLEntryNotificationOperatorComposition * displayEventCallback;
@property double prevCapacity;
@property double prevVoltage;
@property char prevDeviceCharging;
@property char prevDisplayON;
@property long dispOnOffCnt;
@property double prevDispTimeStamp;
@property long batterySubmitCnt;

+ (PLAWDBattery *)getSharedObjWithOperator:(PLOperator *)arg0;
+ (NSArray *)entryAggregateDefinitions;
+ (PLAWDBattery *)entryAggregateDefinitionAwdBattery;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)arg0;
- (void)stopMetricCollection:(id)arg0;
- (char)submitDataToAWDServer:(NSObject *)arg0 withAwdConn:(id)arg1;
- (void)initBatteryStats;
- (void)handleBatteryCallback:(id /* block */)arg0;
- (void)setBatteryEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)handleDisplayCallback:(id /* block */)arg0;
- (void)setDisplayEventCallback:(PLEntryNotificationOperatorComposition *)arg0;
- (void)setBatterySubmitCnt:(long)arg0;
- (void)setPrevDisplayON:(char)arg0;
- (void)setDispOnOffCnt:(long)arg0;
- (void)setPrevDispTimeStamp:(double)arg0;
- (void)setPrevCapacity:(double)arg0;
- (void)setPrevVoltage:(double)arg0;
- (void)setPrevDeviceCharging:(char)arg0;
- (void)resetBatteryTable;
- (char)isDeviceCharging:(id)arg0;
- (char)prevDeviceCharging;
- (double)prevVoltage;
- (double)prevCapacity;
- (char)prevDisplayON;
- (double)prevDispTimeStamp;
- (long)dispOnOffCnt;
- (void)addEntryToBatteryTable:(id)arg0 withValue:(double)arg1;
- (void)processEnergyConsumedAndAddEntry:(double)arg0 withVoltage:(double)arg1;
- (void)finalizeBatteryTable;
- (long)batterySubmitCnt;
- (void)reInitBatteryStats;
- (PLEntryNotificationOperatorComposition *)batteryEventCallback;
- (PLEntryNotificationOperatorComposition *)displayEventCallback;

@end
