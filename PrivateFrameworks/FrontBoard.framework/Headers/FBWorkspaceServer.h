/* Runtime dump - FBWorkspaceServer
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceServer : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _connection;
    BSSignal * _invalidateSignal;
    NSMutableDictionary * _sceneIDToSceneHandlerMap;
    NSMutableArray * _messagesQueuedForSend;
    <FBWorkspaceServerDelegate> * _delegate;
    unsigned int _transactionBlockDepth;
    char _triedToSendMessageInTransaction;
}

@property (nonatomic) <FBWorkspaceServerDelegate> * delegate;

- (void)dealloc;
- (void)setDelegate:(<FBWorkspaceServerDelegate> *)arg0;
- (<FBWorkspaceServerDelegate> *)delegate;
- (void)invalidate;
- (FBWorkspaceServer *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSOperationQueue *)_queue;
- (NSString *)auditToken;
- (void)beginTransaction;
- (void)endTransaction;
- (void)_queue_sendMessage:(int)arg0 withEvent:(Event *)arg1 withResponseEvent:(NSObject *)arg2 ofType:(/* block */ id)arg3;
- (void)_queue_sendMessage:(int)arg0 withMessagePacker:(NSObject<OS_xpc_object> *)arg1 withReplyHandler:(/* block */ id)arg2;
- (void)_queue_sendMessage:(int)arg0 withEvent:(Event *)arg1;
- (char)_queue_handleMessage:(NSString *)arg0 withType:(long long)arg1;
- (void)sendActionsEvent:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)registerSceneEventHandler:(id /* block */)arg0 forSceneID:(NSObject *)arg1;
- (void)unregisterSceneEventHandlerForSceneID:(NSObject *)arg0;
- (void)sendCreateSceneEvent:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)sendSceneUpdateEvent:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)sendDestroySceneEvent:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)sendSceneActionsEvent:(NSObject *)arg0;
- (void)_queue_invalidate;
- (void)_queue_clientExited;
- (void)_queue_handleMessage:(NSString *)arg0;
- (void)_queue_handleCreateSceneRequest:(NSURLRequest *)arg0;
- (void)_queue_handleDestroySceneRequest:(NSURLRequest *)arg0;
- (void)_queue_handleSceneDidUpdateClientSettings:(NSDictionary *)arg0;
- (void)_queue_handleSceneDidReceiveActions:(id)arg0;
- (void)_queue_handleSceneAttachContext:(NSObject *)arg0;
- (void)_queue_handleSceneUpdateContext:(NSObject *)arg0;
- (void)_queue_handleSceneDetachContext:(NSObject *)arg0;
- (void)_queue_sendReplyForMessage:(NSString *)arg0 withEvent:(Event *)arg1;
- (void)_queue_deserializeEventFromMessage:(NSString *)arg0 ofType:(Class)arg1 withHandlerBlock:(id /* block */)arg2;
- (void)_queue_deserializeEventFromMessage:(NSString *)arg0 ofType:(Class)arg1 withSceneHandlerBlock:(id /* block */)arg2;
- (NSObject *)_handlerForSceneID:(NSObject *)arg0;
- (void)_queue_setXPCConnection:(NSURLConnection *)arg0;

@end
