/* Runtime dump - SBUIPasscodeLockViewSIMLockKeypad
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewSIMLockKeypad : SBUIPasscodeLockViewLongNumericKeypad
{
    UILabel * _statusSubtitleView;
    UIView * _entryFieldFiller;
    float _targetEntryFieldFillerAlpha;
    char _isShowingStatus;
    UIView * _statusSpringView;
    UIView * _statusSpringViewParent;
}

@property (copy, nonatomic) NSString * statusTitle;
@property (copy, nonatomic) NSString * statusSubtitle;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setBackgroundAlpha:(float)arg0;
- (void)resetForFailedPasscode;
- (void)setCustomBackgroundColor:(UIColor *)arg0;
- (SBUIPasscodeLockViewSIMLockKeypad *)initWithLightStyle:(char)arg0;
- (void)_setHasInput:(char)arg0;
- (void)_layoutStatusView;
- (char)_showsPromptLabelOnEntryField;
- (UIFont *)_statusSubtitleFont;
- (void)forceShowStatus:(char)arg0;
- (void)_setText:(NSString *)arg0 onLabel:(NSString *)arg1;
- (char)_needsToHideTextFieldForStatus;
- (void)_shakeStatus;
- (void)_sizeLabel:(NSString *)arg0;
- (float)_expectedYOffsetBetweenTitleAndSubtitleViews;
- (float)_subtitleBaselineYOffsetFromTopOfNumberPad;
- (float)_subtitleBaselineYOffsetFromTopOfEntryField;
- (float)_expectedDistanceBetweenTitleAndSubtitleBaselines;
- (float)_distanceToFirstLineBaseline:(id)arg0;
- (float)_distanceFromLastLineBaselineToTextFieldBoundsHeight:(id)arg0;
- (NSString *)statusTitle;
- (void)setStatusTitle:(NSString *)arg0;
- (NSString *)statusSubtitle;
- (void)setStatusSubtitle:(NSString *)arg0;

@end
