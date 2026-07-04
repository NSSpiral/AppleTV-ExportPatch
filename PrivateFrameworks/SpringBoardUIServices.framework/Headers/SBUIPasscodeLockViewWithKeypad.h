/* Runtime dump - SBUIPasscodeLockViewWithKeypad
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate>
{
    UILabel * _statusTitleView;
    UILabel * _statusSubtitleView;
    UIView * _statusBackgroundView;
    SBUIPasscodeLockNumberPad * _numberPad;
    UIView * _topToStatusFieldOrEntryFieldFiller;
    UIView * _entryFieldToNumberPadFiller;
    UIView * _leftToNumberPadFiller;
    UIView * _rightToNumberPadFiller;
    UIView * _bottomToNumberPadFiller;
    NSString * _lastCharacterBeforeBackspace;
    char _undoInputOnTouchCancellation;
    char _useLightStyle;
}

@property (nonatomic) char undoInputOnTouchCancellation;
@property (retain, nonatomic) NSString * lastCharacterBeforeBackspace;
@property (retain, nonatomic) UILabel * statusTitleView;
@property (retain, nonatomic) UILabel * statusSubtitleView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SBUIPasscodeLockViewWithKeypad *)init;
- (void)layoutSubviews;
- (void)reset;
- (void)setBackgroundAlpha:(float)arg0;
- (void)setShowsEmergencyCallButton:(char)arg0;
- (void)setShowsStatusField:(char)arg0;
- (void)updateStatusText:(NSString *)arg0 subtitle:(NSString *)arg1 animated:(char)arg2;
- (void)_luminanceBoostDidChange;
- (void)resetForFailedPasscode;
- (float)backgroundAlpha;
- (void)setCustomBackgroundColor:(UIColor *)arg0;
- (SBUIPasscodeLockViewWithKeypad *)initWithLightStyle:(char)arg0;
- (NSObject *)_newStatusSubtitleView;
- (void)setStatusSubtitleView:(UILabel *)arg0;
- (void)_toggleForStatusField;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegatePasscodeCancelled;
- (UILabel *)statusSubtitleView;
- (float)_statusTitleWidth;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg0;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg0;
- (char)passcodeEntryField:(SBUIFourDigitPasscodeEntryField *)arg0 shouldInsertText:(NSString *)arg1;
- (void)passcodeEntryFieldTextDidChange:(NSDictionary *)arg0;
- (UILabel *)_statusSubtitleView;
- (char)_usesLightStyle;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg0 keyDown:(char)arg1;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg0 keyUp:(id)arg1;
- (void)passcodeLockNumberPad:(SBUIPasscodeLockNumberPad *)arg0 keyCancelled:(id)arg1;
- (void)passcodeLockNumberPadCancelButtonHit:(id)arg0;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)arg0;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg0;
- (SBUIPasscodeLockNumberPad *)_numberPad;
- (char)_includesStatusView;
- (NSObject *)_newStatusTitleView;
- (void)setStatusTitleView:(UILabel *)arg0;
- (UILabel *)statusTitleView;
- (id)_newEntryField;
- (void)_setHasInput:(char)arg0;
- (float)_numberPadOffsetFromTopOfScreen;
- (float)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (void)_layoutStatusView;
- (void)setLastCharacterBeforeBackspace:(NSString *)arg0;
- (UIFont *)_statusTitleViewTitleFont;
- (UIFont *)_statusSubtitleViewTitleFont;
- (id)_numericEntryFieldIfExists;
- (void)_noteBackspaceHit;
- (void)_noteStringEntered:(id)arg0 eligibleForPlayingSounds:(char)arg1;
- (void)_noteKeyUp:(id)arg0;
- (UILabel *)_statusTitleView;
- (UIView *)_statusBackgroundView;
- (char)_undoInputOnTouchCancellation;
- (void)_setUndoInputOnTouchCancellation:(char)arg0;
- (NSString *)lastCharacterBeforeBackspace;
- (NSString *)passcode;

@end
