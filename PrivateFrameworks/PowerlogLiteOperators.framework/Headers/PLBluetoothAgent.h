/* Runtime dump - PLBluetoothAgent
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBluetoothAgent : PLAgent
{
    char keepSessionAlive;
    struct BTSessionImpl * session;
    struct BTLocalDeviceImpl * localBluetoothDevice;
    PLEntryNotificationOperatorComposition * _batteryLevelChanged;
    NSString * _btHardwareChipset;
}

@property (retain) PLEntryNotificationOperatorComposition * batteryLevelChanged;
@property (readonly) NSString * btHardwareChipset;

+ (void)load;
+ (PLBluetoothAgent *)defaults;
+ (NSArray *)railDefinitions;
+ (NSArray *)accountingGroupDefinitions;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;
+ (NSArray *)entryEventBackwardDefinitions;
+ (NSArray *)entryEventIntervalDefinitions;
+ (NSArray *)entryEventNoneDefinitions;
+ (NSArray *)entryAggregateDefinitions;

- (void)dealloc;
- (PLBluetoothAgent *)init;
- (void)log;
- (void).cxx_destruct;
- (void)initOperatorDependancies;
- (void)setBatteryLevelChanged:(PLEntryNotificationOperatorComposition *)arg0;
- (PLEntryNotificationOperatorComposition *)batteryLevelChanged;
- (void)attachSession;
- (void)logwithBTOnCheck;
- (struct BTLocalDeviceImpl *)localBluetoothDevice;
- (void)sessionAttached:(struct BTSessionImpl *)arg0 withResult:(int)arg1;
- (void)sessionTerminated:(struct BTSessionImpl *)arg0 withResult:(int)arg1;
- (void)logEventForwardDeviceState;
- (void)logEventForwardPairedDevices;
- (void)logEventIntervalConnectedDevices;
- (char)modulePowered;
- (void)logEventBackwardPowerProfileStats;
- (void)modelBluetoothOffPower;
- (char)isDiscoverable;
- (char)isConnectable;
- (char)isConnected;
- (char)nikePowered;
- (NSString *)btHardwareChipset;
- (void)modelBluetoothPower:(id)arg0;
- (NSObject *)btHardwareChipsetQuery;
- (char)bluetoothPresent;
- (void)bluetoothSessionEvent:(int)arg0 onSession:(struct BTSessionImpl *)arg1 withResult:(int)arg2;
- (void)bluetoothDeviceEvent:(int)arg0 onDevice:(struct BTLocalDeviceImpl *)arg1 withResult:(int)arg2;

@end
