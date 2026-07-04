/* Runtime dump - MPMoviePlayerController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMoviePlayerController : NSObject <MPMediaPlayback>
{
    id _implementation;
}

@property (copy, nonatomic) NSURL * contentURL;
@property (readonly, nonatomic) UIView * view;
@property (readonly, nonatomic) UIView * backgroundView;
@property (readonly, nonatomic) int playbackState;
@property (readonly, nonatomic) unsigned int loadState;
@property (nonatomic) int controlStyle;
@property (nonatomic) int repeatMode;
@property (nonatomic) char shouldAutoplay;
@property (nonatomic) char fullscreen;
@property (nonatomic) int scalingMode;
@property (readonly, nonatomic) char readyForDisplay;
@property (readonly, nonatomic) char isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

+ (void)preparePrerollAds;
+ (void)allInstancesResignActive;

- (BRController *)_iAd_prerollController;
- (void)set_iAd_prerollController:(BRController *)arg0;
- (void)playPrerollAdWithCompletionHandler:(id /* block */)arg0;
- (void)cancelPreroll;
- (void)setContentURL:(NSURL *)arg0;
- (MPMoviePlayerController *)initWithContentURL:(NSURL *)arg0;
- (NSURL *)contentURL;
- (int)playbackState;
- (unsigned int)loadState;
- (int)controlStyle;
- (void)setControlStyle:(int)arg0;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (char)shouldAutoplay;
- (void)setShouldAutoplay:(char)arg0;
- (char)isFullscreen;
- (void)setFullscreen:(char)arg0;
- (void)setFullscreen:(char)arg0 animated:(char)arg1;
- (int)scalingMode;
- (void)setScalingMode:(int)arg0;
- (char)allowsAirPlay;
- (void)setAllowsAirPlay:(char)arg0;
- (char)isAirPlayVideoActive;
- (void)prepareToPlay;
- (char)isPreparedToPlay;
- (void)play;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (unsigned int)movieMediaTypes;
- (void)setMovieSourceType:(int)arg0;
- (int)movieSourceType;
- (double)playableDuration;
- (void)setInitialPlaybackTime:(double)arg0;
- (double)initialPlaybackTime;
- (void)setEndPlaybackTime:(double)arg0;
- (double)endPlaybackTime;
- (double)currentPlaybackTime;
- (void)setCurrentPlaybackTime:(double)arg0;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackRate:(float)arg0;
- (void)_resignActive;
- (char)_isReadyForDisplay;
- (MPMoviePlayerController *)initWithPlayerItem:(NSObject *)arg0;
- (char)readyForDisplay;
- (void)dealloc;
- (MPMoviePlayerController *)init;
- (UIView *)view;
- (double)duration;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)stop;
- (UIView *)backgroundView;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (MPMoviePlayerController *)initWithAsset:(NSSet *)arg0;
- (void).cxx_destruct;
- (void)pause;
- (struct CGSize)naturalSize;

@end
