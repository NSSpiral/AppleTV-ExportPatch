/* Runtime dump - IAPAudioCallbackInfo
 * Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@interface IAPAudioCallbackInfo : NSObject
{
    /* block */ id * _deviceStateChangedCallback;
    void * _deviceStateChangedContext;
    /* block */ id * _volumeChangedCallback;
    void * _volumeChangedContext;
    /* block */ id * _pauseOnHeadphoneDisconnectChangedCallback;
    void * _pauseOnHeadphoneDisconnectChangedContext;
    /* block */ id * _volumeControlSupportChangedCallback;
    void * _volumeControlSupportChangedContext;
    CPDistributedNotificationCenter * _dnCenter;
    CPDistributedNotificationCenter * _dnCenteriAP2;
    struct __CFRunLoop * _dnCenterRunLoop;
    NSLock * _lock;
}

+ (IAPAudioCallbackInfo *)sharedInstance;

- (void)dealloc;
- (IAPAudioCallbackInfo *)init;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop *)arg0;
- (void)_deviceStateChanged:(NSNotification *)arg0;
- (void)_volumeChanged:(NSNotification *)arg0;
- (void)_pauseOnHeadphoneDisconnectChanged:(NSNotification *)arg0;
- (void)_volumeControlSupportChanged:(NSNotification *)arg0;
- (void)setupDeviceStateChangedCallback:(/* block */ id *)arg0 withContext:(void *)arg1 andRunLoop:(struct __CFRunLoop *)arg2;
- (void)clearDeviceStateChangedCallback;
- (void)setupVolumeChangedCallback:(/* block */ id *)arg0 withContext:(void *)arg1 andRunLoop:(struct __CFRunLoop *)arg2;
- (void)clearVolumeChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(/* block */ id *)arg0 withContext:(void *)arg1 andRunLoop:(struct __CFRunLoop *)arg2;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:(/* block */ id *)arg0 withContext:(void *)arg1 andRunLoop:(struct __CFRunLoop *)arg2;
- (void)clearVolumeControlSupportChangedCallback;

@end
