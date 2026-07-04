/* Runtime dump - FBUIApplicationWorkspaceServer
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationWorkspaceServer : FBWorkspaceServer

- (void)sendLaunchEvent:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)sendExitEventWithCompletion:(id /* block */)arg0;
- (void)sendProcessAssertionExpirationImminent;
- (char)_queue_handleMessage:(NSString *)arg0 withType:(long long)arg1;

@end
