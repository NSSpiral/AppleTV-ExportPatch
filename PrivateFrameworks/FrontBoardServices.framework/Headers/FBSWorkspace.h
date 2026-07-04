/* Runtime dump - FBSWorkspace
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate>
{
    NSObject<OS_dispatch_queue> * _queue;
    <FBSWorkspaceDelegate> * _delegate;
    FBSWorkspaceClient * _client;
    FBSSerialQueue * _callOutQueue;
    NSObject<OS_dispatch_queue> * _scenesQueue;
    NSMutableDictionary * _scenesByIdentifier;
}

@property (nonatomic) <FBSWorkspaceDelegate> * delegate;
@property (readonly, retain, nonatomic) FBSSerialQueue * queue;
@property (readonly, copy, nonatomic) NSArray * scenes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<FBSWorkspaceDelegate> *)arg0;
- (FBSWorkspace *)init;
- (NSString *)description;
- (<FBSWorkspaceDelegate> *)delegate;
- (FBSWorkspace *)initWithQueue:(FBSSerialQueue *)arg0;
- (FBSWorkspace *)initWithSerialQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSArray *)scenes;
- (void)enumerateScenesWithBlock:(id /* block */)arg0;
- (FBSSerialQueue *)queue;
- (NSOperationQueue *)_internalQueue;
- (NSString *)sceneWithIdentifier:(NSString *)arg0;
- (void)_performDelegateCallOut:(id)arg0;
- (void)clientSystemApplicationTerminated:(id)arg0;
- (void)clientBeginTransaction:(NSObject *)arg0;
- (void)clientEndTransaction:(NSObject *)arg0;
- (void)client:(FBSWorkspaceClient *)arg0 handleCreateScene:(NSObject *)arg1 withCompletion:(id /* block */)arg2;
- (void)client:(FBSWorkspaceClient *)arg0 handleDestroyScene:(NSObject *)arg1 withCompletion:(id /* block */)arg2;
- (void)client:(FBSWorkspaceClient *)arg0 handleActions:(id)arg1;
- (Class)_clientClass;
- (char)isUIApplicationWorkspace;
- (NSString *)_sceneWithIdentifier:(NSString *)arg0;
- (void)requestSceneCreationWithInitialClientSettings:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (void)requestDestructionOfScene:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (FBSWorkspaceClient *)_client;

@end
