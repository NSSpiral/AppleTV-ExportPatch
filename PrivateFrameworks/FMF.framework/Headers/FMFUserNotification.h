/* Runtime dump - FMFUserNotification
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFUserNotification : NSObject

+ (void)showRestrictedAlert;
+ (void)showNetworkOfflineDuringOfferAlert;
+ (void)showGenericErrorAlert;
+ (void)showActiveDeviceChangedAlert;
+ (void)show5XXDuringStartOfferAlert;
+ (char)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(NSString *)arg0;
+ (void)showNetworkOfflineDuringStopOfferAlert;
+ (void)show5XXDuringStopOfferAlert;
+ (char)shouldDisplayAlerts;
+ (void)displayUserNotificationWithTitleLocKey:(NSString *)arg0 messageLocKey:(NSString *)arg1;
+ (char)displayiCloudUserNotificationWithTitleLocKey:(NSString *)arg0 messageLocKey:(NSString *)arg1 switchString:(NSString *)arg2 doNotSwitch:(id)arg3;
+ (void)showMaxFollowersLimitReachedAlert;
+ (void)showLocationServicesSwitchOffAlert;
+ (void)showShareMyLocationSystemServiceOffAlert;
+ (void)showShareMyLocationiCloudSettingsOffAlert;
+ (void)showForbiddenRegionAlert;
+ (void)notLoggedIntoiCloudAlert;
+ (void)upselliCloudAlert;

@end
