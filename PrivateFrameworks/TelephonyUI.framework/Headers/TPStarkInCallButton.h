/* Runtime dump - TPStarkInCallButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkInCallButton : UIButton
{
    char _toggledOn;
    UILabel * _buttonLabel;
    NSLayoutConstraint * _horizontalPositioningConstraint;
    int _inCallButtonType;
    int _specialLayoutType;
    UIColor * _unhighlightedBackgroundColor;
    TPStarkInCallButtonRing * _ringView;
}

@property (retain) UILabel * buttonLabel;
@property (retain) NSLayoutConstraint * horizontalPositioningConstraint;
@property (readonly) int inCallButtonType;
@property (nonatomic) char toggledOn;
@property (nonatomic) int specialLayoutType;
@property (retain) UIColor * unhighlightedBackgroundColor;
@property (retain) TPStarkInCallButtonRing * ringView;

- (void)dealloc;
- (void)setEnabled:(char)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;
- (void)setButtonLabel:(UILabel *)arg0;
- (UILabel *)buttonLabel;
- (TPStarkInCallButtonRing *)ringView;
- (void)setRingView:(TPStarkInCallButtonRing *)arg0;
- (int)inCallButtonType;
- (char)toggledOn;
- (void)setToggledOn:(char)arg0;
- (NSLayoutConstraint *)horizontalPositioningConstraint;
- (void)setHorizontalPositioningConstraint:(NSLayoutConstraint *)arg0;
- (TPStarkInCallButton *)initForButtonType:(int)arg0;
- (void)setSpecialLayoutType:(int)arg0;
- (void)setHasRingView:(char)arg0;
- (void)updateToProperIconColor;
- (UIColor *)unhighlightedBackgroundColor;
- (int)specialLayoutType;
- (void)setUnhighlightedBackgroundColor:(UIColor *)arg0;

@end
