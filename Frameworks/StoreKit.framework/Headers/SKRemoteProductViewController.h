/* Runtime dump - SKRemoteProductViewController
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController>
{
    SKStoreProductViewController * _productViewController;
}

@property (weak, nonatomic) SKStoreProductViewController * productViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SKRemoteProductViewController *)serviceViewControllerInterface;
+ (NSXPCInterface *)exportedInterface;

- (void)setProductViewController:(SKStoreProductViewController *)arg0;
- (void)didFinishWithResult:(NSObject *)arg0;
- (void)didReceiveTitle:(NSString *)arg0;
- (void)loadDidFinishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)presentPageWithRequest:(NSURLRequest *)arg0 animated:(char)arg1;
- (void)promptForStarRating;
- (SKStoreProductViewController *)productViewController;
- (void)setStatusBarHidden:(char)arg0 withAnimation:(NSObject *)arg1;
- (void)setStatusBarStyle:(int)arg0 animated:(char)arg1;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewServiceDidTerminateWithError:(NSError *)arg0;
- (void)didFinish;

@end
