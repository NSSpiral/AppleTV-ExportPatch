/* Runtime dump - FBWorkspaceScene
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceScene : NSObject <FBWorkspaceServerSceneEventHandler, FBSceneClient>
{
    <FBSceneHost> * _host;
    FBWorkspace * _workspace;
    NSObject<OS_dispatch_queue> * _workspaceQueue;
    NSString * _identifier;
    FBSDisplay * _display;
    FBSSceneSettings * _settings;
    FBSSceneClientSettings * _clientSettings;
    char _sentCreationEvent;
    char _invalidated;
}

@property (readonly, nonatomic) FBWorkspace * parentWorkspace;
@property (readonly, nonatomic) <FBSceneHost> * host;
@property (readonly, copy, nonatomic) NSString * identifier;
@property (readonly, copy, nonatomic) FBSSceneSettings * settings;
@property (nonatomic) char sentCreationEvent;
@property (copy, nonatomic) FBSSceneSettings * sceneSettings;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (void)invalidate;
- (FBSSceneSettings *)settings;
- (NSString *)identifier;
- (<FBSceneHost> *)host;
- (void)host:(<FBSceneHost> *)arg0 didUpdateSettings:(NSDictionary *)arg1 withDiff:(id)arg2 transitionContext:(FBSSceneTransitionContext *)arg3 completion:(id /* block */)arg4;
- (void)host:(<FBSceneHost> *)arg0 didInvalidateWithTransitionContext:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)host:(<FBSceneHost> *)arg0 didReceiveActions:(id)arg1;
- (FBWorkspaceScene *)initWithParentWorkspace:(FBWorkspace *)arg0 host:(<FBSceneHost> *)arg1 initialClientSettings:(NSDictionary *)arg2;
- (void)_workspaceQueue_invalidate;
- (char)_workspaceQueue_hasSentCreationEvent;
- (void)_workspaceQueue_setSentCreationEvent:(char)arg0;
- (FBWorkspace *)parentWorkspace;
- (NSString *)_descriptionWithMultilinePrefix:(NSString *)arg0;
- (void)_workspaceQueue_setSceneSettings:(NSDictionary *)arg0;
- (void)_workspaceQueue_dispatchClientBlockIfNecessary:(id)arg0;
- (void)_workspaceQueue_sendSettingsDiff:(id)arg0 transitionContext:(FBSSceneTransitionContext *)arg1 responseEventHandler:(id /* block */)arg2;
- (void)_workspaceQueue_sendDestroyWithTransitionContext:(NSObject *)arg0 responseEventHandler:(id /* block */)arg1;
- (void)sceneAttachContext:(NSObject *)arg0;
- (void)sceneUpdateContext:(NSObject *)arg0;
- (void)sceneDetachContext:(NSObject *)arg0;
- (void)sceneDidUpdateClientSettings:(NSDictionary *)arg0;
- (void)sceneDidReceiveActions:(id)arg0;
- (NSObject *)_workspaceQueue_process;
- (NSOperationQueue *)_workspaceQueue;
- (NSDictionary *)_workspaceQueue_sceneSettings;

@end
