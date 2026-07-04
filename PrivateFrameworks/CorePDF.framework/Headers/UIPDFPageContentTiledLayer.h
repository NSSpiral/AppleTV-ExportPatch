/* Runtime dump - UIPDFPageContentTiledLayer
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer>
{
    CALayer * _selectionLayer;
}

- (void)dealloc;
- (void)setNeedsDisplay;
- (UIPDFPageContentTiledLayer *)init;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)setSelectionNeedsDisplay;

@end
