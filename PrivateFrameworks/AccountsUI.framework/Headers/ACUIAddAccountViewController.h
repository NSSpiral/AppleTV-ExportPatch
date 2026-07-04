/* Runtime dump - ACUIAddAccountViewController
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate>
{
    char _dontShowSecondLevelOtherAccountTypes;
    NSArray * _preEnabledDataclasses;
    unsigned char _originalWifiFlag;
    unsigned char _originalCellFlag;
    PSSpecifier * _gmailSpecifier;
}

@property (readonly, nonatomic) ACUIAccountViewProvidersManager * viewProvidersManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (ACUIAddAccountViewController *)init;
- (void)viewWillAppear:(char)arg0;
- (void).cxx_destruct;
- (NSNumber *)_specifierForiCloudAccount;
- (NSNumber *)_specifierForExchangeAccount;
- (id)_specifiersForRegionalMailAccounts;
- (NSNumber *)_specifierForGmailAccount;
- (NSNumber *)_specifierForYahooAccount;
- (NSNumber *)_specifierForAOLAccount;
- (NSNumber *)_specifierForOutlookAccount;
- (id)specifierForOtherAccounts;
- (NSString *)giantSpecifierWithName:(NSString *)arg0 forAccountTypeID:(NSObject *)arg1;
- (ACUIAccountViewProvidersManager *)viewProvidersManager;
- (void)_createGmailAccountTapped:(id)arg0;
- (void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(char)arg0;
- (NSObject *)_specifierForRegionalAccountType:(NSObject *)arg0;
- (void)setupViewControllerDidDismiss:(id)arg0;
- (NSArray *)specifiers;

@end
