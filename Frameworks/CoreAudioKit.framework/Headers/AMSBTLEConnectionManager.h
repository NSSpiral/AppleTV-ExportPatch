/* Runtime dump - AMSBTLEConnectionManager
 * Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager * centralManager;
    NSMutableArray * peripheralList;
    NSMutableArray * connectedBTPeripherals;
    NSMutableArray * connectedAMSPeripherals;
    NSTimer * refreshTimer;
    <BTLEConnectionTable> * controller;
    int centralState;
}

@property (readonly) NSMutableArray * peripheralList;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct OpaqueMIDIDevice *)midiDeviceForUUID:(id)arg0;
- (char)isLECapableHardware;
- (AMSBTLEConnectionManager *)initWithUIController:(BRController *)arg0;
- (NSMutableArray *)peripheralList;
- (void)createPeripheralList;
- (char)peripheralIsConnectedCentral:(id)arg0;
- (id)amsPeripheralForCBPeripheral:(id)arg0;
- (void)setUIController:(BRController *)arg0;
- (int)bluetoothState;
- (void)removeAMSPeripheralForCBPeripheral:(id)arg0;
- (void)killTimer;
- (void)dealloc;
- (void)timerFired:(id)arg0;
- (void)startTimer;
- (void)stopScan;
- (void)centralManagerDidUpdateState:(CBCentralManager *)arg0;
- (void)centralManager:(CBCentralManager *)arg0 didRetrievePeripherals:(NSArray *)arg1;
- (void)centralManager:(CBCentralManager *)arg0 didDiscoverPeripheral:(CBPeripheral *)arg1 advertisementData:(NSDictionary *)arg2 RSSI:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg0 didConnectPeripheral:(CBPeripheral *)arg1;
- (void)centralManager:(CBCentralManager *)arg0 didFailToConnectPeripheral:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)centralManager:(CBCentralManager *)arg0 didDisconnectPeripheral:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg0 didDiscoverServices:(NSError *)arg1;
- (void)peripheral:(CBPeripheral *)arg0 didDiscoverCharacteristicsForService:(CBService *)arg1 error:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg0 didUpdateValueForCharacteristic:(CBCharacteristic *)arg1 error:(NSError *)arg2;
- (void)startScan;

@end
