/* Runtime dump - TPLegacyButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyButton : UIButton
{
    UIImageView * _plusSeparator;
    int _color;
    NSString * _plusSeparatedTitle;
    char _forceReLayout;
    char _currentlyLayingOut;
    char _useStandardSizing;
}

@property char useStandardSizing;

+ (float)defaultHeight;
+ (float)defaultHeightForColor:(int)arg0;
+ (UIImage *)declineButtonImage;
+ (UIImage *)declineVideoButtonImage;
+ (UIImage *)answerButtonImage;
+ (UIImage *)acceptVideoButtonImage;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setEnabled:(char)arg0;
- (void)setHighlighted:(char)arg0;
- (struct CGRect)titleRectForContentRect:(NSObject *)arg0;
- (struct CGRect)imageRectForContentRect:(NSObject *)arg0;
- (int)buttonColor;
- (TPLegacyButton *)initWithTitle:(NSString *)arg0 icon:(UIImage *)arg1 color:(int)arg2 frame:(struct CGRect)arg3;
- (void)setPlusSeparatedTitle:(NSString *)arg0;
- (void)setButtonColor:(int)arg0;
- (void)setMinimumTitleFontSize:(float)arg0;
- (void)setMinimumTitleFontSize:(float)arg0 maximumTitleFontSize:(float)arg1;
- (void)setTitleImagePadding:(float)arg0;
- (void)setIconVerticalOffset:(float)arg0;
- (void)setTitleVerticalOffset:(float)arg0;
- (void)setDisabledButtonColor:(int)arg0;
- (void)_setButtonColor:(int)arg0;
- (void)_adjustIconColor;
- (void)_setDisabledButtonColor:(int)arg0;
- (char)useStandardSizing;
- (void)setUseStandardSizing:(char)arg0;

@end
