/* Runtime dump - MFNetworkController
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate>
{
    NSLock * _lock;
    struct __CFRunLoop * _rl;
    NSThread * _thread;
    NSMutableArray * _observers;
    struct __SCNetworkReachability * _reachability;
    unsigned int _flags;
    struct __SCDynamicStore * _store;
    struct __CFRunLoopSource * _store_source;
    char _dns;
    struct __CTServerConnection * _telephony;
    NSMutableSet * _calls;
    NSMutableSet * _backgroundWifiClients;
    long _interface;
    struct __SCPreferences * _wiFiPreferences;
    char _hasCellDataCapability;
    char _hasWiFiCapability;
    char _isWiFiEnabled;
    char _isRoamingAllowed;
    char _data;
    NSString * _dataIndicator;
    RadiosPreferences * _radiosPreferences;
    NSObject<OS_dispatch_queue> * _prefsQueue;
    void * _wifiManager;
}

@property (nonatomic) void * wifiManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFNetworkController *)sharedInstance;
+ (NSString *)networkAssertionWithIdentifier:(NSString *)arg0;

- (void)dealloc;
- (MFNetworkController *)init;
- (void)invalidate;
- (NSDictionary *)copyDiagnosticInformation;
- (char)isFatPipe;
- (char)is4GConnection;
- (char)is3GConnection;
- (char)inAirplaneMode;
- (id)addNetworkObserverBlock:(id /* block */)arg0 queue:(/* block */ id)arg1;
- (void)_checkKeys:(NSArray *)arg0 forStore:(struct __SCDynamicStore *)arg1;
- (void)_setUpTelephony_nts;
- (void)_inititializeWifiManager;
- (void)_setDataStatus_nts:(id)arg0;
- (struct ?)_pollDataAndCallStatus_nts;
- (void)_tearDownTelephony_nts;
- (char)_isNetworkUp_nts;
- (char)_simulationOverrideForType:(unsigned int)arg0 actualValue:(char)arg1;
- (NSString *)_networkAssertionWithIdentifier:(NSString *)arg0;
- (void)_updateWifiClientType;
- (void)airplaneModeChanged;
- (char)isDataAvailable;
- (char)isNetworkUp;
- (char)isOnWWAN;
- (void)_setFlags:(unsigned int)arg0 forReachability:(struct __SCNetworkReachability *)arg1;
- (void)_handleNotification:(NSNotification *)arg0 info:(NSDictionary *)arg1 forConnection:(struct __CTServerConnection *)arg2;
- (void)_handleWiFiNotification:(unsigned int)arg0;
- (void)removeNetworkObserver:(NSObject *)arg0;
- (void)addBackgroundWifiClient:(NSObject *)arg0;
- (void)removeBackgroundWifiClient:(NSObject *)arg0;
- (int)dataStatus;
- (void *)wifiManager;
- (void)setWifiManager:(void *)arg0;

@end
