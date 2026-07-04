/* Runtime dump - SFWirelessSettingsController
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFWirelessSettingsController : NSObject
{
    id _delegate;
    char _wifiEnabled;
    char _bluetoothEnabled;
    char _deviceSupportsWAPI;
    char _firstCallbackCompleted;
    char _wirelessAccessPointEnabled;
    struct __SFOperation * _information;
    NSObject<OS_dispatch_semaphore> * _firstCallBackSemaphore;
}

@property (weak) <SFWirelessSettingsControllerDelegate> * delegate;
@property char bluetoothEnabled;
@property char wifiEnabled;
@property (readonly) char wirelessAccessPointEnabled;
@property (readonly) char deviceSupportsWAPI;

- (char)isWifiEnabled;
- (void)dealloc;
- (void)setDelegate:(<SFWirelessSettingsControllerDelegate> *)arg0;
- (SFWirelessSettingsController *)init;
- (<SFWirelessSettingsControllerDelegate> *)delegate;
- (void)setWifiEnabled:(char)arg0;
- (void)handleOperationCallback:(struct __SFOperation *)arg0 event:(long)arg1 withResults:(NSArray *)arg2;
- (void)setBluetoothEnabled:(char)arg0;
- (char)isBluetoothEnabled;
- (void)repairAppleID;
- (char)deviceSupportsWAPI;
- (char)isWirelessAccessPointEnabled;

@end
