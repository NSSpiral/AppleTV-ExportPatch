/* Runtime dump - AAUICredentialRecoveryController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUICredentialRecoveryController : NSObject <RUIObjectModelDelegate, RUILoaderDelegate>
{
    NSURL * _remoteUIURL;
    RUILoader * _remoteUILoader;
    RUIPage * _loadingPage;
    NSMutableArray * _objectModels;
    UINavigationController * _navigationController;
    UIViewController * _presentationViewController;
    UIViewController * _navigationBaseViewController;
    char _isModal;
    UIActivityIndicatorView * _spinnerView;
    UIBarButtonItem * _originalRightBarButtonItem;
    UINavigationItem * _navigationItemShowingSpinner;
    char _isShowingSpinner;
    NSObject<AAUICredentialRecoveryPresentationDelegate> * _delegate;
}

@property (weak, nonatomic) NSObject<AAUICredentialRecoveryPresentationDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(NSObject<AAUICredentialRecoveryPresentationDelegate> *)arg0;
- (AAUICredentialRecoveryController *)init;
- (NSObject<AAUICredentialRecoveryPresentationDelegate> *)delegate;
- (void).cxx_destruct;
- (void)_cleanupLoader;
- (void)_addHeadersToRequest:(NSURLRequest *)arg0;
- (void)_popObjectModelAnimated:(char)arg0;
- (NSObject *)parentViewControllerForObjectModel:(NSObject *)arg0;
- (void)objectModelPressedBack:(id)arg0;
- (void)objectModel:(NSObject *)arg0 pressedLink:(id)arg1 httpMethod:(NSString *)arg2;
- (void)objectModel:(NSObject *)arg0 pressedButton:(id)arg1 attributes:(NSDictionary *)arg2;
- (void)loader:(RUILoader *)arg0 receivedObjectModel:(NSObject *)arg1 actionSignal:(int)arg2;
- (void)loader:(RUILoader *)arg0 didFailWithError:(char)arg1;
- (void)_cancelButtonTapped:(id)arg0;
- (AAUICredentialRecoveryController *)initWithRemoteUIURL:(NSURL *)arg0 modalPresentation:(char)arg1;
- (NSURL *)remoteUIURL;
- (void)_createRemoteUIViewControllerFromURL:(NSURL *)arg0;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_finishPresentationWithSuccess:(char)arg0;
- (void)_hideActivitySpinnerInNavigationBar;
- (void)_displayConnectionError;
- (void)startPresentation;
- (void)cancelPresentation;

@end
