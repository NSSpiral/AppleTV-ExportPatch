/* Runtime dump - KeychainSyncTextEntryController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate>
{
    PSTableCell * _textEntryCell;
    UIView<UIKeyInput> * _textEntryView;
    PSSpecifier * _textEntrySpecifier;
    char _hidesNextButton;
    char _secureTextEntry;
    char _textFieldHasRoundBorder;
    char _convertsNumeralsToASCII;
    int _textEntryType;
    NSString * _textValue;
}

@property (nonatomic) int textEntryType;
@property (nonatomic) char hidesNextButton;
@property (nonatomic) char secureTextEntry;
@property (nonatomic) char textFieldHasRoundBorder;
@property (nonatomic) char convertsNumeralsToASCII;
@property (retain, nonatomic) NSString * textValue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)textFieldChanged:(NSNotification *)arg0;
- (void)dealloc;
- (KeychainSyncTextEntryController *)init;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)becomeFirstResponder;
- (void)loadView;
- (void)setSecureTextEntry:(char)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (NSAttributedString *)placeholderText;
- (NSArray *)specifiers;
- (void)setTextEntryType:(int)arg0;
- (void)setHidesNextButton:(char)arg0;
- (int)textEntryType;
- (Class)textEntryCellClass;
- (PSTableCell *)textEntryCell;
- (void)nextPressed;
- (UIView<UIKeyInput> *)textEntryView;
- (void)setTextFieldHasRoundBorder:(char)arg0;
- (void)updateNextButton;
- (void)setTextEntryText:(NSString *)arg0;
- (NSString *)textEntryText;
- (void)textEntryViewDidChange:(NSDictionary *)arg0;
- (void)didFinishEnteringText:(NSString *)arg0;
- (void)setConvertsNumeralsToASCII:(char)arg0;
- (unsigned int)numberOfPasscodeFields;
- (void)passcodeField:(PSPasscodeField *)arg0 didUpdateEnteredPasscode:(id)arg1;
- (char)convertsNumeralsToASCII;
- (char)hidesNextButton;
- (NSString *)textValue;
- (void)setTextValue:(NSString *)arg0;
- (PSSpecifier *)textEntrySpecifier;
- (void)setTextValue:(NSString *)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)getTextValueForSpecifier:(id)arg0;
- (char)textFieldHasRoundBorder;
- (char)secureTextEntry;

@end
