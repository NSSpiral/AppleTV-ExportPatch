/* Runtime dump - TPLegacyLCDView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLegacyLCDView : TPLegacyLCDBar
{
    UIView * _contentView;
    TPLegacyLCDTextView * _textView;
    TPLegacyLCDTextView * _secondLineTextView;
    TPLegacyLCDTextView * _labelView;
    TPLegacyLCDSubImageView * _imageView;
    id _layoutAsLabelled;
    char _hasBackgroundGradient;
    UIView * _backgroundGradientView;
}

@property (retain, nonatomic) UIView * backgroundGradientView;
@property (nonatomic) char hasBackgroundGradient;

+ (float)labelFontSize;
+ (float)textFontSize;

- (void)dealloc;
- (void)layoutSubviews;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setShadowColor:(UIColor *)arg0;
- (struct CGRect)_labelFrame;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (struct CGRect)fullSizedContentViewFrame;
- (TPLegacyLCDView *)initWithDefaultSizeForOrientation:(int)arg0;
- (UIImage *)subImage;
- (void)_resetContentViewFrame;
- (float)_textVInset;
- (float)_labelVInset;
- (char)shouldCenterContentView;
- (struct CGRect)_text1Frame;
- (char)shouldCenterText;
- (struct CGRect)_imageViewFrame;
- (struct CGRect)textFrame;
- (void)setLabel:(NSString *)arg0 animate:(char)arg1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;
- (void)setContentsAlpha:(float)arg0;
- (void)blinkLabel;
- (void)setSubImage:(UIImage *)arg0;
- (void)setLayoutAsLabelled:(char)arg0;
- (void)setSecondLineText:(NSString *)arg0;
- (NSString *)secondLineText;
- (struct CGRect)_text2Frame;
- (UIView *)backgroundGradientView;
- (void)setBackgroundGradientView:(UIView *)arg0;
- (char)hasBackgroundGradient;
- (void)setHasBackgroundGradient:(char)arg0;

@end
