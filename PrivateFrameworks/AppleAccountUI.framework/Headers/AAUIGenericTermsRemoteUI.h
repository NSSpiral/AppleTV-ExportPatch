/* Runtime dump - AAUIGenericTermsRemoteUI
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIGenericTermsRemoteUI : NSObject <RUIObjectModelDelegate>
{
    UINavigationController * _parentNavController;
    UIViewController * _originatingViewController;
    UINavigationController * _genericTermsUIViewController;
    RUILoader * _loader;
    NSMutableArray * _objectModels;
    ACAccount * _account;
    ACAccountStore * _accountStore;
    char _isModal;
    UIAlertView * _tcConfirmationAlert;
    NSString * _agreeURL;
    <AAUIGenericTermsRemoteUIDelegate> * _delegate;
}

@property (weak, nonatomic) <AAUIGenericTermsRemoteUIDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<AAUIGenericTermsRemoteUIDelegate> *)arg0;
- (<AAUIGenericTermsRemoteUIDelegate> *)delegate;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void).cxx_destruct;
- (AAUIGenericTermsRemoteUI *)initWithAccount:(ACAccount *)arg0 inStore:(NSObject *)arg1;
- (void)presentFromViewController:(BRController *)arg0 modal:(char)arg1;
- (void)_addHeadersToRequest:(NSURLRequest *)arg0;
- (void)_displayConnectionErrorAndDismiss;
- (void)_popObjectModelAnimated:(char)arg0;
- (NSObject *)parentViewControllerForObjectModel:(NSObject *)arg0;
- (unsigned int)supportedInterfaceOrientationsForObjectModel:(NSObject *)arg0 page:(id)arg1;
- (void)objectModelPressedBack:(id)arg0;
- (void)objectModel:(NSObject *)arg0 pressedLink:(id)arg1 httpMethod:(NSString *)arg2;
- (void)objectModel:(NSObject *)arg0 pressedButton:(id)arg1 attributes:(NSDictionary *)arg2;
- (void)loader:(RUILoader *)arg0 receivedObjectModel:(NSObject *)arg1 actionSignal:(int)arg2;
- (void)loader:(RUILoader *)arg0 didFailWithError:(char)arg1;
- (void)_cancelButtonTapped:(id)arg0;
- (void)_cleanUpAndDismissWithSuccess:(char)arg0;
- (void)_cleanupRUILoader;

@end
