/* Runtime dump - AVPlayerLayer
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLayer : CALayer
{
    AVPlayerLayerInternal * _playerLayer;
}

@property (retain, nonatomic) AVPlayer * player;
@property (copy) NSString * videoGravity;
@property (readonly, nonatomic) char readyForDisplay;
@property (readonly, nonatomic) struct CGRect videoRect;

+ (AVPlayerLayer *)keyPathsForValuesAffectingVideoLayerGravity;
+ (AVPlayerLayer *)playerLayerWithPlayer:(AVPlayer *)arg0;
+ (NSObject *)keyPathsForValuesAffectingVideoRect;

- (void)setVideoLayerGravity:(int)arg0;
- (void)setPlayerController:(BRController *)arg0;
- (int)videoLayerGravity;
- (NSDictionary *)pixelBufferAttributes;
- (void)_setSubtitleGravity:(id)arg0;
- (void)_notifyPlayerOfDisplaySize;
- (id)_transformToAbsoluteAnimationOfBounds:(id)arg0;
- (void)_forBoundsAnimations:(id)arg0 applyBlock:(id /* block */)arg1;
- (void)_addAnimationsForMaskLayer:(id)arg0;
- (void)_addAnimationsForVideoLayer:(id)arg0 size:(struct CGSize)arg1 gravity:(PKPhysicsFieldLinearGravity *)arg2;
- (void)_addAnimationsForClosedCaptionLayer:(id)arg0 gravity:(PKPhysicsFieldLinearGravity *)arg1;
- (struct CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg0;
- (void)_updatePresentationSize:(struct CGSize)arg0 forceUpdate:(char)arg1;
- (void)_setHasPlayerToObserve:(int)arg0 andShouldObserveIt:(int)arg1;
- (void)_setItem:(NSObject *)arg0 readyForDisplay:(char)arg1;
- (id)_subtitleGravity;
- (void)setPixelBufferAttributes:(NSDictionary *)arg0;
- (CALayer *)_videoLayer;
- (CALayer *)_closedCaptionLayer;
- (CALayer *)_subtitleLayer;
- (struct CGRect)_videoRectForBounds:(id)arg0;
- (NSString *)videoGravity;
- (char)isOverscanSubtitleSupportEnabled;
- (void)setOverscanSubtitleSupportEnabled:(char)arg0;
- (void)layerDidBecomeVisible:(char)arg0;
- (void)dealloc;
- (AVPlayerLayer *)init;
- (void)setBounds:(struct CGRect)arg0;
- (void)removeAnimationForKey:(NSString *)arg0;
- (void)addAnimation:(CAAnimation *)arg0 forKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (AVPlayerLayer *)initWithLayer:(CALayer *)arg0;
- (void)finalize;
- (void)setPlayer:(AVPlayer *)arg0;
- (void)setVideoGravity:(NSString *)arg0;
- (struct CGRect)videoRect;
- (AVPlayer *)player;
- (char)isReadyForDisplay;

@end
