/* Runtime dump - CPHighlighter
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPHighlighter : NSObject
{
    CPZone * boundingZone;
    CPTextLine * textLine;
    struct CGColor * color;
    struct CPPDFStyle * style;
    struct CPPDFStyle * highlightedStyle;
}

@property (readonly, nonatomic) struct CGColor * color;
@property (nonatomic) struct CPPDFStyle * style;
@property (nonatomic) struct CPPDFStyle * highlightedStyle;

+ (char)reconstructHighlightFor:(id)arg0;

- (struct CPPDFStyle *)style;
- (void)setStyle:(struct CPPDFStyle *)arg0;
- (struct CGColor *)color;
- (void)highlight;
- (struct CPPDFStyle *)highlightedStyle;
- (void)setHighlightedStyle:(struct CPPDFStyle *)arg0;
- (CPHighlighter *)initWithTextLine:(CPTextLine *)arg0 inZone:(NSObject *)arg1 ofColor:(struct CGColor *)arg2;

@end
