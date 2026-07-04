/* Runtime dump - SBUIAlphanumericPasscodeEntryField
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField
{
    UIView * _leftPaddingView;
    UIView * _rightPaddingView;
    UIView * _springView;
    UIView * _springViewParent;
}

@property (readonly, nonatomic) UITextInputTraits * textInputTraits;

- (void)dealloc;
- (void)layoutSubviews;
- (UITextInputTraits *)textInputTraits;
- (void)setBackgroundAlpha:(float)arg0;
- (void)_autofillForMesaWithCompletion:(id /* block */)arg0;
- (void)_resetForFailedPasscode:(char)arg0 playUnlockFailedSound:(char)arg1;
- (void)setCustomBackgroundColor:(UIColor *)arg0;
- (SBUIAlphanumericPasscodeEntryField *)initWithDefaultSizeAndLightStyle:(char)arg0;
- (void)notePasscodeFieldTextDidChange;

@end
