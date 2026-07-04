/* Runtime dump - SBSUIRemoteAlertItemContentViewController
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUIRemoteAlertItemContentViewController : UIViewController <SBSUIRemoteAlertItemContentServiceInterface>

+ (NSXPCInterface *)_exportedInterface;
+ (SBSUIRemoteAlertItemContentViewController *)_remoteViewControllerInterface;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)invalidatePreferredContentSize;
- (void)getPreferredContentSizeWithReplyBlock:(id /* block */)arg0;

@end
