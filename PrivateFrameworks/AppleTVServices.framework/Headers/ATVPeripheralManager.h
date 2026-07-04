/* Runtime dump - ATVPeripheralManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPeripheralManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBPairingAgentDelegate>
{
    CBCentralManager * _centralManager;
    NSArray * _connectableUUIDs;
    NSMutableSet * _connectedCBPeripherals;
    NSMutableDictionary * _discoveredCBPeripherals;
    NSString * _factoryBDAddress;
    NSMutableSet * _peripheralsBeingConnected;
    char _autoConnectWithImmediateProximityPeripheralsEnabled;
}

@property (readonly, nonatomic) NSArray * discoveredPeripherals;
@property (readonly, nonatomic) NSArray * connectedPeripherals;
@property (nonatomic) char autoConnectWithImmediateProximityPeripheralsEnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVPeripheralManager *)sharedInstance;

- (void)dealloc;
- (ATVPeripheralManager *)init;
- (void).cxx_destruct;
- (void)_presentPairingPasskeyForPeripheral:(id)arg0 withPasskey:(NSString *)arg1;
- (void)_presentPairingPasskeyChallengeForPeripheral:(id)arg0;
- (void)_updatePeripheralTrackingState:(NSObject *)arg0 connectIfNeeded:(char)arg1;
- (void)_startScanning;
- (void)connectPeripheral:(id)arg0;
- (void)startScanning;
- (NSObject *)_pairingDialogTitleFromPeer:(NSObject *)arg0;
- (NSString *)_retrievePairedRemoteBDAddress;
- (void)pairingAgent:(CBPairingAgent *)arg0 peerDidCompletePairing:(id)arg1;
- (void)pairingAgent:(CBPairingAgent *)arg0 peerDidFailToCompletePairing:(id)arg1 error:(NSError *)arg2;
- (void)pairingAgent:(CBPairingAgent *)arg0 peerDidUnpair:(id)arg1;
- (void)pairingAgent:(CBPairingAgent *)arg0 peerDidRequestPairing:(id)arg1 type:(int)arg2 passkey:(NSString *)arg3;
- (void)disconnectPeripheral:(id)arg0;
- (NSArray *)discoveredPeripherals;
- (NSArray *)connectedPeripherals;
- (NSOperationQueue *)_serialQueue;
- (id)findFirmwareUpdatesForPeripheral:(id)arg0 withCompletion:(id /* block */)arg1;
- (id)installFirmwareUpdateForPeripheral:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)cancelFirmwareOperationForToken:(NSString *)arg0;
- (void)readBatteryLevelForPeripheral:(id)arg0;
- (void)setAutoConnectWithImmediateProximityPeripheralsEnabled:(char)arg0;
- (void)_presentPairingConfirmationForPeripheral:(id)arg0;
- (char)autoConnectWithImmediateProximityPeripheralsEnabled;
- (void)centralManagerDidUpdateState:(NSObject *)arg0;
- (void)centralManager:(CBCentralManager *)arg0 didDiscoverPeripheral:(CBPeripheral *)arg1 advertisementData:(NSDictionary *)arg2 RSSI:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg0 didConnectPeripheral:(CBPeripheral *)arg1;
- (void)centralManager:(CBCentralManager *)arg0 didFailToConnectPeripheral:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)centralManager:(CBCentralManager *)arg0 didDisconnectPeripheral:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)peripheral:(TRDeviceSetupPeripheral *)arg0 didModifyServices:(id)arg1;
- (void)peripheral:(TRDeviceSetupPeripheral *)arg0 didDiscoverServices:(NSError *)arg1;
- (void)peripheral:(TRDeviceSetupPeripheral *)arg0 didDiscoverCharacteristicsForService:(NSObject *)arg1 error:(NSError *)arg2;
- (void)peripheral:(TRDeviceSetupPeripheral *)arg0 didUpdateValueForCharacteristic:(HAPCharacteristic *)arg1 error:(NSError *)arg2;
- (void)stopScanning;

@end
