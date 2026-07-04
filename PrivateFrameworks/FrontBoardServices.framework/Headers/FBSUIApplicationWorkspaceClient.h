/* Runtime dump - FBSUIApplicationWorkspaceClient
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient

@property (readonly, nonatomic) <FBSUIApplicationWorkspaceClientDelegate> * delegate;

- (char)willObserveContextsManually;
- (char)_queue_handleMessageWithType:(int)arg0 message:(NSString *)arg1;
- (void)_queue_handleLaunch:(id)arg0;
- (void)_queue_handleExit:(id)arg0;
- (void)_queue_handleAssertionExpirationImminent:(id)arg0;

@end
