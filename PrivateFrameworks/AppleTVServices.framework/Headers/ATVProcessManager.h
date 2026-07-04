/* Runtime dump - ATVProcessManager
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVProcessManager : NSObject <FBProcessManagerObserver, FBSystemServiceDelegate, FBSceneManagerObserver>
{
    NSMutableOrderedSet * _recentApplicationBundleIdentifiers;
    NSMutableSet * _pendingSceneUpdateTransactions;
    FBSSystemService * _systemService;
    FBProcess * _focusedProcess;
    FBSystemService * _fbSystemAppService;
    FBSceneManager * _fbSceneManager;
    FBProcessManager * _fbProcessManager;
    id _physicalNetworkStateObserver;
}

@property (readonly, copy, nonatomic) NSArray * recentApplicationBundleIdentifiers;
@property (readonly, nonatomic) FBProcess * focusedProcess;
@property (readonly, nonatomic) char alternateApplicationIsActive;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVProcessManager *)sharedInstance;
+ (void)setupProcessManagement;
+ (char)automaticallyNotifiesObserversOfFocusedProcess;

- (ATVProcessManager *)init;
- (void).cxx_destruct;
- (void)_notePhysicalNetworkStateDidChange;
- (void)_bringApplicationProcessToForeground:(NSNotification *)arg0;
- (NSArray *)recentApplicationBundleIdentifiers;
- (NSObject *)_foregroundScene;
- (char)_applicationSafeForUseOnline:(id)arg0;
- (NSObject *)_sceneIdentifierFromApplicationProcess:(NSObject *)arg0;
- (void)systemService:(FBSSystemService *)arg0 handleOpenApplicationRequest:(NSURLRequest *)arg1 options:(NSDictionary *)arg2 origin:(struct _MROrigin *)arg3 withResult:(int)arg4;
- (void)_setupEventDeferralsWithScene:(NSObject *)arg0;
- (void)_scene:(SKScene *)arg0 setBackgrounded:(char)arg1;
- (void)setFocusedProcess:(FBProcess *)arg0;
- (void)processManager:(FBProcessManager *)arg0 didAddProcess:(NSObject *)arg1;
- (void)processManager:(FBProcessManager *)arg0 didRemoveProcess:(NSObject *)arg1;
- (void)systemService:(FBSSystemService *)arg0 canActivateApplication:(id)arg1 withResult:(int)arg2;
- (void)systemService:(FBSSystemService *)arg0 handleOpenURLRequest:(NSURLRequest *)arg1 application:(NSString *)arg2 options:(NSDictionary *)arg3 origin:(struct _MROrigin *)arg4 withResult:(int)arg5;
- (void)systemServicePrepareForShutdown:(id)arg0 andReboot:(char)arg1;
- (void)systemServicePrepareForExit:(id)arg0 andRelaunch:(char)arg1;
- (void)sceneManager:(FBSceneManager *)arg0 didCreateScene:(NSObject *)arg1 withClient:(NSObject *)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 willUpdateScene:(NSObject *)arg1 withSettings:(WLKSettingsStore *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneManager:(FBSceneManager *)arg0 willCommitUpdateForScene:(NSObject *)arg1 transactionID:(unsigned int)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 didCommitUpdateForScene:(NSObject *)arg1 transactionID:(unsigned int)arg2;
- (void)sceneManager:(FBSceneManager *)arg0 willDestroyScene:(NSObject *)arg1;
- (void)sceneManager:(FBSceneManager *)arg0 didDestroyScene:(NSObject *)arg1;
- (FBProcess *)focusedProcess;
- (void)activateApplication:(id)arg0 openURL:(NSURL *)arg1 suspended:(char)arg2 completion:(id /* block */)arg3;
- (void)sendHIDEventToTopApplication:(struct __IOHIDEvent *)arg0;
- (void)relaunch;
- (void)reboot;
- (NSObject *)applicationLaunchRequestBundleIDForBundleID:(NSObject *)arg0;
- (void)removeAppForLaunchRequestMap:(NSObject *)arg0;
- (char)alternateApplicationIsActive;

@end
