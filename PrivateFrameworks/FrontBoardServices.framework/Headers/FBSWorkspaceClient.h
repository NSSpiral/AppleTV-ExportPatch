/* Runtime dump - FBSWorkspaceClient
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceClient : BSBaseXPCClient <FBSSceneUpdater>
{
    BSBasicServerClient * _client;
    NSMutableArray * _queuedMessages;
    NSMutableDictionary * _sceneIDToSceneHandlerMap;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    char _inTransaction;
    <FBSWorkspaceClientDelegate> * _delegate;
}

@property (readonly, nonatomic) <FBSWorkspaceClientDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * callOutQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (FBSWorkspaceClient *)init;
- (NSString *)description;
- (<FBSWorkspaceClientDelegate> *)delegate;
- (void)scene:(NSObject *)arg0 didReceiveActions:(id)arg1;
- (void)queue_handleMessage:(NSString *)arg0;
- (id)_loggingProem;
- (FBSWorkspaceClient *)initWithServiceName:(NSString *)arg0 endpoint:(NSObject *)arg1;
- (void)queue_connectionWasInterrupted;
- (void)_queue_sendMessage:(int)arg0 withEvent:(Event *)arg1 withResponseEvent:(NSObject *)arg2 ofType:(/* block */ id)arg3;
- (void)_queue_sendMessage:(int)arg0 withEvent:(Event *)arg1;
- (void)registerDelegate:(NSObject *)arg0 forSceneID:(NSObject *)arg1;
- (void)unregisterDelegateForSceneID:(NSObject *)arg0;
- (char)willObserveContextsManually;
- (void)scene:(NSObject *)arg0 didAttachContext:(NSObject *)arg1;
- (void)scene:(NSObject *)arg0 didReceiveUpdateToContext:(NSObject *)arg1;
- (void)scene:(NSObject *)arg0 didDetachContext:(NSObject *)arg1;
- (void)scene:(NSObject *)arg0 didUpdateClientSettings:(NSDictionary *)arg1 withDiff:(id)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)_queue_sendReplyForMessage:(NSString *)arg0 withEvent:(Event *)arg1;
- (NSObject *)_handlerForSceneID:(NSObject *)arg0;
- (void)sendCreateSceneRequestEvent:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)sendDestroySceneRequestEvent:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)_sendMessage:(int)arg0 withEvent:(Event *)arg1;
- (void)_debugLog:(id)arg0;
- (NSString *)_queue_workspaceEventFromMessage:(NSString *)arg0 ofType:(Class)arg1;
- (void)_queue_ensureTransaction;
- (void)_sendReplyForMessage:(NSString *)arg0 withEvent:(Event *)arg1;
- (void)_queue_handleTransactionBookEnd;
- (void)_queue_handleCreateScene:(NSObject *)arg0;
- (void)_queue_handleSceneUpdate:(NSDate *)arg0;
- (void)_queue_handleDestroyScene:(NSObject *)arg0;
- (void)_queue_handleActions:(id)arg0;
- (void)_queue_handleSceneActions:(id)arg0;
- (char)queue_handleMessageWithType:(long long)arg0 message:(NSString *)arg1 client:(BSBasicServerClient *)arg2;
- (NSObject<OS_dispatch_queue> *)callOutQueue;
- (FBSWorkspaceClient *)initWithDelegate:(<FBSWorkspaceClientDelegate> *)arg0;

@end
