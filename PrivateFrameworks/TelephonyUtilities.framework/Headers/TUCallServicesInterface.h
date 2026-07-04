/* Runtime dump - TUCallServicesInterface
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallServicesInterface : NSObject <TUCallServicesDaemonObserver, TUCallServicesProxyCallActions>
{
    char _muted;
    <TUCallServicesDaemonDelegate> * _daemonDelegate;
    TUCallCenterCallsCache * _callsCache;
    NSArray * _currentProxyCalls;
    TUProxyCallModel * _proxyCallModel;
    NSData * _localFrequency;
    NSData * _remoteFrequency;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <TUCallServicesDaemonDelegate> * daemonDelegate;
@property (retain, nonatomic) TUCallCenterCallsCache * callsCache;
@property (copy, nonatomic) NSArray * currentProxyCalls;
@property (retain, nonatomic) TUProxyCallModel * proxyCallModel;
@property (retain, nonatomic) NSData * localFrequency;
@property (retain, nonatomic) NSData * remoteFrequency;
@property (nonatomic) char muted;
@property (retain, nonatomic) NSXPCConnection * xpcConnection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TUCallServicesInterface *)sharedInstance;
+ (char)launchesCallServicesDaemonOnDemand;

- (void)setMuted:(char)arg0;
- (void)dealloc;
- (TUCallServicesInterface *)init;
- (char)isMuted;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;
- (TUProxyCallModel *)proxyCallModel;
- (void)handleCallModelStateChanged:(NSNotification *)arg0;
- (NSData *)localFrequency;
- (NSData *)remoteFrequency;
- (void)_tearDownXPCConnection;
- (void)_setUpXPCConnection;
- (void)setRelayCallingEnabled:(char)arg0;
- (void)sendHardPauseDigits;
- (TUCallCenterCallsCache *)callsCache;
- (void)conferenceCall:(TUCall *)arg0;
- (void)unconferenceCall:(id)arg0;
- (void)holdCall:(id)arg0;
- (void)unholdCall:(id)arg0;
- (void)disconnectCall:(id)arg0;
- (void)playDTMFToneForCall:(id)arg0 key:(unsigned char)arg1;
- (void)answerCall:(id)arg0;
- (void)muteCall:(id)arg0;
- (void)unmuteCall:(id)arg0;
- (void)setIsSendingAudio:(char)arg0 forCall:(CTCall *)arg1;
- (id)callStateForCall:(id)arg0;
- (void)handleRelayCallingCapabilitiesChanged:(NSNotification *)arg0;
- (void)handleCallStatusChanged:(NSNotification *)arg0;
- (void)requestPendingCallNotifications;
- (void)setCurrentProxyCalls:(NSArray *)arg0;
- (void)handleCallStatusChangedForProxyCall:(id)arg0;
- (<TUCallServicesDaemonDelegate> *)daemonDelegate;
- (NSArray *)currentProxyCalls;
- (id)daemonDelegateWithErrorHandler:(SSErrorHandler *)arg0;
- (void)requestHandoffForAllCalls;
- (void)dialCall:(id)arg0;
- (void)swapCalls;
- (void)endActiveAndAnswerCall:(id)arg0;
- (void)endHeldAndAnswerCall:(id)arg0;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)disconnectAllCalls;
- (void)setLocalFrequency:(NSData *)arg0;
- (void)setRemoteFrequency:(NSData *)arg0;
- (void)handleWantsHoldMusicChangedTo:(char)arg0 forCallWithUUID:(id)arg1;
- (void)handleEndpointOnCurrentDeviceChangedTo:(char)arg0 forCallWithUUID:(id)arg1;
- (void)handleDisconnectedReasonChangedTo:(int)arg0 forCallWithUUID:(id)arg1;
- (void)handleShouldSuppressRingtoneChangedTo:(char)arg0 forCallWithUUID:(id)arg1;
- (void)handleLocalFrequencyChangedTo:(id)arg0;
- (void)handleRemoteFrequencyChangedTo:(id)arg0;
- (void)handleMutedChangedTo:(char)arg0;
- (void)handleHardPauseDigitsAvailibilityChangedTo:(unsigned short)arg0 digits:(NSString *)arg1;
- (void)handleCallContinuityStateChangedForProxyCall:(id)arg0;
- (void)handleCurrentProxyCallsChanged:(NSNotification *)arg0;
- (void)setWantsHoldMusic:(char)arg0 forCall:(CTCall *)arg1;
- (void)setEndpointOnCurrentDevice:(char)arg0 forCall:(CTCall *)arg1;
- (void)setDisconnectedReason:(int)arg0 forCall:(CTCall *)arg1;
- (void)setShouldSuppressRingtone:(char)arg0 forCall:(CTCall *)arg1;
- (id)dial:(id)arg0 callID:(int)arg1 service:(int)arg2 sourceIdentifier:(NSString *)arg3;
- (char)relayableHostDeviceExists;
- (char)relayableClientDeviceExists;
- (void)setDaemonDelegate:(<TUCallServicesDaemonDelegate> *)arg0;
- (void)setCallsCache:(TUCallCenterCallsCache *)arg0;
- (void)setProxyCallModel:(TUProxyCallModel *)arg0;

@end
