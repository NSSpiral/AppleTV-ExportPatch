/* Runtime dump - FBUIApplicationWorkspaceScene
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene
{
    NSMutableSet * _allWatchdogs;
    NSMutableArray * _watchdogStack;
    BKSProcessAssertion * _launchBoostahAssertion;
    BKSProcessAssertion * _resumeProcessAssertion;
    BKSProcessAssertion * _suspendingProcessAssertion;
    BKSProcessAssertion * _seoProcessAssertion;
    BKSProcessAssertion * _deliverMessageProcessAssertion;
    unsigned int _deliverMessageProcessAssertionCount;
    int _suspendType;
    char _createResponseReceived;
    char _transitioningToForeground;
}

@property (readonly, nonatomic) char transitioningToForeground;

- (void)dealloc;
- (void)host:(NSString *)arg0 didUpdateSettings:(NSDictionary *)arg1 withDiff:(id)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(id /* block */)arg4;
- (void)host:(NSString *)arg0 didInvalidateWithTransitionContext:(NSObject *)arg1 completion:(id /* block */)arg2;
- (FBUIApplicationWorkspaceScene *)initWithParentWorkspace:(FBWorkspace *)arg0 host:(NSString *)arg1 initialClientSettings:(NSDictionary *)arg2;
- (void)_workspaceQueue_invalidate;
- (FBWorkspace *)parentWorkspace;
- (NSObject *)_workspaceQueue_process;
- (void)_workspaceQueue_cancelAllWatchdogTimers;
- (void)_workspaceQueue_dropAllProcessAssertions;
- (void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(NSObject *)arg0;
- (void)_workspaceQueue_dropSuspendingProcessAssertion;
- (void)_workspaceQueue_takeSuspendingProcessAssertion;
- (void)_workspaceQueue_dropSEOProcessAssertion;
- (void)_workspaceQueue_dropResumeProcessAssertion;
- (NSString *)_workspaceQueue_newProcessAssertionForReason:(unsigned int)arg0 withName:(NSString *)arg1 transitionContext:(FBSSceneTransitionContext *)arg2;
- (unsigned int)_workspaceQueue_determineSceneActionFromSettings:(NSDictionary *)arg0 toSettings:(NSDictionary *)arg1;
- (NSObject *)_workspaceQueue_createWatchdogForSceneAction:(unsigned int)arg0 transitionContext:(FBSSceneTransitionContext *)arg1;
- (void)_workspaceQueue_cancelWatchdogTimer:(NSObject *)arg0;
- (void)_workspaceQueue_activateResponseReceived:(id)arg0;
- (void)_workspaceQueue_activateForSEO:(char)arg0 withSettings:(NSDictionary *)arg1 transitionContext:(FBSSceneTransitionContext *)arg2 eventBlock:(id /* block */)arg3;
- (void)_workspaceQueue_deactivateResponseReceived:(id)arg0;
- (void)_workspaceQueue_deactivateForSEO:(char)arg0 withSettings:(NSDictionary *)arg1 transitionContext:(FBSSceneTransitionContext *)arg2 eventBlock:(id /* block */)arg3;
- (void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(NSObject *)arg0;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion;
- (void)_dispatchBlockAfterProcessLaunch:(id)arg0;
- (void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(NSObject *)arg0;
- (int)_workspaceQueue_lifecycleStateForSettings:(NSDictionary *)arg0;
- (void)_workspaceQueue_takeAssertionsForDeactivation:(char)arg0 transitionContext:(FBSSceneTransitionContext *)arg1;
- (int)_workspaceQueue_pid;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion:(char)arg0;
- (char)_workspaceQueue_isTransitioningToForeground;

@end
