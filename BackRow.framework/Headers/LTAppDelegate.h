/* Runtime dump - LTAppDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVMainMenuControllerDelegate;
@protocol BRApplicationDelegate;

@class ATVMainMenuController, BRController, LTController, WLDPlaybackManager;
@interface LTAppDelegate : NSObject <ATVMainMenuControllerDelegate, BRApplicationDelegate>
{
    LTController * _controller;
    NSMutableArray * _ignorePlayPauseEventsQueue;
    char _shouldShowWhatsNew;
    char _timeIsSet;
    BRController * _waitingForMainMenuController;
    id _appExitObserver;
    WLDPlaybackManager * _universalSearchPlaybackManager;
    char _limitedLaunch;
    UIWindow * _window;
    UIViewController * _rootViewController;
}

@property (nonatomic) char limitedLaunch;
@property (retain, nonatomic) UIViewController * rootViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (retain, nonatomic) UIWindow * window;

- (char)ignorePlayPauseEvents;
- (void)_startNormalApplicationDidFinishLaunching;
- (void)_timeZoneNotification:(NSNotification *)arg0;
- (void)_lowMemoryNotification:(NSNotification *)arg0;
- (void)_determineIfWhatsNewShouldBeShown;
- (void)_startSupervisedSetup:(id)arg0;
- (void)_postMediaHostBootstrap;
- (void)_setupApplianceManager;
- (void)_deviceWillWakeFromSleep:(id)arg0;
- (void)_attemptToSetLocaleIfNeeded;
- (void)unregisterIgnorePlayPauseForClient:(NSString *)arg0;
- (void)registerIgnorePlayPause:(char)arg0 forClient:(NSString *)arg1;
- (void)_registerAccountTypes;
- (void)completeNormalApplicationDidFinishLaunching;
- (void)_handleProcessDidExit:(id)arg0;
- (void)_initializeStoreServices;
- (char)limitedLaunch;
- (void)setLimitedLaunch:(char)arg0;
- (void)_setTimeFromLastKnownTimestamp;
- (char)_performRestoreAfterFileSystemUpgradeIfNeeded;
- (void)_checkForFileSystemUpgrade;
- (char)_performObliterationIfNeeded;
- (void)_adjustScreenSaverPreferences;
- (void)_eatLeftoverCookies;
- (void)_setupPowerManagement;
- (void)_dismissWaitingForMainMenuController;
- (void)_registerAirTunesPlayer;
- (void)_registerParentalControls;
- (void)_musicStoreNotification:(NSNotification *)arg0;
- (void)_installMainMenu;
- (void)_registerAccessibilitySettings;
- (void)_checkNetworkTime;
- (void)_restorePreservedDataAfterFileSystemUpgrade;
- (void)_preserveDataBeforeFileSystemUpgrade;
- (void)_timeChangeNotification:(NSNotification *)arg0;
- (char)_checkExpirationDate;
- (void)_startAnyPostBootActions;
- (void)_updateLastKnownTimestamp;
- (void)didUpdateAvailableAppliancesForMainMenu:(ATVMainMenuController *)arg0;
- (void)_storeLocationChanged:(NSNotification *)arg0;
- (void)dealloc;
- (UIWindow *)window;
- (char)application:(UIApplication *)arg0 openURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 annotation:(NSObject *)arg3;
- (char)application:(UIApplication *)arg0 didFinishLaunchingWithOptions:(NSDictionary *)arg1;
- (void)setWindow:(UIWindow *)arg0;
- (void)setRootViewController:(UIViewController *)arg0;
- (UIViewController *)rootViewController;
- (void).cxx_destruct;

@end
