/* Runtime dump - AAUIFamilyInvitationAcceptanceViewController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyInvitationAcceptanceViewController : AAUIBleachedNavigationController <AAUIConfirmIdentityViewControllerDelegate, RemoteUIControllerDelegate>
{
    ACAccount * _account;
    ACAccountStore * _accountStore;
    AAGrandSlamSigner * _grandSlamSigner;
    AAFamilyInvite * _invite;
    RemoteUIController * _remoteUIController;
    NSOperationQueue * _inviteOperationQueue;
    NSMutableURLRequest * _startRemoteUIRequest;
    NSMutableURLRequest * _currentRemoteUIRequest;
}

@property (weak, nonatomic) <AAUIFamilyInvitationAcceptanceDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void).cxx_destruct;
- (void)confirmIdentityViewController:(BRController *)arg0 didCompleteWithSuccess:(char)arg1;
- (id)_createCancelButton;
- (void)_cancelButtonWasTapped:(id)arg0;
- (void)_sendUserToiTunesSettings;
- (void)remoteUIController:(RemoteUIController *)arg0 willLoadRequest:(NSURLRequest *)arg1;
- (void)remoteUIController:(RemoteUIController *)arg0 didReceiveHTTPResponse:(NSURLResponse *)arg1;
- (void)remoteUIController:(RemoteUIController *)arg0 willPresentObjectModel:(NSObject *)arg1 modally:(char)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg0;
- (void)_loadiTunesLinkingRemoteUI;
- (void)_showErrorAlert;
- (AAUIFamilyInvitationAcceptanceViewController *)initWithInvite:(AAFamilyInvite *)arg0 grandSlamSigner:(AAGrandSlamSigner *)arg1;

@end
