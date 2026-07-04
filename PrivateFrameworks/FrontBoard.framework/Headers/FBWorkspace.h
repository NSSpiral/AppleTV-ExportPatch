/* Runtime dump - FBWorkspace
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspace : NSObject <FBSceneClientProvider>
{
    BSZeroingWeakReference * _zeroingWeakDelegate;
    BSZeroingWeakReference * _zeroingWeakProcess;
    FBWorkspaceServer * _server;
    NSMapTable * _hostToClientMap;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _callOutQueue;
    FBSceneClientProviderInvalidationAction * _invalidationAction;
    char _willInvalidate;
    char _invalidated;
}

@property (nonatomic) <FBWorkspaceDelegate> * delegate;
@property (readonly, nonatomic) FBProcess * process;
@property (readonly, retain, nonatomic) BSAuditToken * auditToken;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<FBWorkspaceDelegate> *)arg0;
- (NSString *)description;
- (<FBWorkspaceDelegate> *)delegate;
- (void)sendActions:(id)arg0;
- (NSOperationQueue *)_queue;
- (BSAuditToken *)auditToken;
- (void)beginTransaction;
- (void)endTransaction;
- (FBProcess *)process;
- (void)registerInvalidationAction:(NSObject *)arg0;
- (NSString *)registerHost:(NSString *)arg0 withInitialClientSettings:(NSDictionary *)arg1;
- (void)unregisterHost:(NSString *)arg0;
- (FBWorkspaceServer *)_server;
- (NSObject *)_newWorkspaceServer;
- (void)_queue_enumerateScenes:(id)arg0;
- (void)_queue_fireInvalidationAction;
- (NSString *)_newSceneWithHost:(NSString *)arg0 initialClientSettings:(NSDictionary *)arg1;
- (FBWorkspace *)initWithParentProcess:(NSObject *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 callOutQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)_queue_willInvalidateAllScenes;
- (void)_queue_invalidateAllScenes;
- (void)server:(FBWorkspaceServer *)arg0 handleCreateSceneRequest:(NSURLRequest *)arg1 withCompletion:(id /* block */)arg2;
- (void)server:(FBWorkspaceServer *)arg0 handleDestroySceneRequest:(NSURLRequest *)arg1 withCompletion:(id /* block */)arg2;

@end
