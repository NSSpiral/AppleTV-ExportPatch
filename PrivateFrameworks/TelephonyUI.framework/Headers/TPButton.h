/* Runtime dump - TPButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPButton : UIButton
{
    int _color;
    _UIBackdropView * _backdropView;
    char _blursBackground;
    char _roundsCorners;
    char _usesOverlayBlendingForContents;
}

@property (nonatomic) char blursBackground;
@property (nonatomic) char roundsCorners;
@property (nonatomic) char usesOverlayBlendingForContents;

+ (float)defaultHeight;
+ (float)defaultHeightForColor:(int)arg0;
+ (TPButton *)defaultStandardFont;
+ (float)defaultWidthForSideButton;
+ (float)defaultWidthForCenterButton;
+ (float)maxWidthForCenterButton;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)layoutSubviews;
- (void)setEnabled:(char)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)setImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)setHighlighted:(char)arg0;
- (void)setSelected:(char)arg0;
- (char)blursBackground;
- (void)setBlursBackground:(char)arg0;
- (void)_animationWillBegin;
- (void)_animationDidEnd;
- (int)buttonColor;
- (TPButton *)initWithTitle:(NSString *)arg0 icon:(UIImage *)arg1 color:(int)arg2 frame:(struct CGRect)arg3;
- (void)setPlusSeparatedTitle:(NSString *)arg0;
- (void)setButtonColor:(int)arg0;
- (void)setRoundsCorners:(char)arg0;
- (void)setUsesOverlayBlendingForContents:(char)arg0;
- (void)setMinimumTitleFontSize:(float)arg0;
- (void)setMinimumTitleFontSize:(float)arg0 maximumTitleFontSize:(float)arg1;
- (void)setTitleImagePadding:(float)arg0;
- (void)setIconVerticalOffset:(float)arg0;
- (void)setTitleVerticalOffset:(float)arg0;
- (void)setDisabledButtonColor:(int)arg0;
- (char)roundsCorners;
- (char)usesOverlayBlendingForContents;

@end
