/* Runtime dump - KeychainSyncPhoneNumberController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController>
{
    KeychainSyncPhoneSettingsFragment * _phoneSettingsFragment;
    UIAlertView * _invalidPhoneNumberAlert;
    UILabel * _footerLabel;
}

@property (nonatomic) <KeychainSyncViewControllerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)phoneSettingsFragment:(KeychainSyncPhoneSettingsFragment *)arg0 didChangePhoneNumber:(NSNumber *)arg1 countryInfo:(KeychainSyncCountryInfo *)arg2;
- (NSArray *)specifiers;
- (void)reloadSpecifiers;
- (void)nextPressed;
- (void)controllerDone;

@end
