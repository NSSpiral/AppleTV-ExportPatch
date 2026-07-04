/* Runtime dump - PasscodeFieldCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate>
{
    PSPasscodeField * _passcodeField;
    char _convertsNumeralsToASCII;
    char _denyFirstResponder;
    <KeychainSyncPasscodeFieldDelegate> * _delegate;
}

@property (nonatomic) <KeychainSyncPasscodeFieldDelegate> * delegate;
@property (nonatomic) char convertsNumeralsToASCII;
@property (nonatomic) char denyFirstResponder;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<KeychainSyncPasscodeFieldDelegate> *)arg0;
- (void)layoutSubviews;
- (<KeychainSyncPasscodeFieldDelegate> *)delegate;
- (char)becomeFirstResponder;
- (char)hasText;
- (void)deleteBackward;
- (int)keyboardType;
- (id)passcodeField:(PSPasscodeField *)arg0 shouldInsertText:(NSString *)arg1;
- (PasscodeFieldCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)passcodeField:(PSPasscodeField *)arg0 enteredPasscode:(id)arg1;
- (void)setConvertsNumeralsToASCII:(char)arg0;
- (char)denyFirstResponder;
- (char)convertsNumeralsToASCII;
- (void)_setSecureTextEntry:(char)arg0;
- (void)setPasscodeText:(NSString *)arg0;
- (NSString *)passcodeText;
- (void)setDenyFirstResponder:(char)arg0;

@end
