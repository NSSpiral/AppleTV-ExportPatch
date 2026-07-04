/* Runtime dump - CBCentralManager
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBCentralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate>
{
    <CBCentralManagerDelegate> * _delegate;
    struct ? _delegateFlags;
    int _state;
    char _isScanning;
    NSMapTable * _peripherals;
    CBXpcConnection * _connection;
    CBPairingAgent * _pairingAgent;
}

@property (weak, nonatomic) <CBCentralManagerDelegate> * delegate;
@property int state;
@property (readonly, nonatomic) CBPairingAgent * sharedPairingAgent;
@property char isScanning;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)isMsgAllowedWhenOff:(int)arg0;
- (char)isMsgAllowedAlways:(int)arg0;
- (char)sendMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (id)sendSyncMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (NSDictionary *)peripheralWithInfo:(NSDictionary *)arg0;
- (void)forEachPeripheral:(id)arg0;
- (void)orphanPeripherals;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg0 allowAll:(char)arg1;
- (void)setIsScanning:(char)arg0;
- (NSArray *)dataArrayToUUIDArray:(NSArray *)arg0;
- (NSString *)peripheralWithIdentifier:(NSString *)arg0;
- (void)handleStateUpdated:(id)arg0;
- (void)handleRestoringState:(NSObject *)arg0;
- (void)handlePeripheralDiscovered:(id)arg0;
- (void)handlePeripheralsRetrieved:(id)arg0;
- (void)handleConnectedPeripheralsRetrieved:(id)arg0;
- (void)handlePeripheralConnectionCompleted:(id)arg0;
- (void)handlePeripheralDisconnectionCompleted:(id)arg0;
- (void)handlePeripheralConnectionStateUpdated:(id)arg0;
- (void)handleZoneLost:(id)arg0;
- (void)handleConnectionParametersUpdated:(id)arg0;
- (void)handlePeripheralMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (NSDictionary *)peerWithInfo:(NSDictionary *)arg0;
- (void)xpcConnectionDidReset:(NSSet *)arg0;
- (void)xpcConnectionIsInvalid:(id)arg0;
- (void)xpcConnection:(NSURLConnection *)arg0 didReceiveMsg:(unsigned short)arg1 args:(struct OpaqueJSValue * *)arg2;
- (void)xpcConnectionDidFinalize:(id)arg0;
- (void)retrievePeripherals:(id)arg0;
- (void)retrieveConnectedPeripherals;
- (void)release;
- (void)dealloc;
- (void)setDelegate:(<CBCentralManagerDelegate> *)arg0;
- (<CBCentralManagerDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (CBCentralManager *)initWithDelegate:(<CBCentralManagerDelegate> *)arg0 queue:(NSObject *)arg1 options:(NSDictionary *)arg2;
- (char)isScanning;
- (void)cancelPeripheralConnection:(NSURLConnection *)arg0 force:(char)arg1;
- (CBPairingAgent *)sharedPairingAgent;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg0;
- (void)connectPeripheral:(id)arg0 options:(NSDictionary *)arg1;
- (void)cancelPeripheralConnection:(NSURLConnection *)arg0;
- (void)setDesiredConnectionLatency:(int)arg0 forPeripheral:(CBPeripheral *)arg1;
- (CBCentralManager *)initWithDelegate:(<CBCentralManagerDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg0 options:(NSDictionary *)arg1;
- (NSString *)retrievePeripheralsWithIdentifiers:(id)arg0;

@end
