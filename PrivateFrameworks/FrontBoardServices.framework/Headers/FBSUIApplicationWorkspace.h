/* Runtime dump - FBSUIApplicationWorkspace
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationWorkspace : FBSWorkspace <FBSUIApplicationWorkspaceClientDelegate>

@property (nonatomic) <FBSUIApplicationWorkspaceDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)client:(NSObject *)arg0 handleLaunch:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clientHandleExit:(id)arg0;
- (void)clientHandleAssertionExpirationImminent:(id)arg0;
- (Class)_clientClass;
- (char)isUIApplicationWorkspace;

@end
