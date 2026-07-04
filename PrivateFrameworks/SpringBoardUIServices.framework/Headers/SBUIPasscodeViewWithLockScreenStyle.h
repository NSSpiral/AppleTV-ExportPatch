/* Runtime dump - SBUIPasscodeViewWithLockScreenStyle
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeViewWithLockScreenStyle : UIView
{
    UIView<SBUIPasscodeLockView> * _passcodeView;
    _UIBackdropView * _blurView;
    float _blurRadius;
    char _blurEnabled;
}

@property (readonly, nonatomic) UIView<SBUIPasscodeLockView> * passcodeView;

- (void)dealloc;
- (void)layoutSubviews;
- (SBUIPasscodeViewWithLockScreenStyle *)initWithFrame:(struct CGRect)arg0 includeBlur:(struct CGSize)arg1 passcodeViewGenerator:(id)arg2;
- (void)setBlurEnabled:(char)arg0;
- (UIView<SBUIPasscodeLockView> *)passcodeView;

@end
