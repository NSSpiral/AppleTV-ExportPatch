/* Runtime dump - NCBannerAccessoryHostViewController
 * Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCBannerAccessoryHostViewController : _UIRemoteViewController <NCBannerAccessoryHostInterface>
{
    <NCBannerAccessoryHostViewControllerDelegate> * _delegate;
}

@property (nonatomic) <NCBannerAccessoryHostViewControllerDelegate> * delegate;

+ (NCBannerAccessoryHostViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;
+ (void)requestBannerAccessoryViewControllerWithName:(NSString *)arg0 bundleIdentifier:(NSString *)arg1 context:(NSObject *)arg2 completion:(id /* block */)arg3;

- (void)setDelegate:(<NCBannerAccessoryHostViewControllerDelegate> *)arg0;
- (<NCBannerAccessoryHostViewControllerDelegate> *)delegate;
- (void)_dismiss;
- (void)_becomeSticky;
- (void)_setSticky:(char)arg0;

@end
