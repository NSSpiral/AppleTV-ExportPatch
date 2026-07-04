/* Runtime dump - KeychainSyncSecurityCodeController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncSecurityCodeController : KeychainSyncTextEntryController
{
    NSString * _generatedCode;
    UIButton * _footerButton;
    UILabel * _footerLabel;
    float _keyboardHeight;
    char _showsAdvancedSettings;
    int _mode;
    int _securityCodeType;
    NSString * _firstPasscodeEntry;
}

@property (nonatomic) int mode;
@property (nonatomic) int securityCodeType;
@property (nonatomic) char showsAdvancedSettings;
@property (retain, nonatomic) NSString * firstPasscodeEntry;

- (void)dealloc;
- (KeychainSyncSecurityCodeController *)init;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)setMode:(int)arg0;
- (int)mode;
- (NSAttributedString *)placeholderText;
- (NSArray *)specifiers;
- (int)securityCodeType;
- (void)setSecurityCodeType:(int)arg0;
- (NSString *)firstPasscodeEntry;
- (void)setFirstPasscodeEntry:(NSString *)arg0;
- (void)keyboardWillShow:(id)arg0;
- (Class)textEntryCellClass;
- (PSTableCell *)textEntryCell;
- (void)showAdvancedOptions;
- (void)generateRandomCode;
- (void)forgotSecurityCode;
- (void)updateNextButton;
- (void)animatePasscodeFieldLeft:(char)arg0;
- (void)textEntryViewDidChange:(NSDictionary *)arg0;
- (void)didFinishEnteringText:(NSString *)arg0;
- (void)dismissAlerts;
- (char)showsAdvancedSettings;
- (void)setShowsAdvancedSettings:(char)arg0;

@end
