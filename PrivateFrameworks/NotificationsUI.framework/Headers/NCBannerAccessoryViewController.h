/* Runtime dump - NCBannerAccessoryViewController
 * Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCBannerAccessoryViewController : UIViewController <NCBannerAccessoryServiceInterface>
{
    NSDictionary * _context;
}

@property (copy, nonatomic) NSDictionary * context;

+ (NSXPCInterface *)_exportedInterface;
+ (NCBannerAccessoryViewController *)_remoteViewControllerInterface;

- (void)dealloc;
- (NSDictionary *)context;
- (void)setContext:(NSDictionary *)arg0;
- (void)dismiss;
- (void)_setContext:(NSObject *)arg0;
- (void)_getPreferredContentSizeWithCompletion:(id /* block */)arg0;
- (void)becomeSticky;
- (void)setSticky:(char)arg0;

@end
