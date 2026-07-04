/* Runtime dump - UIPDFPageContentLayer
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageContentLayer : CALayer <UIPDFSelectionLayer>
{
    CALayer * _selectionLayer;
}

- (void)dealloc;
- (void)setNeedsDisplay;
- (UIPDFPageContentLayer *)init;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)setSelectionNeedsDisplay;

@end
