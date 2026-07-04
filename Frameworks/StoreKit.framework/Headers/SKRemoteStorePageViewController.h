/* Runtime dump - SKRemoteStorePageViewController
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteStorePageViewController : _UIRemoteViewController <SKUIClientStorePageViewController>
{
    SKStorePageViewController * _storePageViewController;
}

@property (weak, nonatomic) SKStorePageViewController * storePageViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SKRemoteStorePageViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)didFinishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)setStorePageViewController:(SKStorePageViewController *)arg0;
- (SKStorePageViewController *)storePageViewController;
- (void)showProductPageWithItemIdentifier:(NSString *)arg0;

@end
