/* Runtime dump - PCPersistentInterfaceManager
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate>
{
    NSRecursiveLock * _lock;
    NSMapTable * _delegatesAndQueues;
    struct __CFSet * _WiFiAutoAssociationDelegates;
    PCSimpleTimer * _WiFiAutoAssociationDisableTimer;
    struct __CFSet * _wakeOnWiFiDelegates;
    PCSimpleTimer * _wakeOnWiFiDisableTimer;
    void * _ctServerConnection;
    void * _interfaceAssertion;
    long _WWANContextIdentifier;
    NSString * _WWANInterfaceName;
    char _isWWANInterfaceUp;
    NSTimer * _inCallWWANOverrideTimer;
    char _isWWANInterfaceDataActive;
    char _ctIsWWANInHomeCountry;
    char _hasWWANStatusIndicator;
    char _isPowerStateDetectionSupported;
    char _isWWANInterfaceInProlongedHighPowerState;
    char _isWWANInterfaceActivationPermitted;
    double _lastActivationTime;
    int _wwanRSSI;
    char _isInCall;
    char _isWakeOnWiFiSupported;
    char _isWakeOnWiFiEnabled;
    char _shouldOverrideOnCallBehavior;
}

@property (readonly) char isWWANInterfaceUp;
@property (readonly) char isWWANInHomeCountry;
@property (readonly) char isWWANBetterThanWiFi;
@property (readonly) char doesWWANInterfaceExist;
@property (readonly) NSString * WWANInterfaceName;
@property (readonly) char isInternetReachableViaWiFi;
@property (readonly) char isWakeOnWiFiSupported;
@property (readonly) char isInternetReachable;
@property (readonly, retain, nonatomic) NSString * currentLinkQualityString;
@property (readonly) char isPowerStateDetectionSupported;
@property (readonly) char isWWANInterfaceInProlongedHighPowerState;
@property (readonly) char isInCall;
@property (readonly) char isWWANInterfaceActivationPermitted;
@property (readonly) char areAllNetworkInterfacesDisabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PCPersistentInterfaceManager *)sharedInstance;

- (void)handleMachMessage:(void *)arg0;
- (void)dealloc;
- (PCPersistentInterfaceManager *)init;
- (void)addDelegate:(NSObject *)arg0 queue:(NSObject *)arg1;
- (void)removeDelegate:(NSObject *)arg0;
- (void)_createCTConnection;
- (void)_updateWWANInterfaceUpStateLocked;
- (void)_serverCallbackLocked:(id)arg0 info:(NSDictionary *)arg1;
- (void)_mainThreadCTConnectionAttempt;
- (void)_ctConnectionAttempt;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_scheduleCalloutsForSelector:(SEL)arg0;
- (void)_updateCTIsWWANInHomeCountry:(char)arg0 isWWANInterfaceDataActive:(char)arg1;
- (char)_wantsWWANInterfaceAssertion;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_inCallWWANOverrideTimerFired;
- (char)isInternetReachable;
- (char)_isWWANInHomeCountryLocked;
- (char)_isInternetReachableLocked;
- (void)_adjustWakeOnWiFi;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_adjustWiFiAutoAssociation;
- (char)_wantsWakeOnWiFiEnabled;
- (void)_adjustWakeOnWiFiLocked;
- (char)doesWWANInterfaceExist;
- (char)isWWANInterfaceActivationPermitted;
- (char)isInCall;
- (char)_isWiFiUsable;
- (char)_allowBindingToWWAN;
- (void)bindCFStream:(struct __CFReadStream *)arg0 toWWANInterface:(char)arg1;
- (id)urlConnectionBoundToWWANInterface:(char)arg0 withRequest:(NSURLRequest *)arg1 delegate:(NSObject *)arg2 usesCache:(char)arg3 maxContentLength:(long long)arg4 startImmediately:(char)arg5 connectionProperties:(NSDictionary *)arg6;
- (void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1;
- (void)interfaceReachabilityChanged:(NSNotification *)arg0;
- (void)_serverCallback:(id /* block */)arg0 info:(NSDictionary *)arg1;
- (NSString *)currentLinkQualityString;
- (char)_wwanIsPoorLinkQuality;
- (char)_wifiIsPoorLinkQuality;
- (char)isWWANBetterThanWiFi;
- (char)isWWANInterfaceUp;
- (NSString *)WWANInterfaceName;
- (char)isPowerStateDetectionSupported;
- (char)isWWANInterfaceInProlongedHighPowerState;
- (char)isWWANInHomeCountry;
- (char)isInternetReachableViaWiFi;
- (char)isWakeOnWiFiSupported;
- (char)areAllNetworkInterfacesDisabled;
- (void)cutWiFiManagerDeviceAttached:(id)arg0;
- (void)_updateWWANInterfaceAssertions;
- (void)enableWiFiAutoAssociation:(char)arg0 forDelegate:(NSObject *)arg1;
- (void)enableWakeOnWiFi:(char)arg0 forDelegate:(NSObject *)arg1;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream *)arg0;
- (NSURLRequest *)urlConnectionBoundToWWANInterfaceWithRequest:(NSURLRequest *)arg0 delegate:(NSObject *)arg1 usesCache:(char)arg2 maxContentLength:(long long)arg3 startImmediately:(char)arg4 connectionProperties:(NSDictionary *)arg5;

@end
