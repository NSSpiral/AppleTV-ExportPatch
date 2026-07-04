/* Runtime dump - CBPeripheralManager
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBPeripheralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate>
{
    <CBPeripheralManagerDelegate> * _delegate;
    struct ? _delegateFlags;
    CBXpcConnection * _connection;
    CBPairingAgent * _pairingAgent;
    int _state;
    char _isAdvertising;
    NSMapTable * _centrals;
    NSMutableArray * _services;
    NSMutableDictionary * _characteristicIDs;
    NSLock * _updateLock;
    char _readyForUpdates;
    char _waitingForReady;
}

@property (weak, nonatomic) <CBPeripheralManagerDelegate> * delegate;
@property int state;
@property char isAdvertising;
@property (readonly, nonatomic) CBPairingAgent * sharedPairingAgent;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)authorizationStatus;

- (char)isMsgAllowedWhenOff:(int)arg0;
- (char)isMsgAllowedAlways:(int)arg0;
- (char)sendMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (id)sendSyncMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)handleStateUpdated:(id)arg0;
- (void)handleRestoringState:(NSObject *)arg0;
- (void)handleConnectionParametersUpdated:(id)arg0;
- (NSDictionary *)peerWithInfo:(NSDictionary *)arg0;
- (void)xpcConnectionDidReset:(NSSet *)arg0;
- (void)xpcConnectionIsInvalid:(id)arg0;
- (void)xpcConnection:(NSURLConnection *)arg0 didReceiveMsg:(unsigned short)arg1 args:(struct OpaqueJSValue * *)arg2;
- (void)xpcConnectionDidFinalize:(id)arg0;
- (void)handleMTUChanged:(NSNotification *)arg0;
- (NSDictionary *)centralWithInfo:(NSDictionary *)arg0;
- (void)forEachCentral:(id)arg0;
- (void)handleServiceAdded:(id)arg0;
- (void)handleGetAttributeValue:(id)arg0;
- (void)handleSetAttributeValues:(NSArray *)arg0;
- (void)handleNotificationAdded:(id)arg0;
- (void)handleNotificationRemoved:(id)arg0;
- (void)handleAdvertisingStarted:(id)arg0;
- (void)handleAdvertisingStopped:(id)arg0;
- (void)handleReadyForUpdates:(id)arg0;
- (void)handleSolicitedServicesFound:(id)arg0;
- (void)handleCentralMsg:(int)arg0 args:(struct OpaqueJSValue * *)arg1;
- (void)setDesiredConnectionLatency:(int)arg0 forCentral:(CBCentral *)arg1;
- (char)isAdvertising;
- (void)setIsAdvertising:(char)arg0;
- (void)release;
- (void)dealloc;
- (void)setDelegate:(<CBPeripheralManagerDelegate> *)arg0;
- (<CBPeripheralManagerDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (CBPeripheralManager *)initWithDelegate:(<CBPeripheralManagerDelegate> *)arg0 queue:(NSObject *)arg1 options:(NSDictionary *)arg2;
- (CBPairingAgent *)sharedPairingAgent;
- (CBPeripheralManager *)initWithDelegate:(<CBPeripheralManagerDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)removeAllServices;
- (void)addService:(NSObject *)arg0;
- (void)startAdvertising:(id)arg0;
- (void)respondToRequest:(NSURLRequest *)arg0 withResult:(int)arg1;
- (char)updateValue:(id)arg0 forCharacteristic:(HMCharacteristic *)arg1 onSubscribedCentrals:(id)arg2;
- (void)stopAdvertising;
- (void)removeService:(NSObject *)arg0;

@end
