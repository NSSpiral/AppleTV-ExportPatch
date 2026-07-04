/* Runtime dump - TVPeripheralManagerUI
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControllerStack, BROptionDialog, BRViewController;
@interface TVPeripheralManagerUI : NSObject
{
    char _wantsToStartScanning;
    BRViewController * _pairingController;
    BROptionDialog * _errorController;
    BRControllerStack * _controllerStack;
    NSMutableSet * _bluetoothDevicesActivelySeekingPINs;
    NSString * _activePINRequestDeviceIdentifier;
    NSObject<TVPeripheralManagerUIBluetoothDelegate> * _bluetoothDelegate;
}

@property (weak) NSObject<TVPeripheralManagerUIBluetoothDelegate> * bluetoothDelegate;

- (void)removeAllUI;
- (void)stopScanningForBluetoothDevices;
- (TVPeripheralManagerUI *)initWithControllerStack:(BRControllerStack *)arg0;
- (void)setBluetoothDelegate:(NSObject<TVPeripheralManagerUIBluetoothDelegate> *)arg0;
- (void)startScanningForBluetoothDevices;
- (void)triggerPinPairingSequenceIfNeededWithBluetoothDevice:(NSObject *)arg0;
- (void)generatedPinPairRequestWithBluetoothDevice:(NSObject *)arg0;
- (void)_bluetoothAvailabilityChanged:(char)arg0;
- (void)_bluetoothDeviceDiscovered:(id)arg0;
- (void)_bluetoothDeviceRemoved:(id)arg0;
- (void)_bluetoothPairingPINRequest:(NSURLRequest *)arg0;
- (void)_bluetoothPairingPINResultSuccess:(id)arg0;
- (void)_bluetoothPairingPINResultFailed:(id)arg0;
- (NSObject *)_devicePairingAction:(NSObject *)arg0;
- (void)_bluetoothAvailabilityChangedNotification:(NSNotification *)arg0;
- (void)_bluetoothPowerChanged:(NSNotification *)arg0;
- (void)_userAcknowledgedFailDialog:(id)arg0;
- (NSObject<TVPeripheralManagerUIBluetoothDelegate> *)bluetoothDelegate;
- (void)dealloc;
- (void).cxx_destruct;

@end
