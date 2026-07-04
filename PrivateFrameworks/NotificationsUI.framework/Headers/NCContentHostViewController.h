/* Runtime dump - NCContentHostViewController
 * Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCContentHostViewController : _UIRemoteViewController <NCContentHostInterface>

+ (NCContentHostViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;
+ (void)requestContentViewControllerWithName:(NSString *)arg0 bundleIdentifier:(NSString *)arg1 context:(NSObject *)arg2 completion:(id /* block */)arg3;

@end
