/* Runtime dump - CBPeripheral
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPeripheral : CBPeer
{
    <CBPeripheralDelegate> * _delegate;
    struct ? _delegateFlags;
    NSString * _name;
    NSNumber * _RSSI;
    int _state;
    NSMutableArray * _services;
    CBCentralManager * _centralManager;
    NSMutableDictionary * _attributes;
    char _isConnectedToSystem;
}

@property (weak, nonatomic) <CBPeripheralDelegate> * delegate;
@property (retain) NSString * name;
@property (retain) NSNumber * RSSI;
@property (readonly) char isConnected;
@property int state;
@property (retain) NSArray * services;
@property (readonly, nonatomic) char isConnectedToSystem;

- (unsigned int)maximumWriteValueLengthForType:(int)arg0;
- (void)sendMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (id)sendSyncMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (CBPeripheral *)initWithCentralManager:(CBCentralManager *)arg0 info:(NSDictionary *)arg1;
- (void)handleDisconnection;
- (void)setOrphan;
- (void)setAttribute:(char *)arg0 forHandle:(_NSStdIOFileHandle *)arg1;
- (void)handleSuccessfulConnection:(NSURLConnection *)arg0;
- (void)handleFailedConnection;
- (void)handleConnectionStateUpdated:(char)arg0;
- (void)handleMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)removeAttributeForHandle:(id)arg0;
- (id)attributeForHandle:(id)arg0;
- (void)sendMsg:(int)arg0 requiresConnected:(char)arg1 args:(struct OpaqueJSValue * *)arg2;
- (void)handleNameUpdated:(id)arg0;
- (void)handleServicesChanged:(NSNotification *)arg0;
- (void)handleRSSIUpdated:(id)arg0;
- (void)handleServicesDiscovered:(id)arg0;
- (void)handleWritesExecuted:(id)arg0;
- (void)handleTimeSyncResponse:(NSURLResponse *)arg0;
- (void)handleServiceIncludedServicesDiscovered:(id)arg0;
- (void)handleServiceCharacteristicsDiscovered:(id)arg0;
- (void)handleCharacteristicValueUpdated:(id)arg0;
- (void)handleCharacteristicValueWritten:(id)arg0;
- (void)handleCharacteristicValueNotifying:(id)arg0;
- (void)handleCharacteristicDescriptorsDiscovered:(id)arg0;
- (void)handleDescriptorValueUpdated:(id)arg0;
- (void)handleDescriptorValueWritten:(id)arg0;
- (void)invalidateAllAttributes;
- (void)handleAttributeEvent:(NSObject *)arg0 args:(struct OpaqueJSValue * *)arg1 attributeSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(char)arg4;
- (void)handleServiceEvent:(NSObject *)arg0 serviceSelector:(SEL)arg1 delegateSelector:(SEL)arg2 delegateFlag:(char)arg3;
- (void)handleCharacteristicEvent:(NSObject *)arg0 characteristicSelector:(SEL)arg1 delegateSelector:(SEL)arg2 delegateFlag:(char)arg3;
- (void)handleDescriptorEvent:(NSObject *)arg0 descriptorSelector:(SEL)arg1 delegateSelector:(SEL)arg2 delegateFlag:(char)arg3;
- (void)readRSSI;
- (void)discoverIncludedServices:(id)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)reliablyWriteValues:(NSArray *)arg0 forCharacteristics:(GEOVCharacteristics *)arg1;
- (void)setBroadcastValue:(char)arg0 forCharacteristic:(HMCharacteristic *)arg1;
- (void)writeValue:(id)arg0 forDescriptor:(NSObject *)arg1;
- (void)getTimeSyncData;
- (char)isConnectedToSystem;
- (void)dealloc;
- (void)setDelegate:(<CBPeripheralDelegate> *)arg0;
- (NSString *)description;
- (<CBPeripheralDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (char)hasTag:(NSString *)arg0;
- (void)untag:(id)arg0;
- (void)tag:(NSString *)arg0;
- (NSArray *)services;
- (void)setServices:(NSArray *)arg0;
- (void)discoverServices:(id)arg0;
- (void)discoverCharacteristics:(id)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)discoverDescriptorsForCharacteristic:(id)arg0;
- (void)readValueForCharacteristic:(id)arg0;
- (void)readValueForDescriptor:(NSObject *)arg0;
- (void)setNotifyValue:(char)arg0 forCharacteristic:(HMCharacteristic *)arg1;
- (void)writeValue:(id)arg0 forCharacteristic:(HMCharacteristic *)arg1 type:(int)arg2;
- (void)setRSSI:(NSSet *)arg0;
- (NSNumber *)RSSI;
- (char)isConnected;

@end
