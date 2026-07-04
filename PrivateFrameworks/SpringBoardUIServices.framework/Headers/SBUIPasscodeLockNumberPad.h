/* Runtime dump - SBUIPasscodeLockNumberPad
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate>
{
    SBNumberPadWithDelegate * _numberPad;
    <SBUIPasscodeLockNumberPadDelegate> * _delegate;
    UIView * _leftPaddingView;
    UIView * _rightPaddingView;
    UIView * _bottomPaddingView;
    SBUIButton * _emergencyCallButton;
    SBUIButton * _backspaceButton;
    SBUIButton * _cancelButton;
    UIControl<SBUIPasscodeNumberPadButton> * _downButton;
    char _showsBackspaceButton;
    char _showsEmergencyCallButton;
    char _showsCancelButton;
    UIColor * _customBackgroundColor;
    char _useLightStyle;
}

@property (nonatomic) <SBUIPasscodeLockNumberPadDelegate> * delegate;
@property (nonatomic) char showsBackspaceButton;
@property (nonatomic) char showsEmergencyCallButton;
@property (nonatomic) char showsCancelButton;
@property (readonly, nonatomic) NSArray * buttons;
@property (retain, nonatomic) UIControl<SBUIPasscodeNumberPadButton> * downButton;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SBUIPasscodeLockNumberPad *)_buttonForCharacter:(unsigned int)arg0 withLightStyle:(char)arg1;
+ (struct CGSize)_inputButtonCircleSize;
+ (struct UIEdgeInsets)_inputButtonCircleSpacing;

- (void)dealloc;
- (void)setDelegate:(<SBUIPasscodeLockNumberPadDelegate> *)arg0;
- (<SBUIPasscodeLockNumberPadDelegate> *)delegate;
- (void)setShowsCancelButton:(char)arg0;
- (char)showsCancelButton;
- (void)setBackgroundAlpha:(float)arg0;
- (NSArray *)buttons;
- (void)setShowsEmergencyCallButton:(char)arg0;
- (void)_setLuminosityBoost:(float)arg0;
- (char)showsEmergencyCallButton;
- (void)setCustomBackgroundColor:(UIColor *)arg0;
- (SBUIPasscodeLockNumberPad *)initWithDefaultSizeAndLightStyle:(char)arg0;
- (UIFont *)_fontForAncillaryButton;
- (void)_cancelButtonHit;
- (void)_backspaceButtonHit;
- (void)_emergencyCallButtonHit;
- (void)_configureAdditionalButtons;
- (void)_numberPadTouchDown:(id)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)_numberPadTouchUp:(id)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)_numberPadTouchCancelled:(id)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)_numberPadTouchDrag:(id)arg0 forEvent:(struct __GSEvent *)arg1;
- (void)setDownButton:(UIControl<SBUIPasscodeNumberPadButton> *)arg0;
- (void)setShowsBackspaceButton:(char)arg0;
- (float)_distanceToTopOfFirstButton;
- (char)showsBackspaceButton;
- (UIControl<SBUIPasscodeNumberPadButton> *)downButton;

@end
