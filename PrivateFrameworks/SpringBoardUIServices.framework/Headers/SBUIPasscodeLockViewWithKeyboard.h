/* Runtime dump - SBUIPasscodeLockViewWithKeyboard
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate>
{
    SBPasscodeKeyboard * _keyboard;
    SBUIAlphanumericPasscodeEntryField * _alphaEntryField;
    UILabel * _statusField;
    UILabel * _statusSubtitleView;
    UIView * _statusFieldBackground;
    SBUIRingViewLabelButton * _emergencyCallButton;
    UIView * _emergencyCallToTopFiller;
    UIView * _emergencyCallLeftFiller;
    UIView * _emergencyCallRightFiller;
    UIView * _statusFieldToTopOrEmergencyCallBottomFiller;
    UIView * _entryFieldToBottomFiller;
    char _wasMinimizedWhenAnimationStarted;
    char _previousKeyboardShowedInlineCandidates;
    char _disableAnimationsDuringMinMax;
    char _triedToMinMaxWhileRotating;
    char _isAnimating;
    char _usesLightStyle;
}

@property (retain, nonatomic) UILabel * statusField;
@property (retain, nonatomic) UILabel * statusSubtitleView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)layoutSubviews;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void)setBackgroundAlpha:(float)arg0;
- (void)setShowsEmergencyCallButton:(char)arg0;
- (void)setShowsStatusField:(char)arg0;
- (void)updateStatusText:(NSString *)arg0 subtitle:(NSString *)arg1 animated:(char)arg2;
- (void)_luminanceBoostDidChange;
- (float)backgroundAlpha;
- (void)setCustomBackgroundColor:(UIColor *)arg0;
- (SBUIPasscodeLockViewWithKeyboard *)initWithLightStyle:(char)arg0;
- (id)_newStatusField;
- (void)setStatusField:(UILabel *)arg0;
- (NSObject *)_newStatusSubtitleView;
- (void)setStatusSubtitleView:(UILabel *)arg0;
- (struct CGRect)_keyboardFrameForInterfaceOrientation:(id)arg0;
- (void)_hardwareReturnKeyPressed:(id)arg0;
- (void)_geometryChanged:(NSNotification *)arg0;
- (void)_handleWillRotateNotification:(NSNotification *)arg0;
- (void)_handleWillAnimateNotification:(NSNotification *)arg0;
- (void)_handleDidRotateNotification:(NSNotification *)arg0;
- (void)_toggleForEmergencyCall;
- (void)_toggleForStatusField;
- (void)_layoutForMinimizationState:(char)arg0;
- (char)_canMinMaxKeyboard;
- (char)_isMinimized;
- (void)_acceptOrCancelReturnKeyPress;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (UILabel *)statusField;
- (UILabel *)statusSubtitleView;
- (float)_keyboardToEntryFieldOffset;
- (float)_statusTitleWidth;
- (float)_statusFieldHeight;
- (void)_setMinimized:(char)arg0;
- (void)_minimize;
- (void)_maximize;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg0;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg0;
- (char)passcodeEntryField:(SBUIFourDigitPasscodeEntryField *)arg0 shouldInsertText:(NSString *)arg1;
- (void)passcodeEntryFieldTextDidChange:(NSDictionary *)arg0;
- (NSString *)passcode;

@end
