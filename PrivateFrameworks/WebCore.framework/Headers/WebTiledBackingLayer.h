/* Runtime dump - WebTiledBackingLayer
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebTiledBackingLayer : CALayer
{
    struct OwnPtr<WebCore::TileController> _tileController;
}

- (void)setOpaque:(char)arg0;
- (void)dealloc;
- (void)setNeedsDisplay;
- (WebTiledBackingLayer *)init;
- (void)setBounds:(struct CGRect)arg0;
- (void)invalidate;
- (NSString *)actionForKey:(NSString *)arg0;
- (char)isOpaque;
- (float)contentsScale;
- (void)setContentsScale:(float)arg0;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0;
- (void)setBorderWidth:(float)arg0;
- (void)setBorderColor:(struct CGColor *)arg0;
- (void).cxx_construct;
- (WebTiledBackingLayer *)initWithLayer:(CALayer *)arg0;
- (void).cxx_destruct;
- (struct TileController *)createTileController:(BRController *)arg0;
- (char)acceleratesDrawing;
- (void)setAcceleratesDrawing:(char)arg0;
- (struct TiledBacking *)tiledBacking;

@end
