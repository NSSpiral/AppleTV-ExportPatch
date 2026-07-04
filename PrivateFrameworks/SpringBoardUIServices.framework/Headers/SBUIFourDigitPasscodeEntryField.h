/* Runtime dump - SBUIFourDigitPasscodeEntryField
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIFourDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase
{
    UIView * _leftPaddingView;
    UIView * _rightPaddingView;
    UIView * _characterIndicatorsContainerView;
    NSMutableArray * _characterIndicators;
    float _backgroundAlpha;
    UIView * _springView;
    UIView * _springViewParent;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)reset;
- (void)setBackgroundAlpha:(float)arg0;
- (void)_autofillForMesaWithCompletion:(id /* block */)arg0;
- (void)_setLuminosityBoost:(float)arg0;
- (void)_resetForFailedPasscode:(char)arg0 playUnlockFailedSound:(char)arg1;
- (void)setCustomBackgroundColor:(UIColor *)arg0;
- (SBUIFourDigitPasscodeEntryField *)initWithDefaultSizeAndLightStyle:(char)arg0;
- (struct CGRect)_entryFieldBoundsWithXOffset:(NSSet *)arg0;
- (struct UIEdgeInsets)_entryFieldPaddingOutsideRing;
- (void)_appendString:(NSString *)arg0;
- (void)_deleteLastCharacter;
- (char)_hasAnyCharacters;
- (struct CGSize)_viewSize;

@end
