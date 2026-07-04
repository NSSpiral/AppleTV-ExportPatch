/* Runtime dump - BRStrokeAndFillTextControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRStrokeAndFillTextControl : BRControl
{
    NSAttributedString * _attributedString;
    float _strokeWidth;
    struct CGColor * _strokeColor;
}

@property (copy) NSAttributedString * attributedString;
@property float strokeWidth;
@property (retain) struct CGColor * strokeColor;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (NSAttributedString *)attributedString;
- (void)setStrokeColor:(struct CGColor *)arg0;
- (struct CGColor *)strokeColor;
- (float)strokeWidth;
- (void)setStrokeWidth:(float)arg0;

@end
