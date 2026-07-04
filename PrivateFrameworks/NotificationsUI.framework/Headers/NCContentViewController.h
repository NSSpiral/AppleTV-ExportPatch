/* Runtime dump - NCContentViewController
 * Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCContentViewController : UIViewController <NCContentServiceInterface>
{
    NSDictionary * _context;
}

@property (copy, nonatomic) NSDictionary * context;

+ (NSXPCInterface *)_exportedInterface;
+ (NCContentViewController *)_remoteViewControllerInterface;

- (void)dealloc;
- (NSDictionary *)context;
- (void)setContext:(NSDictionary *)arg0;
- (void)_setContext:(NSObject *)arg0;
- (void)_getPreferredContentSizeWithCompletion:(id /* block */)arg0;

@end
