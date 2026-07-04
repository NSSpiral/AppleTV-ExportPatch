/* Runtime dump - AXHearingAidDeviceController
 * Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingAidDeviceController : NSObject <CBCentralManagerDelegate, AXHADeviceControllerProtocol>
{
    CBCentralManager * _bluetoothManager;
    NSLock * _centralRequestsLock;
    char _isScanning;
    NSObject<OS_dispatch_queue> * _bluetoothCentralQueue;
    NSMutableArray * _availableSearchBlocks;
    NSMutableArray * _connectedSearchBlocks;
    NSMutableArray * _updateDeviceBlocks;
    AXHATimer * _deviceUpdatesTimer;
    NSMutableDictionary * _deviceUpdatesDescription;
    AXHATimer * _advertisingTimeoutTimer;
    NSMutableDictionary * _advertisingTimestamps;
    AXHATimer * _availableDeviceTimer;
    NSMutableArray * _availablePeripherals;
    NSMutableArray * _loadedDevices;
    NSMutableArray * _connectedDevices;
    NSMutableArray * centralRequestBlocks;
    NSMutableArray * _persistentDevices;
}

@property (retain) NSMutableArray * loadedDevices;
@property (retain, nonatomic) NSMutableArray * availablePeripherals;
@property (retain, nonatomic) NSMutableArray * connectedDevices;
@property (retain, nonatomic) NSMutableArray * persistentDevices;
@property (retain, nonatomic) NSMutableArray * updateDeviceBlocks;
@property (retain, nonatomic) NSMutableArray * centralRequestBlocks;
@property (retain, nonatomic) NSMutableArray * availableSearchBlocks;
@property (retain, nonatomic) NSMutableArray * connectedSearchBlocks;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (AXHearingAidDeviceController *)sharedController;

- (void)stopSearching;
- (void)dealloc;
- (AXHearingAidDeviceController *)init;
- (void)writeValue:(id)arg0 forProperty:(int)arg1 forDeviceID:(NSString *)arg2;
- (void)updateProperty:(int)arg0 forDeviceID:(NSString *)arg1;
- (void)connectToPeripheral:(id)arg0;
- (void)disconnectFromPeripheral:(id)arg0;
- (void)unpairPeripheral:(id)arg0;
- (void)device:(NSObject *)arg0 didUpdateProperty:(int)arg1;
- (void)resetConnectionToPeripheral:(id)arg0;
- (void)mergeDevice:(NSObject *)arg0 withDevice:(NSObject *)arg1;
- (char)peripheralIsPaired:(id)arg0;
- (id)hearingAidsForUUID:(id)arg0;
- (void)deviceDidFinishLoading:(id)arg0;
- (void)setUpdateDeviceBlocks:(NSMutableArray *)arg0;
- (char)isPartiallyConnected;
- (NSMutableArray *)updateDeviceBlocks;
- (void)registerForPropertyUpdates:(id)arg0;
- (void)stopPropertyUpdates;
- (NSMutableArray *)connectedDevices;
- (NSMutableArray *)persistentDevices;
- (NSMutableArray *)availablePeripherals;
- (NSMutableArray *)loadedDevices;
- (NSMutableArray *)availableSearchBlocks;
- (NSMutableArray *)connectedSearchBlocks;
- (void)searchForAvailableDevices;
- (void)searchForConnectedDevices;
- (void)setAvailablePeripherals:(NSMutableArray *)arg0;
- (void)setLoadedDevices:(NSMutableArray *)arg0;
- (void)setConnectedDevices:(NSMutableArray *)arg0;
- (void)setCentralRequestBlocks:(NSMutableArray *)arg0;
- (void)setPersistentDevices:(NSMutableArray *)arg0;
- (void)pairedHearingAidsDidChange;
- (void)setAvailableSearchBlocks:(NSMutableArray *)arg0;
- (void)setConnectedSearchBlocks:(NSMutableArray *)arg0;
- (void)removeLoadedDevice:(NSObject *)arg0;
- (char)isScanning;
- (void)clearMissingHearingAids;
- (void)sendRequestToCentralManager:(NSObject *)arg0;
- (id)hearingAidForPeripheral:(id)arg0;
- (NSMutableArray *)centralRequestBlocks;
- (void)loadedDevicesDidChange;
- (NSObject *)hearingAidForDeviceID:(NSObject *)arg0;
- (void)addLoadedDevice:(NSObject *)arg0;
- (void)addAvailableDevice:(NSObject *)arg0;
- (void)addConnectedDevice:(NSObject *)arg0;
- (void)removeAvailableDevice:(NSObject *)arg0;
- (void)removeConnectedDevice:(NSObject *)arg0;
- (char)isBluetoothAvailable;
- (void)clearAvailableDevices;
- (void)clearConnectedDevices;
- (void)clearLoadedDevices;
- (void)forgetDevice:(NSObject *)arg0;
- (void)searchForAvailableDevicesWithCompletion:(id /* block */)arg0;
- (void)cancelPendingConnections;
- (void)pairingAgent:(CBPairingAgent *)arg0 peerDidCompletePairing:(id)arg1;
- (void)pairingAgent:(CBPairingAgent *)arg0 peerDidFailToCompletePairing:(id)arg1 error:(NSError *)arg2;
- (void)pairingAgent:(CBPairingAgent *)arg0 peerDidUnpair:(id)arg1;
- (void)centralManagerDidUpdateState:(CBCentralManager *)arg0;
- (void)centralManager:(CBCentralManager *)arg0 didRetrievePeripherals:(NSArray *)arg1;
- (void)centralManager:(CBCentralManager *)arg0 didRetrieveConnectedPeripherals:(NSArray *)arg1;
- (void)centralManager:(CBCentralManager *)arg0 didDiscoverPeripheral:(CBPeripheral *)arg1 advertisementData:(NSDictionary *)arg2 RSSI:(NSNumber *)arg3;
- (void)centralManager:(CBCentralManager *)arg0 didConnectPeripheral:(CBPeripheral *)arg1;
- (void)centralManager:(CBCentralManager *)arg0 didFailToConnectPeripheral:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (void)centralManager:(CBCentralManager *)arg0 didDisconnectPeripheral:(CBPeripheral *)arg1 error:(NSError *)arg2;
- (char)isConnected;

@end
