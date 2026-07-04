/* Runtime dump - SKRemoteAccountPageViewController
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteAccountPageViewController : _UIRemoteViewController <SKUIClientAccountPageViewController>
{
    SKAccountPageViewController * _accountPageViewController;
}

@property (weak, nonatomic) SKAccountPageViewController * accountPageViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SKRemoteAccountPageViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)didPrepareWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)dismissViewController;
- (SKAccountPageViewController *)accountPageViewController;
- (void)setAccountPageViewController:(SKAccountPageViewController *)arg0;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;

@end
