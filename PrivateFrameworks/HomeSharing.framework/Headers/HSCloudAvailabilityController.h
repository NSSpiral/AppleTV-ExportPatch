/* Runtime dump - HSCloudAvailabilityController
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, HSCloudAvailability>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    char _isAirplaneModeActive;
    char _isAutoDownloadOnCellularAllowed;
    char _isCellularDataActive;
    char _isShowingAllMusic;
    char _isShowingAllVideo;
    char _isUpdateInProgress;
    char _isWiFiEnabled;
    char _isNetworkReachable;
    char _canShowCloudMusic;
    char _canShowCloudVideo;
    char _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    char _preferencesChangedNotifyTokenIsValid;
    int _networkType;
    RadiosPreferences * _radiosPreferences;
    unsigned int _networkReachabilityObservationCount;
    struct __SCNetworkReachability * _reachabilityRef;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (HSCloudAvailabilityController *)sharedController;

- (char)isCellularDataRestricted;
- (char)canShowCloudMusic;
- (char)canShowCloudVideo;
- (char)hasProperNetworkConditionsToPlayMedia;
- (void)_networkTypeDidChangeNotification:(NSNotification *)arg0;
- (char)shouldProhibitActionsForCurrentNetworkConditions;
- (char)canShowCloudDownloadButtons;
- (void)_cellularNetworkAllowedDidChangeNotification:(NSNotification *)arg0;
- (void)dealloc;
- (HSCloudAvailabilityController *)init;
- (void).cxx_destruct;
- (char)isNetworkReachable;
- (char)_isAutoDownloadOnCellularAllowed;
- (char)_uncachedIsAutoDownloadOnCellularAllowed;
- (char)_uncachedIsShowingAllMusic;
- (char)_uncachedIsShowingAllVideo;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(char)arg0;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(char)arg0;
- (void)_wifiEnabledDidChangeNotification:(NSNotification *)arg0;
- (void)_onQueue_beginObservingReachabilityChanges;
- (void)_onQueue_endObservingReachabilityChanges;
- (char)_hasCellularCapability;
- (char)_hasWiFiCapability;
- (void)beginObservingNetworkReachability;
- (void)endObservingNetworkReachability;
- (void)_handleTelephonyNotificationWithName:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)_setNewIsNetworkReachable:(char)arg0;
- (void)airplaneModeChanged;

@end
