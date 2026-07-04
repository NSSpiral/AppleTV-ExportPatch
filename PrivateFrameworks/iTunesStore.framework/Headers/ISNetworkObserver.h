/* Runtime dump - ISNetworkObserver
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver>
{
    NSString * _dataStatusIndicator;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    char _isCellularRestricted;
    double _lastNetworkTypeChangeTime;
    int _networkUsageCount;
    int _networkType;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableSet * _observedDownloadQueues;
    NSString * _operatorName;
    struct __SCNetworkReachability * _reachability;
    NSString * _registrationStatus;
    struct __CTServerConnection * _telephonyServer;
}

@property int networkType;
@property (readonly) double lastNetworkTypeChangeTime;
@property (readonly) char usingNetwork;
@property (readonly) char shouldShowCellularAutomaticDownloadsSwitch;
@property (readonly) NSString * connectionTypeHeader;
@property (readonly) char wifiEnabled;
@property (readonly) NSString * dataStatusIndicator;
@property (readonly) NSString * mobileSubscriberCountryCode;
@property (readonly) NSString * mobileSubscriberNetworkCode;
@property (readonly) NSString * modemRegistrationStatus;
@property (readonly) NSString * operatorName;
@property (readonly) NSString * phoneNumber;
@property (readonly) NSString * providerName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ISNetworkObserver *)sharedInstance;
+ (void)set3GEnabled:(char)arg0;
+ (void)setAirplaneModeEnabled:(char)arg0;
+ (void)setWiFiEnabled:(char)arg0;

- (char)isWiFiEnabled;
- (void)_applicationWillEnterForegroundNotification:(NSNotification *)arg0;
- (int)networkType;
- (char)shouldShowCellularAutomaticDownloadsSwitch;
- (void)beginUsingNetwork;
- (void)endUsingNetwork;
- (char)isUsingNetwork;
- (void)dealloc;
- (ISNetworkObserver *)init;
- (NSString *)phoneNumber;
- (NSString *)providerName;
- (void)_handleTelephonyNotificationWithName:(struct __CFString *)arg0 userInfo:(struct __CFDictionary *)arg1;
- (NSString *)connectionTypeHeader;
- (NSString *)operatorName;
- (void)downloadQueueNetworkUsageChanged:(NSNotification *)arg0;
- (void)downloadQueue:(NSObject *)arg0 changedWithRemovals:(id)arg1;
- (double)lastNetworkTypeChangeTime;
- (int)_currentNetworkType;
- (char)_ntsIsUsingNetwork;
- (void)_postUsageChangedToValue:(char)arg0;
- (NSString *)copyValueForCarrierBundleKey:(NSString *)arg0;
- (NSString *)_dataStatusIndicator;
- (void)_reloadNetworkType;
- (int)_setNetworkType:(int)arg0;
- (void)_postTypeChangedNotificationFromValue:(int)arg0 toValue:(int)arg1;
- (int)_networkTypeForReachabilityFlags:(unsigned int)arg0;
- (int)_networkTypeFromDataIndicator:(id)arg0;
- (void)beginObservingDownloadQueue:(NSObject *)arg0;
- (void)endObservingDownloadQueue:(NSObject *)arg0;
- (NSString *)dataStatusIndicator;
- (char)isCellularDataEnabledForBundleIdentifier:(NSString *)arg0;
- (NSString *)mobileSubscriberCountryCode;
- (NSString *)mobileSubscriberNetworkCode;
- (NSString *)modemRegistrationStatus;
- (void)reloadNetworkType;
- (void)_reloadCellularRestriction;
- (void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)arg0;
- (void)setNetworkType:(int)arg0;

@end
