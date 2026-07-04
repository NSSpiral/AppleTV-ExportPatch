/* Runtime dump - AVSubtitleLayer
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSubtitleLayer : CALayer
{
    AVSubtitleLayerInternal * _subtitleLayer;
}

@property (retain, nonatomic) AVPlayer * player;
@property (nonatomic) char overscanSubtitleSupportEnabled;
@property (readonly, nonatomic) CADisplay * subtitleLayerDisplay;

+ (AVSubtitleLayer *)subtitleLayerWithPlayer:(AVPlayer *)arg0;

- (void)_setHasPlayerToObserve:(int)arg0 andShouldObserveIt:(int)arg1;
- (void)_setSubtitleSample:(NSObject *)arg0;
- (long)updateSubtitle:(id)arg0 forcedSubtitleSample:(char)arg1 shouldBeHidden:(char *)arg2;
- (void)_updateNonForcedSubtitleDisplayEnabled:(char)arg0;
- (long)getLayout:(struct SubtitleLayoutParameters)arg0 suggestLayout:(struct CGSize)arg1 shouldUpdateCachedSubtitleSample:(NSObject *)arg2;
- (void)subtitleRenderingNeedsLayout;
- (char)isOverscanSubtitleSupportEnabled;
- (void)setOverscanSubtitleSupportEnabled:(char)arg0;
- (CADisplay *)subtitleLayerDisplay;
- (void)layerDidBecomeVisible:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (AVSubtitleLayer *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (AVSubtitleLayer *)initWithLayer:(CALayer *)arg0;
- (void)drawInContext:(struct CGContext *)arg0;
- (void)finalize;
- (void)setPlayer:(AVPlayer *)arg0;
- (AVPlayer *)player;

@end
