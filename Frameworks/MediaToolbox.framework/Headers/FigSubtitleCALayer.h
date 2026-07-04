/* Runtime dump - FigSubtitleCALayer
 * Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleCALayer : CALayer
{
    struct OpaqueFigSubtitleCALayerInternal * layerInternal;
}

@property (nonatomic) char overscanSubtitleSupportEnabled;

+ (FigSubtitleCALayer *)defaultActionForKey:(NSString *)arg0;

- (void)setViewport:(struct CGRect)arg0;
- (void)handleNeedsLayoutNotification;
- (void)setVideosize:(struct CGSize)arg0;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg0;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg0;
- (void)beginUpdate;
- (void)endUpdate;
- (char)isOverscanSubtitleSupportEnabled;
- (void)setOverscanSubtitleSupportEnabled:(char)arg0;
- (CADisplay *)subtitleLayerDisplay;
- (void)addAnimations:(void *)arg0;
- (void)removeAnimations;
- (void)dealloc;
- (FigSubtitleCALayer *)init;
- (NSString *)actionForKey:(NSString *)arg0;
- (void)clear;
- (FigSubtitleCALayer *)initWithLayer:(CALayer *)arg0;
- (void)layoutSublayers;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)finalize;
- (void)setPlayer:(struct OpaqueFigPlayer *)arg0;

@end
