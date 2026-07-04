/* Runtime dump - TVPeripheralManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol CoreControlDelegate;
@interface TVPeripheralManager : NSObject <CoreControlDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TVPeripheralManager *)sharedInstance;

- (void)startManagement;
- (void)infraredRemoteLowBatteryEventReceived;
- (void)infraredRemotePairEventReceived;
- (void)infraredRemoteUnpairEventReceived;
- (void)_startBluetoothManagement;
- (void)_bluetoothBatteryNotification:(NSNotification *)arg0;
- (void)_bluetoothDeviceConnectedSuccessfullyNotification:(NSNotification *)arg0;
- (void)_bluetoothDeviceConnectionFailedNotification:(NSNotification *)arg0;
- (void)_bluetoothDeviceDisconnectedSuccessfullyNotification:(NSNotification *)arg0;
- (void)_bluetoothDeviceDisconnectionFailedNotification:(NSNotification *)arg0;

@end
