/* Runtime dump - DevicePINPane
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINPane : PSEditingPane <UIKeyInput, UITextInputTraits, PSPINEntryViewDelegate>
{
    UITransitionView * _transitionView;
    char _transitioning;
    UIView<PINEntryView> * _pinView;
    UIKeyboard * _keypad;
    char _keypadActive;
    int _autocapitalizationType;
    int _autocorrectionType;
    int _keyboardType;
    int _keyboardAppearance;
    char _playSound;
    char _isBlocked;
    char _simplePIN;
}

@property (retain, nonatomic) UIView<PINEntryView> * pinView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) int spellCheckingType;
@property (nonatomic) int keyboardType;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int returnKeyType;
@property (nonatomic) char enablesReturnKeyAutomatically;
@property (nonatomic) char secureTextEntry;

- (DevicePINPane *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (char)canBecomeFirstResponder;
- (void)transitionViewDidComplete:(id)arg0;
- (int)keyboardAppearance;
- (char)hasText;
- (void)insertText:(NSString *)arg0;
- (void)deleteBackward;
- (char)isSecureTextEntry;
- (int)autocapitalizationType;
- (void)setAutocapitalizationType:(int)arg0;
- (int)autocorrectionType;
- (void)setAutocorrectionType:(int)arg0;
- (int)keyboardType;
- (void)setKeyboardType:(int)arg0;
- (void)setKeyboardAppearance:(int)arg0;
- (NSString *)password;
- (char)requiresKeyboard;
- (NSString *)specifierLabel;
- (void)deactivateKeypadView;
- (void)dismissKeypad;
- (void)showFailedAttempts:(long)arg0;
- (void)showError:(NSError *)arg0 error:(NSError *)arg1 isBlocked:(char)arg2 animate:(char)arg3;
- (void)hideFailedAttempts;
- (void)hideError;
- (void)setPINPolicyString:(NSString *)arg0 visible:(char)arg1;
- (char)simplePIN;
- (void)okButtonPressed;
- (void)slideToNewPasscodeField:(char)arg0 requiresKeyboard:(char)arg1 numericOnly:(char)arg2;
- (void)setSimplePIN:(char)arg0 requiresKeyboard:(char)arg1 numericOnly:(char)arg2;
- (void)pinView:(UIView<PINEntryView> *)arg0 pinValueChanged:(id)arg1;
- (void)pinView:(UIView<PINEntryView> *)arg0 pinEntered:(id)arg1;
- (void)_setPlaysKeyboardClicks:(char)arg0;
- (UIView<PINEntryView> *)pinView;
- (void)setPinView:(UIView<PINEntryView> *)arg0;
- (void)setKeyboardIsNumeric:(char)arg0;
- (void)_setKeypadState:(char)arg0 animated:(char)arg1;
- (void)activateKeypadView;
- (void)setKeyboardUserInteractionEnabled:(char)arg0;
- (void)delayForTextEntryAnimationsWithCompletion:(id /* block */)arg0;
- (void)setSimplePIN:(char)arg0 requiresKeyboard:(char)arg1;
- (void)slideToNewPasscodeField:(char)arg0 withKeyboard:(char)arg1;
- (void)clearPassword;

@end
