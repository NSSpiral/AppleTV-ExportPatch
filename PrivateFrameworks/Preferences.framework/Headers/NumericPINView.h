/* Runtime dump - NumericPINView
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface NumericPINView : PINView <PSPasscodeFieldDelegate>
{
    PSPasscodeField * _passcodeField;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NumericPINView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void)appendString:(NSString *)arg0;
- (char)canBecomeFirstResponder;
- (char)isFirstResponder;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (void)deleteLastCharacter;
- (void)passcodeField:(PSPasscodeField *)arg0 enteredPasscode:(id)arg1;
- (void)hidePasscodeField:(char)arg0;

@end
