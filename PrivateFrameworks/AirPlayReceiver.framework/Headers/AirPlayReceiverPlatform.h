/* Runtime dump - AirPlayReceiverPlatform
 * Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayReceiverPlatform : NSObject <WPAirPlaySoloDelegate>
{
    struct AirPlayReceiverUIPrivate * _ui;
    struct AirPlayReceiverServerPrivate * _server;
    int _cloudConnectivityNotifyToken;
    int _conferenceRoomModeNotifyToken;
    int _dacpErrorNotifyToken;
    id _dacpNotifyTokens;
    int _lockDownActivationStateToken;
    unsigned char _playbackPrevented;
    int _playbackAllowNotifyToken;
    int _playbackPreventNotifyToken;
    int _prefChangedNotifyToken;
    int _managedDefaultsChangedNotificationToken;
    int _systemBufferSamples;
    int _systemSampleRate;
    unsigned char _voiceForSiri;
    unsigned char _voiceForTelephony;
    unsigned char _btleEnabled;
    unsigned char _btleStarted;
    WPAirPlaySolo * _btleServer;
    struct ? _btleAdvertisementData;
    unsigned char _btleSeed;
    NSObject<OS_dispatch_source> * _btleTimer;
    NSObject<OS_dispatch_queue> * _btleQueue;
    struct __SCDynamicStore * _btleSCStore;
    struct __CFDictionary * _soloDevices;
    int _touchSetupActiveNotifyToken;
    unsigned char _p2pSolo;
    AirPlayControllerServer * _controllerServer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_btleStart;
- (void)_btleStop;
- (void)_btleUpdate;
- (long)_btleStartListeningForNetworkChanges;
- (void)_btleStopListeningForNetworkChanges;
- (void)_btleUpdateAdvertisementData;
- (void)airPlaySoloDidUpdateState:(NSObject *)arg0;
- (void)airPlaySolo:(WPAirPlaySolo *)arg0 foundDevice:(NSObject *)arg1 withData:(NSData *)arg2;
- (void)airPlaySoloStartedAdvertising:(id)arg0;
- (void)airPlaySoloStoppedAdvertising:(id)arg0;
- (void)airPlaySolo:(WPAirPlaySolo *)arg0 failedToStartAdvertisingWithError:(NSError *)arg1;
- (void)airPlaySoloStartedScanning:(id)arg0;
- (void)airPlaySoloStoppedScanning:(id)arg0;
- (void)airPlaySolo:(WPAirPlaySolo *)arg0 failedToStartScanningWithError:(NSError *)arg1;

@end
