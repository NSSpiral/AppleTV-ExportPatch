/* Runtime dump - KeychainSyncPhoneSettingsFragment
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncPhoneSettingsFragment : NSObject
{
    NSArray * _specifiers;
    PSPhoneNumberSpecifier * _phoneNumberSpecifier;
    PSSpecifier * _countrySpecifier;
    PSListController * _listController;
    NSString * _phoneNumber;
    KeychainSyncCountryInfo * _countryInfo;
    <KeychainSyncPhoneSettingsFragmentDelegate> * _delegate;
    NSString * _title;
}

@property (readonly, retain, nonatomic) NSArray * specifiers;
@property (retain, nonatomic) NSString * phoneNumber;
@property (retain, nonatomic) KeychainSyncCountryInfo * countryInfo;
@property (readonly, retain, nonatomic) PSEditableTableCell * phoneNumberCell;
@property (nonatomic) <KeychainSyncPhoneSettingsFragmentDelegate> * delegate;
@property (retain, nonatomic) NSString * title;

- (void)setPhoneNumber:(NSString *)arg0;
- (void)textFieldChanged:(NSNotification *)arg0;
- (void)dealloc;
- (void)setDelegate:(<KeychainSyncPhoneSettingsFragmentDelegate> *)arg0;
- (void)setTitle:(NSString *)arg0;
- (<KeychainSyncPhoneSettingsFragmentDelegate> *)delegate;
- (void)resignFirstResponder;
- (NSString *)title;
- (NSString *)phoneNumber;
- (void)setDialingCountryInfo:(NSDictionary *)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)dialingCountryInfoForSpecifier:(id)arg0;
- (void)setPhoneNumber:(NSString *)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)phoneNumberForSpecifier:(PSPhoneNumberSpecifier *)arg0;
- (PSEditableTableCell *)phoneNumberCell;
- (NSNumber *)unformattedPhoneNumber;
- (KeychainSyncCountryInfo *)countryInfo;
- (KeychainSyncPhoneSettingsFragment *)initWithListController:(PSListController *)arg0;
- (NSArray *)specifiers;
- (void)reloadSpecifiers;
- (void)setCountryInfo:(KeychainSyncCountryInfo *)arg0;

@end
