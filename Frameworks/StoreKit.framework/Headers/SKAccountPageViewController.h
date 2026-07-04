/* Runtime dump - SKAccountPageViewController
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKAccountPageViewController : UIViewController
{
    NSURL * _accountURL;
    _UIAsyncInvocation * _cancelRequest;
    <SKAccountPageViewControllerDelegate> * _delegate;
    id _prepareBlock;
    SKRemoteAccountPageViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceAccountPageViewController> * _serviceProxy;
}

@property (nonatomic) <SKAccountPageViewControllerDelegate> * delegate;

- (void)_requestRemoteViewController;
- (void)_didPrepareWithResult:(char)arg0 error:(NSError *)arg1;
- (SKAccountPageViewController *)initWithAccountURL:(NSURL *)arg0;
- (void)prepareWithCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (void)setDelegate:(<SKAccountPageViewControllerDelegate> *)arg0;
- (<SKAccountPageViewControllerDelegate> *)delegate;
- (void)loadView;
- (void)_dismissViewController;
- (void)viewDidAppear:(char)arg0;
- (void)_addRemoteView;

@end
