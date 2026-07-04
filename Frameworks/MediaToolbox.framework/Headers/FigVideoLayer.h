/* Runtime dump - FigVideoLayer
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigVideoLayer : CALayer
{
    FigVideoLayerInternal * _videoLayer;
}

- (void)notificationBarrier;
- (char)isVideoLayerBeingServiced;
- (NSString *)layerDisplayName;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)layerDidBecomeVisible:(char)arg0;
- (void)dealloc;
- (FigVideoLayer *)init;
- (FigVideoLayer *)initWithLayer:(CALayer *)arg0;
- (void)finalize;

@end
