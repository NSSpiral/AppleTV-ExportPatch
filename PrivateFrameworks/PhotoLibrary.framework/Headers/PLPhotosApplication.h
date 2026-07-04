/* Runtime dump - PLPhotosApplication
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate>
{
    PLUIController * _uiController;
    char _receivingRemoteControlEvents;
    UIWindow * _window;
    char _urlNeedsHandling;
    int _observeForRechabilityChanges;
    char _isReachable;
    char _isOnWifi;
    char _photoStreamIsBusy;
    char _sharedPhotoStreamIsBusy;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
    NSString * _currentTestName;
    NSDictionary * _currentTestOptions;
    BLActivityAlert * _iPhotoMigrationActivityAlert;
}

@property (readonly, nonatomic) char isReachable;
@property (readonly, nonatomic) char isOnWifi;
@property (retain, nonatomic) NSString * currentTestName;
@property (retain, nonatomic) NSDictionary * currentTestOptions;
@property (retain, nonatomic) BLActivityAlert * iPhotoMigrationActivityAlert;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) UIWindow * window;

+ (void)initialize;

- (void)dealloc;
- (void)applicationDidEnterBackground:(UIApplication *)arg0;
- (void)applicationWillEnterForeground:(UIApplication *)arg0;
- (void)applicationDidFinishLaunching:(UIApplication *)arg0;
- (UIViewController *)rootViewController;
- (void)_applicationDidBecomeActive:(NSNotification *)arg0;
- (void)_applicationDidResignActive:(NSNotification *)arg0;
- (char)isReachable;
- (void)setReceivingRemoteControlEvents:(char)arg0;
- (char)shouldAllowSBAlertSupression;
- (void)enableNetworkObservation;
- (void)disableNetworkObservation;
- (char)isOnWifi;
- (void *)getSharedAddressBook;
- (void)_setImageOptions;
- (UIWindow *)mainWindow;
- (void)_registerForPhotoStreamActivityNotifications;
- (void)sharedFinishedLaunching:(char)arg0;
- (void)_statusBarDoubleTap:(id)arg0;
- (void)_updatePhotoStreamProgressDisplay;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (NSDictionary *)currentUIConfiguration;
- (void)_updateSuspensionSettings;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)presentInternalSettingsController;
- (void)_finishExtendedTest;
- (char)useCompatibleSuspensionAnimation;
- (char)visitViewControllersWithBlock:(id /* block */)arg0;
- (NSString *)currentTestName;
- (void)setCurrentTestName:(NSString *)arg0;
- (NSDictionary *)currentTestOptions;
- (void)setCurrentTestOptions:(NSDictionary *)arg0;
- (BLActivityAlert *)iPhotoMigrationActivityAlert;
- (void)setIPhotoMigrationActivityAlert:(BLActivityAlert *)arg0;
- (void)photosPreferencesChanged;
- (void)_networkReachabilityDidChange:(NSDictionary *)arg0;
- (void)_startObservingReachabilityChanges;
- (void)_stopObservingReachabilityChanges;

@end
