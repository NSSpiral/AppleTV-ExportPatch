/* Runtime dump - FigSubtitleWebVTTRegionCALayer
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleWebVTTRegionCALayer : CALayer
{
    struct OpaqueFigSubtitleWebVTTRegionCALayerInternal * layerInternal;
}

- (void)setViewport:(struct CGRect)arg0;
- (struct __CFString *)getContentID;
- (void)setRenderer:(struct OpaqueFigSubtitleRenderer *)arg0;
- (void)setReLayout;
- (void)handleNeedsLayoutNotification;
- (void)dealloc;
- (void)setNeedsDisplay;
- (FigSubtitleWebVTTRegionCALayer *)init;
- (void)layoutSublayers;
- (void)setContent:(struct __CFDictionary *)arg0;
- (void)finalize;

@end
