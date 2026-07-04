/* Runtime dump - SBUILongNumericPasscodeEntryField
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    UIView * _leftPaddingView;
    UIView * _rightPaddingView;
    SBUIButton * _okButton;
    char _showsOkButton;
    UILabel * _promptLabel;
    char _showsPromptLabel;
    char _firstResponder;
    UIView * _springView;
    UIView * _springViewParent;
}

@property (readonly, nonatomic) UIButton * okButton;
@property (nonatomic) char showsOkButton;
@property (readonly, nonatomic) UILabel * promptLabel;
@property (nonatomic) char showsPromptLabel;

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (char)resignFirstResponder;
- (void)_handleKeyUIEvent:(NSObject *)arg0;
- (char)becomeFirstResponder;
- (char)canBecomeFirstResponder;
- (char)isFirstResponder;
- (char)textFieldShouldBeginEditing:(UITextField *)arg0;
- (char)canResignFirstResponder;
- (void)setBackgroundAlpha:(float)arg0;
- (UIButton *)okButton;
- (void)_autofillForMesaWithCompletion:(id /* block */)arg0;
- (void)_resetForFailedPasscode:(char)arg0 playUnlockFailedSound:(char)arg1;
- (void)setCustomBackgroundColor:(UIColor *)arg0;
- (SBUILongNumericPasscodeEntryField *)initWithDefaultSizeAndLightStyle:(char)arg0;
- (struct CGSize)_viewSize;
- (void)_okButtonHit;
- (void)_getPasscodeFieldSize:(struct CGSize *)arg0 okButtonSize:(struct CGSize *)arg1;
- (void)setShowsOkButton:(char)arg0;
- (void)setShowsPromptLabel:(char)arg0;
- (char)showsOkButton;
- (UILabel *)promptLabel;
- (char)showsPromptLabel;

@end
