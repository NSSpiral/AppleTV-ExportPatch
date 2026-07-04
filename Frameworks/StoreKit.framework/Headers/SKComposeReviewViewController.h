/* Runtime dump - SKComposeReviewViewController
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKComposeReviewViewController : UIViewController
{
    _UIAsyncInvocation * _cancelRequest;
    NSURL * _compositionURL;
    <SKComposeReviewDelegate> * _delegate;
    id _prepareBlock;
    SKRemoteComposeReviewViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceComposeReviewViewController> * _serviceProxy;
}

@property (nonatomic) <SKComposeReviewDelegate> * delegate;

- (void)_requestRemoteViewController;
- (void)_didPrepareWithResult:(char)arg0 error:(NSError *)arg1;
- (void)prepareWithCompletionBlock:(id /* block */)arg0;
- (void)_didFinishWithResult:(char)arg0 error:(NSError *)arg1;
- (SKComposeReviewViewController *)initWithCompositionURL:(NSURL *)arg0;
- (void)_tearDownAfterError:(NSError *)arg0;
- (void)dealloc;
- (void)setDelegate:(<SKComposeReviewDelegate> *)arg0;
- (<SKComposeReviewDelegate> *)delegate;
- (SKComposeReviewViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)viewDidAppear:(char)arg0;
- (void)_addRemoteView;

@end
