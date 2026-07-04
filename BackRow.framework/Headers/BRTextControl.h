/* Runtime dump - BRTextControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRTextControl : BRControl
{
    NSAttributedString * _string;
    char _adjustsFontSizeToFitWidth;
    char _adjustsFontSizeBeforeTruncating;
    char _verticallyCenterAdjustedText;
    float _minimumScaleFactor;
}

@property (nonatomic) char adjustsFontSizeToFitWidth;
@property (nonatomic) char adjustsFontSizeBeforeTruncating;
@property (nonatomic) char verticallyCenterAdjustedText;
@property (nonatomic) float minimumScaleFactor;

- (void)setText:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (struct CGSize)renderedSizeWithMaxSize:(struct CGSize)arg0;
- (struct CGSize)renderedSize;
- (struct CGSize)renderedSizeWithMaxSize:(struct CGSize)arg0 maxLines:(unsigned int)arg1 minWidth:(float)arg2;
- (void)setAdjustsFontSizeBeforeTruncating:(char)arg0;
- (NSArray *)accessibilityTraitsList;
- (void)setVerticallyCenterAdjustedText:(char)arg0;
- (id)ValueBinding;
- (void)updateBoundValue;
- (char)adjustsFontSizeBeforeTruncating;
- (char)verticallyCenterAdjustedText;
- (void)bindValueBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)_shrinkTextToFitInBounds:(struct CGSize)arg0;
- (void)_shrinkTextToTwoLines:(struct CGSize)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (BRTextControl *)init;
- (NSString *)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (void)setAdjustsFontSizeToFitWidth:(char)arg0;
- (char)adjustsFontSizeToFitWidth;
- (void)setMinimumScaleFactor:(float)arg0;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (void)setMaxSize:(struct CGSize)arg0;
- (NSString *)attributedString;
- (float)minimumScaleFactor;
- (char)isAccessibilityElement;

@end
