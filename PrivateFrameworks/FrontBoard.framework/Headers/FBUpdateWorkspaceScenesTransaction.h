/* Runtime dump - FBUpdateWorkspaceScenesTransaction
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUpdateWorkspaceScenesTransaction : FBTransaction
{
    FBApplicationProcessLaunchTransaction * _processLaunchTransaction;
    FBSceneManager * _sceneManager;
    FBProcessManager * _processManager;
    NSMutableArray * _updateSceneTransactions;
    FBWorkspace * _workspace;
    FBProcess * _process;
}

@property (readonly, retain, nonatomic) NSArray * updateSceneTransactions;
@property (readonly, retain, nonatomic) FBWorkspace * workspace;
@property (readonly, retain, nonatomic) FBProcess * process;
@property (readonly, nonatomic) char processExited;
@property (readonly, nonatomic) char processLaunchFailed;

- (void)dealloc;
- (FBProcess *)process;
- (FBWorkspace *)workspace;
- (void)_willAddChildTransaction:(NSObject *)arg0;
- (void)_didRemoveChildTransaction:(NSObject *)arg0;
- (void)_childTransactionDidComplete:(id)arg0;
- (NSArray *)updateSceneTransactions;
- (char)processExited;
- (char)processLaunchFailed;
- (NSString *)addUpdateSceneTransactionForSceneIdentifier:(NSString *)arg0 display:(NSObject *)arg1 newSettings:(FBSSceneSettings *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 initialClientSettingsProvider:(NSObject *)arg4;
- (FBUpdateWorkspaceScenesTransaction *)initWithWorkspace:(FBWorkspace *)arg0;

@end
