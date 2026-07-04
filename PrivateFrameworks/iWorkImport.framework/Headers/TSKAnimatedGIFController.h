/* Runtime dump - TSKAnimatedGIFController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnimatedGIFController : NSObject <TSKMediaPlayerController>
{
    <TSKMediaPlayerControllerDelegate> * mDelegate;
    struct CGImageSource * mSource;
    NSArray * mFrames;
    NSMutableSet * mLayers;
    char mPlaying;
    double mLastDisplayUpdateTime;
    unsigned int mDisplayLinkCounter;
    double mAbsoluteCurrentTime;
    float mRate;
    float mRateBeforeScrubbing;
    unsigned int mScrubbingCount;
    double mStartTime;
    double mEndTime;
    float mVolume;
    int mRepeatMode;
    CADisplayLink * mDisplayLink;
    char fastReversing;
    char fastForwarding;
}

@property (readonly, nonatomic) struct CGImage * imageForCurrentTime;
@property (nonatomic) double lastDisplayUpdateTime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) <TSKMediaPlayerControllerDelegate> * delegate;
@property (readonly, nonatomic) char canPlay;
@property (nonatomic) char playing;
@property (nonatomic) float rate;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) int repeatMode;
@property (nonatomic) float volume;
@property (readonly, nonatomic) char scrubbing;
@property (readonly, nonatomic) char canFastReverse;
@property (nonatomic) char fastReversing;
@property (readonly, nonatomic) char canFastForward;
@property (nonatomic) char fastForwarding;
@property (readonly, nonatomic) double absoluteCurrentTime;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double remainingTime;
@property (readonly, nonatomic) double absoluteDuration;
@property (readonly, nonatomic) double duration;

- (void)p_prepareFrameTimes;
- (TSKAnimatedGIFController *)initWithImageSource:(struct CGImageSource *)arg0 delegate:(<TSKMediaPlayerControllerDelegate> *)arg1;
- (void)p_updateDisplayLink;
- (double)absoluteCurrentTime;
- (void)p_setAbsoluteCurrentTime:(double)arg0;
- (void)setLastDisplayUpdateTime:(double)arg0;
- (double)absoluteDuration;
- (void)scrubToTime:(double)arg0 withTolerance:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)p_updateLayers;
- (struct CGImage *)imageForTime:(double)arg0;
- (void)p_enableDisplayLink;
- (void)p_disableDisplayLink;
- (double)lastDisplayUpdateTime;
- (void)p_displayLinkDidTrigger:(id)arg0;
- (void)p_getAbsoluteMovieTime:(double *)arg0 shouldStopPlayback:(char *)arg1 shouldReversePlayback:(char *)arg2;
- (CALayer *)newLayer;
- (void)scrubToTime:(double)arg0 withTolerance:(double)arg1;
- (void)seekForwardByOneFrame;
- (void)seekBackwardByOneFrame;
- (void)seekToBeginning;
- (void)seekToEnd;
- (id)addPeriodicTimeObserverForInterval:(double)arg0 block:(id /* block */)arg1;
- (void)removePeriodicTimeObserver:(NSObject *)arg0;
- (char)canFastReverse;
- (char)isFastReversing;
- (void)setFastReversing:(char)arg0;
- (char)canFastForward;
- (char)isFastForwarding;
- (void)setFastForwarding:(char)arg0;
- (TSKAnimatedGIFController *)initWithData:(NSData *)arg0 delegate:(<TSKMediaPlayerControllerDelegate> *)arg1;
- (void)removeLayer:(CALayer *)arg0;
- (struct CGImage *)imageForCurrentTime;
- (void)cancelPendingSeeks;
- (void)beginScrubbing;
- (void)endScrubbing;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (char)isScrubbing;
- (void)setEndTime:(double)arg0;
- (void)dealloc;
- (<TSKMediaPlayerControllerDelegate> *)delegate;
- (double)duration;
- (void)setStartTime:(double)arg0;
- (double)startTime;
- (double)remainingTime;
- (void)teardown;
- (float)rate;
- (void)setRate:(float)arg0;
- (void)addLayer:(CALayer *)arg0;
- (double)endTime;
- (float)volume;
- (void)setVolume:(float)arg0;
- (double)currentTime;
- (char)canPlay;
- (char)isPlaying;
- (void)setPlaying:(char)arg0;

@end
