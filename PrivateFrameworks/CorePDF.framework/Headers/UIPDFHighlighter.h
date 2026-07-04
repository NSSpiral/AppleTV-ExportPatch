/* Runtime dump - UIPDFHighlighter
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFHighlighter : NSObject
{
    NSMutableArray * _highLightLayers;
    struct CGColor * _highlightColor;
    struct CGColor * _borderColor;
    struct CGColor * _whiteColor;
    struct CGPDFPage * _page;
    float _enlargeFactor;
    float _pdfToViewScale;
    float inset;
}

@property (nonatomic) float inset;

- (void)unhide;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setInset:(float)arg0;
- (UIPDFHighlighter *)init;
- (void)addAnimation:(CAAnimation *)arg0;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (void)clear;
- (float)inset;
- (void)addRectPath:(struct CGPath *)arg0 toView:(UIView *)arg1 layer:(CALayer *)arg2 rectangle:(struct ?)arg3 upright:(struct CGPoint)arg4;
- (void)makeTheClipPath:(NSString *)arg0 layer:(CALayer *)arg1 rectangle:(struct ?)arg2 upright:(struct CGPoint)arg3;
- (void)makeTheBorderPath:(NSString *)arg0 layer:(CALayer *)arg1 rectangle:(struct ?)arg2 upright:(struct CGPoint)arg3;
- (void)addHighlightLayerFor:(UIPDFHighlightLayer *)arg0 atIndex:(unsigned int)arg1 to:(NSObject *)arg2 animated:(char)arg3;
- (void)addHighlightFor:(TSWPHighlight *)arg0 to:(NSObject *)arg1 animated:(char)arg2;

@end
