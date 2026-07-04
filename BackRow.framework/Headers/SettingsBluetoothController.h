/* Runtime dump - SettingsBluetoothController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class ATVPINController, BRControl, BRListControl, BRMediaMenuView, BRMenuItem;
@interface SettingsBluetoothController : BRViewController
{
    char _pairingRequested;
    char _isSSP;
    BRMediaMenuView * _mediaMenuView;
    NSMutableArray * _availableDevices;
    NSTimer * _scanForDevicesTimer;
    BluetoothDevice * _deviceWithPINChallengeActive;
    ATVPINController * _pairingController;
    NSArray * _devicesInDisplayOrder;
    int _previousPlaybackState;
    NSMutableSet * _pairingRequestedByDeviceSet;
}

@property (readonly, nonatomic) NSArray * _devicesInDisplayOrder;
@property (retain, nonatomic) BRMediaMenuView * _mediaMenuView;
@property (retain, nonatomic) NSMutableArray * _availableDevices;
@property (weak, nonatomic) NSTimer * _scanForDevicesTimer;
@property (retain, nonatomic) BluetoothDevice * _deviceWithPINChallengeActive;
@property (retain, nonatomic) ATVPINController * _pairingController;
@property (nonatomic) int _previousPlaybackState;
@property (nonatomic) char _pairingRequested;
@property (nonatomic) char _isSSP;
@property (retain, nonatomic) NSMutableSet * _pairingRequestedByDeviceSet;

- (void)wasPopped;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (BRMediaMenuView *)_mediaMenuView;
- (void)wasExhumed;
- (void)set_mediaMenuView:(BRMediaMenuView *)arg0;
- (void)_bluetoothAvailabilityChanged:(NSNotification *)arg0;
- (void)_bluetoothDeviceDiscovered:(id)arg0;
- (void)_bluetoothDeviceUpdated:(id)arg0;
- (void)_bluetoothDeviceRemoved:(id)arg0;
- (void)_bluetoothDeviceChanged:(NSNotification *)arg0;
- (void)_bluetoothDiscoveryStateChanged:(NSNotification *)arg0;
- (void)_bluetoothDiscoveryStopped:(id)arg0;
- (void)_bluetoothConnectionSuccess:(id)arg0;
- (void)_bluetoothConnectionFailed:(id)arg0;
- (void)_bluetoothConnectionStatusChanged:(NSNotification *)arg0;
- (void)_bluetoothDisconnectSuccess:(id)arg0;
- (void)_bluetoothDisconnectFailed:(id)arg0;
- (void)_bluetoothPairingPINRequest:(NSURLRequest *)arg0;
- (void)_bluetoothPairingPINResultSuccess:(id)arg0;
- (void)_bluetoothPairingPINResultFailed:(id)arg0;
- (void)_bluetoothPairingUserNumericComparisonRequest:(NSURLRequest *)arg0;
- (void)_bluetoothdeviceUnpaired:(id)arg0;
- (void)_bluetoothPowerStateChanged:(NSNotification *)arg0;
- (void)_bluetoothIsAvailable:(char)arg0;
- (void)set_scanForDevicesTimer:(NSTimer *)arg0;
- (void)resetPairingStateIfNecessary:(id)arg0;
- (NSArray *)_devicesInDisplayOrder;
- (NSString *)_deviceProductName:(NSString *)arg0;
- (NSObject *)_confirmUnpairingPrimaryInfoTextForDevice:(NSObject *)arg0;
- (NSObject *)_confirmDisconnectPrimaryInfoTextForDevice:(NSObject *)arg0;
- (void)_removeDeviceOptionSelected:(id)arg0;
- (void)_generatedPinPairWithDevice:(struct OpaqueFigCaptureDevice *)arg0;
- (NSMutableArray *)_availableDevices;
- (void)set_availableDevices:(NSMutableArray *)arg0;
- (NSTimer *)_scanForDevicesTimer;
- (BluetoothDevice *)_deviceWithPINChallengeActive;
- (void)set_deviceWithPINChallengeActive:(BluetoothDevice *)arg0;
- (ATVPINController *)_pairingController;
- (void)set_pairingController:(ATVPINController *)arg0;
- (int)_previousPlaybackState;
- (void)set_previousPlaybackState:(int)arg0;
- (char)_pairingRequested;
- (void)set_pairingRequested:(char)arg0;
- (char)_isSSP;
- (void)set_isSSP:(char)arg0;
- (NSMutableSet *)_pairingRequestedByDeviceSet;
- (void)set_pairingRequestedByDeviceSet:(NSMutableSet *)arg0;
- (void)_reloadListIfAppropriate;
- (void)_pauseAudioIfNeeded;
- (void)_scanForDevicesTimerFired:(id)arg0;
- (void)_addToAvailableDevicesIfNecessary:(id)arg0 forceReload:(char)arg1;
- (NSObject *)_devicePairingAction:(NSObject *)arg0;
- (void)_pairingFailedOptionSelected:(id)arg0;
- (void)dealloc;
- (SettingsBluetoothController *)init;
- (void).cxx_destruct;

@end
