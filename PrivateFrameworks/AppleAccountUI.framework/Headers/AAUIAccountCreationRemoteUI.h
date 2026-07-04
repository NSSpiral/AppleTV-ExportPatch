/* Runtime dump - AAUIAccountCreationRemoteUI
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAccountCreationRemoteUI : NSObject <RUIObjectModelDelegate>
{
    char _isModal;
    RUILoader * _loader;
    NSMutableArray * _objectModels;
    UINavigationController * _parentNavController;
    UINavigationController * _createAccountNavController;
    UIAlertView * _tcConfirmationAlert;
    UIAlertView * _failedToCreateAccountAlert;
    char _over13;
    AASetupAssistantService * _aaService;
    AAAutoAccountVerifier * _verifier;
    <AAUIAccountCreationDelegate> * _delegate;
}

@property (weak, nonatomic) <AAUIAccountCreationDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<AAUIAccountCreationDelegate> *)arg0;
- (<AAUIAccountCreationDelegate> *)delegate;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void).cxx_destruct;
- (void)_cleanupLoader;
- (void)_addHeadersToRequest:(NSURLRequest *)arg0;
- (void)_displayConnectionErrorAndDismiss;
- (void)loadURLRequest:(NSURLRequest *)arg0 addHeaders:(char)arg1;
- (void)_createAppleAccount;
- (void)_cleanupCreateAppleID:(NSObject *)arg0;
- (void)_popObjectModelAnimated:(char)arg0;
- (void)_userAgreedToTCs:(char)arg0;
- (NSObject *)parentViewControllerForObjectModel:(NSObject *)arg0;
- (void)objectModelDidChange:(NSDictionary *)arg0;
- (unsigned int)supportedInterfaceOrientationsForObjectModel:(NSObject *)arg0 page:(id)arg1;
- (void)objectModelPressedBack:(id)arg0;
- (void)objectModel:(NSObject *)arg0 pressedLink:(id)arg1 httpMethod:(NSString *)arg2;
- (void)objectModel:(NSObject *)arg0 pressedButton:(id)arg1 attributes:(NSDictionary *)arg2;
- (AAUIAccountCreationRemoteUI *)initWithNavController:(UINavigationController *)arg0 isModal:(char)arg1;
- (void)loadURLRequest:(NSURLRequest *)arg0;
- (void)loader:(RUILoader *)arg0 receivedObjectModel:(NSObject *)arg1 actionSignal:(int)arg2;
- (void)loader:(RUILoader *)arg0 didFailWithError:(char)arg1;

@end
