/* Runtime dump - PSPhoneNumberSpecifier
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate>
{
    NSString * _countryCode;
}

@property (retain, nonatomic) NSString * countryCode;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (char)textField:(UITextField *)arg0 shouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(NSString *)arg2;
- (void)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)countryCode;

@end
