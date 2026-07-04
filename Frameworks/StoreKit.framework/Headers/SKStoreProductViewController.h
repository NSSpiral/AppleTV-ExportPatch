/* Runtime dump - SKStoreProductViewController
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStoreProductViewController : UIViewController
{
    NSString * _additionalBuyParameters;
    NSString * _affiliateIdentifier;
    char _automaticallyDismisses;
    _UIAsyncInvocation * _cancelRequest;
    NSString * _clientIdentifier;
    <SKStoreProductViewControllerDelegatePrivate> * _delegate;
    id _loadBlock;
    int _originalStatusBarStyle;
    int _productPageStyle;
    SKRemoteProductViewController * _remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> * _serviceProxy;
    NSDictionary * _scriptContextDictionary;
    char _showsStoreButton;
    NSString * _cancelButtonTitle;
    NSString * _rightBarButtonTitle;
    char _showsRightBarButton;
    char _askToBuy;
    NSString * _promptString;
}

@property (nonatomic) <SKStoreProductViewControllerDelegate> * delegate;
@property (copy, nonatomic) NSString * additionalBuyParameters;
@property (copy, nonatomic) NSString * affiliateIdentifier;
@property (copy, nonatomic) NSString * clientIdentifier;
@property (copy, nonatomic) NSDictionary * scriptContextDictionary;
@property (nonatomic) int productPageStyle;
@property (nonatomic) char askToBuy;
@property (nonatomic) char showsStoreButton;
@property (copy, nonatomic) NSString * cancelButtonTitle;
@property (copy, nonatomic) NSString * rightBarButtonTitle;
@property (nonatomic) char showsRightBarButton;
@property (copy, nonatomic) NSString * promptString;
@property (nonatomic) char automaticallyDismisses;

+ (NSDictionary *)_defaultIXStoreSheetDictionary;
+ (void)_validateURL:(NSURL *)arg0 withSheetInfo:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
+ (void)getCanLoadURL:(NSURL *)arg0 withURLBag:(NSString *)arg1 completionBlock:(id /* block */)arg2;
+ (void)getCanLoadURL:(NSURL *)arg0 completionBlock:(id /* block */)arg1;

- (NSString *)clientIdentifier;
- (void)setShowsStoreButton:(char)arg0;
- (void)setProductPageStyle:(int)arg0;
- (void)_requestRemoteViewController;
- (void)_resetRemoteViewController;
- (void)finishImmediately;
- (void)setAdditionalBuyParameters:(NSString *)arg0;
- (void)setScriptContextDictionary:(NSDictionary *)arg0;
- (void)setAskToBuy:(char)arg0;
- (void)setRightBarButtonTitle:(NSString *)arg0;
- (void)setShowsRightBarButton:(char)arg0;
- (void)setPromptString:(NSString *)arg0;
- (void)_sk_applicationDidEnterBackground:(NSNotification *)arg0;
- (void)_sk_applicationWillEnterForeground:(NSNotification *)arg0;
- (void)_throwUnsupportedPresentationException;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_setLoadBlock:(id /* block */)arg0;
- (int)productPageStyle;
- (void)_didFinish;
- (void)_loadDidFinishWithResult:(char)arg0 error:(NSError *)arg1;
- (void)loadProductWithParameters:(NSDictionary *)arg0 completionBlock:(id /* block */)arg1;
- (void)loadProductWithPageDictionary:(NSDictionary *)arg0 completionBlock:(id /* block */)arg1;
- (void)loadProductWithRequest:(NSURLRequest *)arg0 completionBlock:(id /* block */)arg1;
- (void)loadProductWithURL:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)_didFinishWithResult:(int)arg0;
- (void)_presentPageWithRequest:(NSURLRequest *)arg0 animated:(char)arg1;
- (NSString *)additionalBuyParameters;
- (char)automaticallyDismisses;
- (void)setAutomaticallyDismisses:(char)arg0;
- (NSString *)promptString;
- (NSString *)rightBarButtonTitle;
- (char)showsRightBarButton;
- (NSDictionary *)scriptContextDictionary;
- (char)askToBuy;
- (char)showsStoreButton;
- (void)dealloc;
- (void)setDelegate:(<SKStoreProductViewControllerDelegate> *)arg0;
- (<SKStoreProductViewControllerDelegate> *)delegate;
- (unsigned int)supportedInterfaceOrientations;
- (SKStoreProductViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)willMoveToParentViewController:(BRController *)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg0;
- (void)setClientIdentifier:(NSString *)arg0;
- (void)_addRemoteView;
- (void)setCancelButtonTitle:(NSString *)arg0;
- (NSString *)cancelButtonTitle;
- (NSString *)affiliateIdentifier;
- (void)setAffiliateIdentifier:(NSString *)arg0;

@end
