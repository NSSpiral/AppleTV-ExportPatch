/* Runtime dump - UIMorphingLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMorphingLabel : UIView
{
    UIMorphingLabelGlyphSet * _srcGlyphSet;
    UIMorphingLabelGlyphSet * _dstGlyphSet;
    NSMutableArray * _hiddenGlyphViews;
    UIView * _colorView;
    id _memo;
    id _alignment;
    unsigned int _alignmentSize;
    id _alignmentDelays;
    _UIViewAnimationAttributes * _textAnimationAttributes;
    _UIViewAnimationAttributes * _textColorAnimationAttributes;
    float _lastUpdateTime;
    float _slowdown;
    float _rippleFactor;
    float _scaleFactor;
    char _isDoingFastAnimation;
    char _textDidChange;
    char _textColorDidChange;
    char _suppressLayoutSubviews;
    NSString * _text;
    UIFont * _font;
    UIColor * _textColor;
    int _textAlignment;
    struct CGRect _visibleRect;
}

@property (copy, nonatomic) NSString * text;
@property (retain, nonatomic) UIFont * font;
@property (retain, nonatomic) UIColor * textColor;
@property (nonatomic) int textAlignment;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) char suppressLayoutSubviews;

- (UIMorphingLabel *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UIMorphingLabel *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (void)setTextAlignment:(int)arg0;
- (void)setTextColor:(UIColor *)arg0;
- (void)setFont:(UIFont *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (UIFont *)font;
- (UIColor *)textColor;
- (int)textAlignment;
- (struct CGRect)visibleRect;
- (NSAttributedString *)attributedString;
- (void)setVisibleRect:(struct CGRect)arg0;
- (void)setSuppressLayoutSubviews:(char)arg0;
- (UIImage *)glyphViewWithImage:(UIImage *)arg0 isColorGlyph:(char)arg1;
- (float)flushAmount;
- (void)hideGlyph:(id)arg0;
- (void)baseInit;
- (float)alphaForFrame:(struct CGRect)arg0;
- (unsigned int)calculateHardAlignment:(struct ? *)arg0 size:(struct _NSRange)arg1 fromGlyphs:(char)arg2 count:(NSObject *)arg3 toGlyphs:(unsigned int)arg4 count:(unsigned short *)arg5;
- (float)currentMediaTime;
- (NSString *)uniqueStringWithPrefix:(NSString *)arg0;
- (void)animateShowGlyph:(id)arg0 alpha:(float)arg1 alphaDuration:(float)arg2 delay:(float)arg3;
- (void)animateGlyph:(id)arg0 toScale:(float)arg1 delay:(float)arg2;
- (void)animateGlyph:(id)arg0 toAlpha:(float)arg1 duration:(float)arg2 delay:(float)arg3;
- (float)totalRightOffsetForAlignmentHunkAtIndex:(unsigned int)arg0;
- (float)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)animateGlyph:(id)arg0 toPosition:(struct CGPoint)arg1 delay:(float)arg2;
- (float)changeInWidthDueToAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)animateGlyphsInRange:(struct _NSRange)arg0 ofGlyphSet:(NSSet *)arg1 byOffset:(float)arg2 delay:(float)arg3;
- (void)animateHideGlyph:(id)arg0 alphaDuration:(float)arg1 delay:(float)arg2;
- (void)copyStateFromGlyph:(id)arg0 toGlyph:(id)arg1;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)initMovementAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)calculateGlyphAlignment;
- (void)initAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned int)arg0;
- (void)animateAlignmentHunkAtIndex:(unsigned int)arg0;
- (NSString *)attributedStringForText:(NSString *)arg0;
- (char)suppressLayoutSubviews;
- (void)animateGlyphs;
- (void)animateTextColor;
- (float)requiredWidthForText:(NSString *)arg0;
- (void)animateShowGlyph:(id)arg0 alphaDuration:(float)arg1 delay:(float)arg2;
- (char)canFitText:(NSString *)arg0;

@end
