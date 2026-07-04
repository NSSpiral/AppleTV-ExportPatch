/* Runtime dump - BRHorizontalDividerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface BRHorizontalDividerControl : BRControl
{
    NSAttributedString * _label;
    float _alignmentFactor;
    float _startOffset;
    float _endOffset;
    unsigned int _lineStyle;
    float _startOffsetText;
    int _heightStyle;
}

- (float)recommendedHeight;
- (void)setLabel:(NSAttributedString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)setDrawsLine:(char)arg0;
- (void)setHeightStyle:(int)arg0;
- (void)setStartOffsetText:(float)arg0;
- (void)setAlignmentFactor:(float)arg0;
- (void)setAttributedLabel:(NSString *)arg0;
- (char)drawsLine;
- (int)heightStyle;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (BRHorizontalDividerControl *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (NSAttributedString *)label;
- (void)setLabel:(NSAttributedString *)arg0;
- (char)isAccessibilityElement;
- (void)setStartOffset:(float)arg0;
- (void)setEndOffset:(float)arg0;

@end
