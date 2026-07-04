/* Runtime dump - TPLCDTextView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPLCDTextView : UIView
{
    NSString * _text;
    UIFont * _font;
    UIColor * _shadowColor;
    UIColor * _textColor;
    TPLCDTextViewScrollingView * _scrollingView;
    float _fontSize;
    struct CGRect _textRect;
    UIFrameAnimation * _animation;
    id _delegate;
    float _minFontSize;
    id _textRectIsValid;
    id _centerText;
    id _animates;
    id _isAnimating;
    id _leftTruncates;
}

+ (float)defaultMinimumFontSize;

- (TPLCDTextView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)setTextColor:(UIColor *)arg0;
- (void)setFont:(UIFont *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSObject *)_automationID;
- (void)setShadowColor:(UIColor *)arg0;
- (struct CGSize)sizeToFit;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setMinimumFontSize:(float)arg0;
- (void)_tearDownAnimation;
- (char)animates;
- (struct CGRect)textRect;
- (void)_setupForAnimationIfNecessary;
- (void)setLCDTextFont:(UIFont *)arg0;
- (void)_drawTextInRect:(struct CGRect)arg0 verticallyOffset:(struct CGSize)arg1;
- (void)_startScrolling;
- (void)_scheduleStartScrolling;
- (void)_finishedScrolling;
- (void)setCenterText:(char)arg0;
- (void)setLeftTruncatesText:(char)arg0;
- (void)setAnimatesIfTruncated:(char)arg0;
- (void)resetAnimation;

@end
