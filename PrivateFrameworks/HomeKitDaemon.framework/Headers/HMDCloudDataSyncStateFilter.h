/* Runtime dump - HMDCloudDataSyncStateFilter
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HMMessageReceiver, HAPTimerDelegate>
{
    char _keychainSyncEnabled;
    char _keychainSyncRequiredPopShown;
    char _iCloudAccountActive;
    char _cloudDataSyncCompleted;
    char _serverTokenAvailable;
    char _decryptionFailed;
    char _networkConnectivityAvailable;
    NSUUID * _uuid;
    int _circleNotificationToken;
    HMMessageDispatcher * _msgDispatcher;
    int _totalTransientPeerDevices;
    NSObject<OS_dispatch_source> * _popupTimer;
    int _totalHomes;
    HAPTimer * _cloudDataSyncInProgressTimer;
    NSDate * _dataSyncTimerStartTimestamp;
    double _remainingDataSyncPeriod;
}

@property (retain, nonatomic) NSUUID * uuid;
@property (nonatomic) int circleNotificationToken;
@property (nonatomic) char keychainSyncEnabled;
@property (retain, nonatomic) HMMessageDispatcher * msgDispatcher;
@property (nonatomic) int totalTransientPeerDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * popupTimer;
@property (nonatomic) char keychainSyncRequiredPopShown;
@property (nonatomic) char iCloudAccountActive;
@property (nonatomic) char cloudDataSyncCompleted;
@property (nonatomic) char serverTokenAvailable;
@property (nonatomic) int totalHomes;
@property (nonatomic) char decryptionFailed;
@property (nonatomic) char networkConnectivityAvailable;
@property (retain, nonatomic) HAPTimer * cloudDataSyncInProgressTimer;
@property (nonatomic) double remainingDataSyncPeriod;
@property (retain, nonatomic) NSDate * dataSyncTimerStartTimestamp;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (char)isWhitelistedRemoteTransportMessage:(NSString *)arg0;

- (void)dealloc;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (void)timerDidFire:(HAPTimer *)arg0;
- (HMMessageDispatcher *)msgDispatcher;
- (void)setMsgDispatcher:(HMMessageDispatcher *)arg0;
- (NSUUID *)messageTargetUUID;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;
- (void)resetConfiguration;
- (char)acceptMessage:(NSString *)arg0 target:(NSObject *)arg1 errorReason:(id *)arg2;
- (char)shouldCloudSyncData;
- (void)_registerForCircleChangeNotifications;
- (int)circleNotificationToken;
- (void)_handleCircleChangedNotification;
- (void)_handleRemoteAccessPeersFoundNotification:(NSNotification *)arg0;
- (void)_handleAccountStatusChanged:(NSNotification *)arg0;
- (void)setCircleNotificationToken:(int)arg0;
- (void)setTotalTransientPeerDevices:(int)arg0;
- (int)totalTransientPeerDevices;
- (void)setKeychainSyncEnabled:(char)arg0;
- (char)keychainSyncEnabled;
- (char)decryptionFailed;
- (void)setDecryptionFailed:(char)arg0;
- (void)_startCloudDataSyncTimer;
- (void)_stopCloudDataSyncTimer;
- (void)setNetworkConnectivityAvailable:(char)arg0;
- (void)_stallCloudDataSyncTimer;
- (HAPTimer *)cloudDataSyncInProgressTimer;
- (void)_resetCloudDataSyncTimer;
- (double)remainingDataSyncPeriod;
- (void)setRemainingDataSyncPeriod:(double)arg0;
- (void)setCloudDataSyncInProgressTimer:(HAPTimer *)arg0;
- (void)setDataSyncTimerStartTimestamp:(NSDate *)arg0;
- (NSDate *)dataSyncTimerStartTimestamp;
- (void)setICloudAccountActive:(char)arg0;
- (char)iCloudAccountActive;
- (void)_updateCloudDataSyncState:(char)arg0;
- (void)setPopupTimer:(NSObject<OS_dispatch_source> *)arg0;
- (NSObject<OS_dispatch_source> *)popupTimer;
- (void)_stopPopupTimer;
- (void)setKeychainSyncRequiredPopShown:(char)arg0;
- (void)setTotalHomes:(int)arg0;
- (int)totalHomes;
- (char)keychainSyncRequiredPopShown;
- (void)_startPopupTimer;
- (char)_cloudSyncinProgressCheck;
- (char)cloudDataSyncCompleted;
- (char)serverTokenAvailable;
- (char)networkConnectivityAvailable;
- (void)setCloudDataSyncCompleted:(char)arg0;
- (void)setServerTokenAvailable:(char)arg0;
- (HMDCloudDataSyncStateFilter *)initWithName:(NSString *)arg0 messageDispatcher:(HMDIDSMessageDispatcher *)arg1 totalTransientPeerDevices:(unsigned int)arg2 serverTokenAvailable:(char)arg3 totalHomes:(int)arg4;
- (void)updateDecryptionFailed:(char)arg0;
- (void)updateNetworkConnectivity:(char)arg0;
- (void)updateTotalHomes:(int)arg0;
- (void)updateCloudDataSyncState:(char)arg0;
- (void)updateServerTokenAvailable:(char)arg0;
- (void)setUuid:(NSUUID *)arg0;

@end
