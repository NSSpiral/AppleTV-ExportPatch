/* Runtime dump - TPLCDView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLCDView : TPLCDBar
{
    UIView * _contentView;
    TPLCDTextView * _textView;
    TPLCDTextView * _labelView;
    TPLCDSubImageView * _imageView;
    id _layoutAsLabelled;
    char _verticallyCenterTextViewIfLabelless;
}

@property char verticallyCenterTextViewIfLabelless;

+ (float)defaultTextFontSize;
+ (float)defaultLabelFontSize;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setShadowColor:(UIColor *)arg0;
- (struct CGRect)_labelFrame;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (struct CGRect)fullSizedContentViewFrame;
- (TPLCDView *)initWithDefaultSizeForOrientation:(int)arg0;
- (UIImage *)subImage;
- (void)_resetContentViewFrame;
- (float)_textVInset;
- (float)_labelVInset;
- (char)shouldCenterContentView;
- (char)verticallyCenterTextViewIfLabelless;
- (struct CGRect)_text1Frame;
- (char)shouldCenterText;
- (struct CGRect)_imageViewFrame;
- (struct CGRect)textFrame;
- (void)setLabel:(NSString *)arg0 animate:(char)arg1;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;
- (void)setContentsAlpha:(float)arg0;
- (void)setTextFontSize:(float)arg0;
- (void)setLabelFontSize:(float)arg0;
- (void)blinkLabel;
- (void)setSubImage:(UIImage *)arg0;
- (void)setLayoutAsLabelled:(char)arg0;
- (void)setSecondLineText:(NSString *)arg0;
- (NSString *)secondLineText;
- (void)setVerticallyCenterTextViewIfLabelless:(char)arg0;

@end
