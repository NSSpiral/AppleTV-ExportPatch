/* Runtime dump - FBSystemApp
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemApp : UIApplication <FBSceneClient, FBSSceneUpdater, BKSSystemApplicationDelegate, FBSceneClientProvider>
{
    FBSceneClientProviderInvalidationAction * _invalidationAction;
    NSMutableDictionary * _scenesByIdentifier;
    NSMapTable * _hostsByIdentifier;
    NSMutableDictionary * _initialClientSettingsByIdentifier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)registerAsSystemApp;
+ (char)rendersLocally;
+ (char)shouldFixMainThreadPriority;
+ (char)shouldCheckInWithBackboard;
+ (void)preFrontBoardInitializationHook;
+ (char)systemApplicationShouldWaitForDataMigration:(id)arg0;
+ (char)systemApplicationIsAliveForWatchdog:(id)arg0;

- (char)isSuspended;
- (FBSystemApp *)init;
- (char)isFrontBoard;
- (char)_saveSnapshotWithName:(NSString *)arg0;
- (char)isSuspendedUnderLock;
- (char)openURL:(NSURL *)arg0;
- (char)isSuspendedEventsOnly;
- (void)scene:(NSObject *)arg0 didReceiveActions:(id)arg1;
- (UIWindow *)_newSceneForWindow:(NSObject *)arg0 oldDisplay:(NSObject *)arg1 newDisplay:(NSObject *)arg2;
- (char)handleDoubleHeightStatusBarTap:(int)arg0;
- (void)resetIdleTimerAndUndim;
- (char)canOpenURL:(NSURL *)arg0;
- (void)beginTransaction;
- (void)endTransaction;
- (void)_updateSceneSettingsForScene:(NSObject *)arg0 context:(NSObject *)arg1;
- (void)host:(NSString *)arg0 didUpdateSettings:(NSDictionary *)arg1 withDiff:(id)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(id /* block */)arg4;
- (void)host:(NSString *)arg0 didInvalidateWithTransitionContext:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)host:(NSString *)arg0 didReceiveActions:(id)arg1;
- (void)registerDelegate:(NSObject *)arg0 forSceneID:(NSObject *)arg1;
- (void)unregisterDelegateForSceneID:(NSObject *)arg0;
- (char)willObserveContextsManually;
- (void)scene:(NSObject *)arg0 didAttachContext:(NSObject *)arg1;
- (void)scene:(NSObject *)arg0 didReceiveUpdateToContext:(NSObject *)arg1;
- (void)scene:(NSObject *)arg0 didDetachContext:(NSObject *)arg1;
- (void)scene:(NSObject *)arg0 didUpdateClientSettings:(NSDictionary *)arg1 withDiff:(id)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)registerInvalidationAction:(NSObject *)arg0;
- (NSString *)registerHost:(NSString *)arg0 withInitialClientSettings:(NSDictionary *)arg1;
- (void)unregisterHost:(NSString *)arg0;
- (NSString *)fbsSceneWithIdentifier:(NSString *)arg0;
- (void)sendActionsToBackboard:(id)arg0;
- (unsigned int)lastExitReason;

@end
