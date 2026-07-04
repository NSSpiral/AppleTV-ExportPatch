/* Runtime dump - TSKAVPlayerController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAVPlayerController : NSObject <TSKMediaPlayerController>
{
    AVPlayer * mPlayer;
    <TSKMediaPlayerControllerDelegate> * mDelegate;
    char mStreaming;
    int mRepeatMode;
    float mVolume;
    float mRateBeforeScrubbing;
    unsigned int mScrubbingCount;
    char mCanPlay;
    char mPlaying;
    char mFastReversing;
    char mFastForwarding;
    char mIsObservingStatus;
}

@property (readonly, nonatomic) AVPlayer * player;
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

+ (NSNumber *)keyPathsForValuesAffectingDuration;
+ (NSNumber *)keyPathsForValuesAffectingAbsoluteDuration;
+ (char)automaticallyNotifiesObserversOfStartTime;
+ (TSKAVPlayerController *)keyPathsForValuesAffectingStartTime;
+ (char)automaticallyNotifiesObserversOfEndTime;
+ (TSKAVPlayerController *)keyPathsForValuesAffectingEndTime;
+ (TSKAVPlayerController *)keyPathsForValuesAffectingCanFastReverse;
+ (TSKAVPlayerController *)keyPathsForValuesAffectingCanFastForward;
+ (char)automaticallyNotifiesObserversOfRate;
+ (TSKAVPlayerController *)keyPathsForValuesAffectingRate;

- (double)absoluteCurrentTime;
- (double)absoluteDuration;
- (void)scrubToTime:(double)arg0 withTolerance:(double)arg1 completionHandler:(id /* block */)arg2;
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
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_applyVolumeToPlayerItem;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg0;
- (char)p_canFastReverseAtCurrentTime;
- (char)p_canFastForwardAtCurrentTime;
- (void)p_closedCaptioningStatusDidChange:(NSDictionary *)arg0;
- (void)p_updateClosedCaptionDisplayEnabled;
- (void)p_playerItemDidPlayToEndTime:(id)arg0;
- (void)p_playerItemDidJumpTime:(id)arg0;
- (void)p_playbackDidFailWithError:(NSError *)arg0;
- (TSKAVPlayerController *)initWithPlayer:(AVPlayer *)arg0 delegate:(<TSKMediaPlayerControllerDelegate> *)arg1 streaming:(char)arg2;
- (void)cancelPendingSeeks;
- (void)beginScrubbing;
- (void)endScrubbing;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg0;
- (char)isScrubbing;
- (void)setEndTime:(double)arg0;
- (void)dealloc;
- (TSKAVPlayerController *)init;
- (<TSKMediaPlayerControllerDelegate> *)delegate;
- (double)duration;
- (void)setStartTime:(double)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (double)startTime;
- (double)remainingTime;
- (void)teardown;
- (float)rate;
- (void)setRate:(float)arg0;
- (double)endTime;
- (float)volume;
- (void)setVolume:(float)arg0;
- (double)currentTime;
- (AVPlayer *)player;
- (char)canPlay;
- (char)isPlaying;
- (void)setPlaying:(char)arg0;

@end
