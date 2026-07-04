/* Runtime dump - AAUIFamilySetupViewController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <AAUIFamilySetupPageDelegate, RemoteUIControllerDelegate>
{
    ACAccount * _account;
    ACAccountStore * _accountStore;
    AAGrandSlamSigner * _grandSlamSigner;
    RemoteUIController * _remoteUIController;
    NSMutableURLRequest * _startRemoteUIRequest;
    NSMutableURLRequest * _currentRemoteUIRequest;
    char _isShowingSpinner;
    UIActivityIndicatorView * _spinnerView;
    UIBarButtonItem * _originalRightBarButtonItem;
    UINavigationItem * _navigationItemShowingSpinner;
}

@property (weak, nonatomic) <AAUIFamilySetupDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)shouldAutorotate;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (AAUIFamilySetupViewController *)initWithGrandSlamSigner:(AAGrandSlamSigner *)arg0 familyEligibilityResponse:(AAFamilyEligibilityResponse *)arg1;
- (void)familySetupPage:(id)arg0 didCompleteWithSuccess:(char)arg1;
- (AAUIFamilySetupViewController *)initWithAccount:(ACAccount *)arg0 store:(EKEventStore *)arg1;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_hideActivitySpinnerInNavigationBar;
- (AAUIFamilySetupViewController *)_initWithGrandSlamSigner:(AAGrandSlamSigner *)arg0 rootViewController:(BRController *)arg1;
- (id)_createCloseButton;
- (char)_isRunningInSettings;
- (NSDictionary *)_urlForLaunchingSettings;
- (void)_loadRemoteUIPages;
- (void)_closeButtonWasTapped:(id)arg0;
- (void)_sendUserToiTunesSettings;
- (void)_remoteUIDidCancel;
- (void)remoteUIController:(RemoteUIController *)arg0 willLoadRequest:(NSURLRequest *)arg1;
- (void)remoteUIController:(RemoteUIController *)arg0 didReceiveHTTPResponse:(NSURLResponse *)arg1;
- (void)remoteUIController:(RemoteUIController *)arg0 willPresentObjectModel:(NSObject *)arg1 modally:(char)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg0;
- (AAUIFamilySetupViewController *)initTrimmedFlowWithGrandSlamSigner:(AAGrandSlamSigner *)arg0;

@end
