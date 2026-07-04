/* Runtime dump - PSInternationalLanguageSetupController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSInternationalLanguageSetupController : PSSetupController <UIActionSheetDelegate, UIAlertViewDelegate>
{
    NSString * _languageToSet;
    char _notOfficialLanguage;
    char _useOfficialLanguages;
    PSLanguageSelector * _languageSelector;
}

@property (retain, nonatomic) PSLanguageSelector * languageSelector;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PSInternationalLanguageSetupController *)init;
- (void)actionSheet:(UIActionSheet *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)commit;
- (char)disablesAutomaticKeyboardDismissal;
- (void)setupController;
- (void)setLanguageSelector:(PSLanguageSelector *)arg0;
- (char)useOfficialLanguages;
- (PSLanguageSelector *)languageSelector;
- (void)setNotOfficialLanguage:(char)arg0;
- (void)setLanguage:(NSString *)arg0 specifier:(PSSpecifier *)arg1;
- (void)didFinishCommit;
- (void)saveLanguage:(char)arg0;
- (void)changeLanguageWithIndex:(unsigned int)arg0 tag:(unsigned int)arg1;
- (void)showBlackViewWithLabel:(NSString *)arg0 moveLanguageToTop:(char)arg1 withLanguageIdentifier:(NSString *)arg2;
- (PSInternationalLanguageSetupController *)initWithOfficialLanguages;
- (NSString *)language:(NSString *)arg0;

@end
