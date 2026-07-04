/* Runtime dump - FigSubtitleWebVTTCueCALayer
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleWebVTTCueCALayer : CALayer
{
    struct OpaqueFigSubtitleWebVTTCueCALayerInternal * layerInternal;
}

- (void)setViewport:(struct CGRect)arg0;
- (void)setDefaultFontSize:(float)arg0;
- (struct CGRect)getSuggestedBounds:(id)arg0;
- (void)setCuePosition:(struct CGPoint)arg0;
- (struct __CFString *)getContentID;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg0;
- (void)dealloc;
- (FigSubtitleWebVTTCueCALayer *)init;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)setContent:(struct __CFAttributedString *)arg0;
- (unsigned char)isDirty;
- (void)finalize;

@end
