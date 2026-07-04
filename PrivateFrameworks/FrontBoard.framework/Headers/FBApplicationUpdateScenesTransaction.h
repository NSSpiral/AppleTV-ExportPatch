/* Runtime dump - FBApplicationUpdateScenesTransaction
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationUpdateScenesTransaction : FBSynchronizedTransactionGroup <FBApplicationProcessLaunchTransactionObserver, FBUpdateSceneTransactionObserver>
{
    FBApplicationProcessLaunchTransaction * _processLaunchTransaction;
    char _processLaunched;
    NSString * _bundleID;
    FBSceneManager * _sceneManager;
    FBProcessManager * _processManager;
    NSMutableArray * _updateSceneTransactions;
    NSMutableArray * _pendingUpdateSceneBlocks;
    FBApplicationProcess * _process;
}

@property (readonly, retain, nonatomic) NSString * bundleID;
@property (readonly, retain, nonatomic) FBApplicationProcess * process;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (FBApplicationUpdateScenesTransaction *)initWithApplicationBundleID:(NSString *)arg0 executionContextProvider:(NSObject *)arg1;
- (void)updateSceneWithIdentifier:(NSString *)arg0 display:(NSObject *)arg1 newSettings:(FBSSceneSettings *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 initialClientSettingsProvider:(NSObject *)arg4;
- (NSString *)bundleID;
- (FBApplicationProcess *)process;
- (void)updateSceneWithIdentifier:(NSString *)arg0 display:(NSObject *)arg1 newSettings:(FBSSceneSettings *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 clientProviderProvider:(NSObject *)arg4 initialClientSettingsProvider:(/* block */ id)arg5;
- (void)_executeSceneUpdatesIfAppropriate;
- (void)_willAddChildTransaction:(NSObject *)arg0;
- (void)_didRemoveChildTransaction:(NSObject *)arg0;
- (void)_childTransactionDidComplete:(id)arg0;
- (void)_didComplete;
- (void)_performSynchronizedCommit:(id)arg0;
- (void)transaction:(SBKTransaction *)arg0 willLaunchProcess:(NSObject *)arg1;
- (void)transaction:(SBKTransaction *)arg0 didLaunchProcess:(NSObject *)arg1;
- (void)updateSceneTransactionDidCreateScene:(NSObject *)arg0;
- (void)updateSceneTransactionWillUpdateScene:(NSObject *)arg0;
- (void)updateSceneTransactionWillCommitUpdate:(NSDate *)arg0;
- (void)updateSceneTransactionDidCommitUpdate:(NSDate *)arg0;
- (char)_canBeInterrupted;
- (NSDictionary *)_customizedDescriptionProperties;

@end
