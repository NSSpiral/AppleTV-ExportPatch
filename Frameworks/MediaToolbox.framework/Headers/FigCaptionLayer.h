/* Runtime dump - FigCaptionLayer
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigCaptionLayer : CALayer
{
    FigCaptionLayerPrivate * _priv;
}

- (void)resetCaptions;
- (void)processCaptionCommand:(unsigned int)arg0 data:(NSData *)arg1;
- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer *)arg0;
- (void)dealloc;
- (FigCaptionLayer *)init;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (void)setFontName:(char *)arg0;
- (void)layoutSublayers;
- (void)finalize;

@end
