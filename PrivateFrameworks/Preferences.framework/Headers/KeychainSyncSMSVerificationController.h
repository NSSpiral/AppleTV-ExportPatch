/* Runtime dump - KeychainSyncSMSVerificationController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncSMSVerificationController : KeychainSyncTextEntryController <UIAlertViewDelegate>
{
    UIButton * _footerButton;
    UIAlertView * _supportVerificationAlert;
    NSString * _phoneNumber;
    NSString * _dialingPrefix;
    NSString * _countryCode;
    unsigned int _verificationCodeLength;
    PSKeychainSyncManager * _keychainSyncManager;
}

@property (retain, nonatomic) NSString * phoneNumber;
@property (retain, nonatomic) NSString * dialingPrefix;
@property (retain, nonatomic) NSString * countryCode;
@property (nonatomic) unsigned int verificationCodeLength;
@property (nonatomic) PSKeychainSyncManager * keychainSyncManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setPhoneNumber:(NSString *)arg0;
- (void)dealloc;
- (KeychainSyncSMSVerificationController *)init;
- (void)alertView:(UIAlertView *)arg0 didDismissWithButtonIndex:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (NSString *)phoneNumber;
- (void)setCountryCode:(NSString *)arg0;
- (void)setDialingPrefix:(NSString *)arg0;
- (NSString *)dialingPrefix;
- (NSArray *)specifiers;
- (void)dismissAlerts;
- (void)setKeychainSyncManager:(PSKeychainSyncManager *)arg0;
- (void)setVerificationCodeLength:(unsigned int)arg0;
- (unsigned int)verificationCodeLength;
- (void)showSupportVerification;
- (PSKeychainSyncManager *)keychainSyncManager;
- (unsigned int)numberOfPasscodeFields;
- (NSString *)countryCode;

@end
