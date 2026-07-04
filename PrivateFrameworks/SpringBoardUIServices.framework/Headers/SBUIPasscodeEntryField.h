/* Runtime dump - SBUIPasscodeEntryField
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate>
{
    <SBUIPasscodeEntryFieldDelegate> * _delegate;
    UITextField * _textField;
    NSMutableCharacterSet * _numericTrimmingSet;
    char _ignoreCallbacks;
    char _resigningFirstResponder;
    UIColor * _customBackgroundColor;
}

@property (nonatomic) <SBUIPasscodeEntryFieldDelegate> * delegate;
@property (copy, nonatomic) NSString * stringValue;
@property (retain, nonatomic) UIColor * customBackgroundColor;
@property (readonly, nonatomic) UITextField * textField;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<SBUIPasscodeEntryFieldDelegate> *)arg0;
- (<SBUIPasscodeEntryFieldDelegate> *)delegate;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void)reset;
- (void)appendString:(NSString *)arg0;
- (char)canBecomeFirstResponder;
- (char)isFirstResponder;
- (char)textFieldShouldBeginEditing:(UITextField *)arg0;
- (char)textField:(UITextField *)arg0 shouldChangeCharactersInRange:(struct _NSRange)arg1 replacementString:(NSString *)arg2;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (void)deleteLastCharacter;
- (void)setBackgroundAlpha:(float)arg0;
- (void)_autofillForMesaWithCompletion:(id /* block */)arg0;
- (void)_setLuminosityBoost:(float)arg0;
- (void)_resetForFailedPasscode:(char)arg0 playUnlockFailedSound:(char)arg1;
- (void)resetForFailedPasscode;
- (UIColor *)customBackgroundColor;
- (void)setCustomBackgroundColor:(UIColor *)arg0;
- (SBUIPasscodeEntryField *)initWithDefaultSizeAndLightStyle:(char)arg0;
- (BRTextFieldControl *)_textField;
- (void)_appendString:(NSString *)arg0;
- (void)_deleteLastCharacter;
- (char)_hasAnyCharacters;
- (struct CGSize)_viewSize;
- (char)_baseBecomeFirstResponder;
- (char)_baseResignFirstResponder;
- (void)notePasscodeFieldDidAcceptEntry;
- (char)shouldInsertPasscodeText:(NSString *)arg0;
- (void)notePasscodeFieldTextDidChange;
- (void)_handleKeyUIEvent:(NSObject *)arg0 source:(int)arg1;

@end
