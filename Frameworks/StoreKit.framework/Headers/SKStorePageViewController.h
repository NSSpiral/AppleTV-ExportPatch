/* Runtime dump - SKStorePageViewController
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    _UIAsyncInvocation * _cancelRequest;
    id _loadBlock;
    SKStoreProductViewController * _productPageViewController;
    SKRemoteStorePageViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> * _serviceProxy;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_requestRemoteViewController;
- (void)productViewControllerDidFinish:(id)arg0;
- (void)_didFinishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (void)_prepareToLoadWithCompletionBlock:(id /* block */)arg0;
- (void)_dismissProductPageViewController;
- (void)_didLoadWithResult:(char)arg0 error:(NSError *)arg1;
- (void)loadPageWithURL:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)loadPageWithURLBagKey:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)_showProductPageWithItemIdentifier:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)supportedInterfaceOrientations;
- (SKStorePageViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)_addRemoteView;

@end
