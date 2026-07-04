/* Runtime dump - PSAccountSecurityController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate>
{
    PSSpecifier * _recoverySwitch;
    NSArray * _passcodeSpecifiers;
    PSSetupController * _devicePasscodeChangeSetupController;
    KeychainSyncDevicePINController * _devicePINController;
    KeychainSyncPhoneSettingsFragment * _phoneSettingsFragment;
    NSString * _SMSTarget;
    KeychainSyncCountryInfo * _SMSTargetCountryInfo;
    char _secureBackupEnabled;
    PSKeychainSyncManager * _manager;
    UIAlertView * _invalidPhoneNumberAlert;
    UIAlertView * _changeDevicePasscodeAlert;
    UIAlertView * _disableRecoveryConfirmationAlert;
    int _securityCodeType;
    NSString * _securityCode;
}

@property (nonatomic) int securityCodeType;
@property (retain, nonatomic) NSString * securityCode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PSAccountSecurityController *)init;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)phoneSettingsFragment:(KeychainSyncPhoneSettingsFragment *)arg0 didChangePhoneNumber:(NSNumber *)arg1 countryInfo:(KeychainSyncCountryInfo *)arg2;
- (NSArray *)specifiers;
- (void)reloadSpecifiers;
- (void)cancelPressed;
- (int)securityCodeType;
- (void)setSecurityCodeType:(int)arg0;
- (void)keychainSyncController:(BRController *)arg0 didFinishWithResult:(NSObject *)arg1 error:(NSError *)arg2;
- (void)handleBurnedRecord;
- (void)changeSecurityCode:(id)arg0;
- (void)setUseRecovery:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)useRecoveryForSepecifier:(id)arg0;
- (NSArray *)passcodeSpecifiers;
- (void)_setShowsDoneButton:(char)arg0;
- (void)setSecurityCode:(NSString *)arg0;
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg0;
- (NSString *)securityCode;
- (void)saveSMSTargetChanges;
- (void)navCancelPressed;
- (void)navDonePressed;
- (void)disableRecovery;

@end
