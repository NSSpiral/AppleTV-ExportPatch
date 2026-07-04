/* Runtime dump - AAUIChildAccountCreationController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIChildAccountCreationController : NSObject <RUIObjectModelDelegate>
{
    AASetupAssistantService * _setupService;
    AAGrandSlamSigner * _grandSlamSigner;
    NSURL * _launchingURL;
    NSMutableArray * _objectModels;
    RUILoader * _loader;
    NSHTTPURLResponse * _currentResponse;
    UIActivityIndicatorView * _spinnerView;
    UIBarButtonItem * _originalRightBarButtonItem;
    UINavigationItem * _navigationItemShowingSpinner;
    NSArray * _originalEnabledToolbarItems;
    NSArray * _originalToolbarItems;
    UIToolbar * _originalToolbar;
    char _isShowingSpinner;
    char _isPendingDismissal;
    <AAUIChildAccountCreationDelegate> * _delegate;
    UINavigationController * _navigationController;
}

@property (weak, nonatomic) <AAUIChildAccountCreationDelegate> * delegate;
@property (weak, nonatomic) UINavigationController * navigationController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<AAUIChildAccountCreationDelegate> *)arg0;
- (<AAUIChildAccountCreationDelegate> *)delegate;
- (UINavigationController *)navigationController;
- (void).cxx_destruct;
- (void)_cancel;
- (void)setNavigationController:(UINavigationController *)arg0;
- (void)_addHeadersToRequest:(NSURLRequest *)arg0;
- (void)_popObjectModelAnimated:(char)arg0;
- (NSObject *)parentViewControllerForObjectModel:(NSObject *)arg0;
- (void)objectModelDidChange:(NSDictionary *)arg0;
- (unsigned int)supportedInterfaceOrientationsForObjectModel:(NSObject *)arg0 page:(id)arg1;
- (void)objectModelPressedBack:(id)arg0;
- (void)objectModel:(NSObject *)arg0 pressedLink:(id)arg1 httpMethod:(NSString *)arg2;
- (void)objectModel:(NSObject *)arg0 pressedButton:(id)arg1 attributes:(NSDictionary *)arg2;
- (void)loader:(RUILoader *)arg0 receivedObjectModel:(NSObject *)arg1 actionSignal:(int)arg2;
- (void)loader:(RUILoader *)arg0 didFailWithError:(char)arg1;
- (void)_showActivitySpinnerInNavigationBar;
- (void)loader:(RUILoader *)arg0 didReceiveHTTPResponse:(NSURLResponse *)arg1;
- (UIActivityIndicatorView *)_spinnerView;
- (void)_startRemoteUILoaderWithRequest:(NSURLRequest *)arg0;
- (void)_hideActivitySpinner;
- (void)_displayConnectionErrorAndCancel;
- (void)_cleanupRemoteUILoader;
- (void)_renewCredentialsWithCompletionHandler:(id /* block */)arg0;
- (void)_createChildAccount;
- (char)_pressedLink:(id)arg0 comesFromBarButtonItem:(NSObject *)arg1 objectModel:(NSObject *)arg2;
- (void)_showActivitySpinnerInToolbar:(id)arg0;
- (void)loadRemoteUI;
- (AAUIChildAccountCreationController *)initWithGrandSlamSigner:(AAGrandSlamSigner *)arg0;

@end
