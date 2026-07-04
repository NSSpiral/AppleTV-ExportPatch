/* Runtime dump - KNMovieRenderer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMovieRenderer : KNBuildRenderer <TSKMediaPlayerControllerDelegate>
{
    NSObject<TSKMediaPlayerController> * mPlayerController;
    CALayer * mVideoLayer;
    double mStartTime;
    double mPlaybackAtStartTimePauseTime;
    double mPlaybackAtStartTimePauseOffset;
    KNBuildRenderer * mBuildInRenderer;
    struct CGRect mFrameInContainerView;
    id mMovieStartCallbackTarget;
    SEL mMovieStartCallbackSelector;
    id mHasMoviePlaybackStarted;
    id mNeedsToSendMovieStartCallback;
    id mNeedsToSendBuildEndCallback;
    id mIsObservingVideoLayerReadyForDisplay;
    id mNeedsPlaybackAtStartTime;
    id mHasPendingTogglePlayingControl;
    id mPendingTogglePlayingControlStartsPlaying;
    id mShouldMoviePlaybackEndOnCompletion;
    id mWasMoviePlayingBeforeAnimationPause;
    id mIsTeardownCompletionBlockPending;
}

@property (nonatomic) KNBuildRenderer * buildInRenderer;
@property (readonly, nonatomic) char hasMoviePlaybackStarted;
@property (readonly, nonatomic) NSObject<TSKMediaPlayerController> * playerController;
@property (readonly, nonatomic) CALayer * offscreenVideoLayer;
@property (readonly, nonatomic) NSObject<NSCopying> * movieTimelineMovieIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)movieTimelineMovieIdentifierForMovieInfo:(NSDictionary *)arg0;
+ (NSString *)movieInfoForMovieTimelineMovieIdentifier:(NSString *)arg0;

- (void)playbackDidStopForPlayerController:(BRController *)arg0;
- (void)playerController:(NSObject<TSKMediaPlayerController> *)arg0 playbackDidFailWithError:(NSError *)arg1;
- (void)p_playbackDidFailWithError:(NSError *)arg0;
- (char)addAnimationsAtLayerTime:(double)arg0;
- (void)removeAnimationsAndFinish:(char)arg0;
- (KNMovieRenderer *)initWithAnimatedBuild:(KNAnimatedBuild *)arg0 info:(NSDictionary *)arg1 buildStage:(KNBuildChunk *)arg2 session:(NSObject *)arg3 animatedSlideView:(KNAnimatedSlideView *)arg4;
- (void)animateAfterDelay:(double)arg0;
- (void)updateAnimationsForLayerTime:(double)arg0;
- (void)forceRemoveAnimations;
- (void)pauseAnimationsAtTime:(double)arg0;
- (void)resumeAnimationsIfPausedAtTime:(double)arg0;
- (void)resumeAnimationsIfPaused;
- (void)p_setupPlayerController;
- (void)p_schedulePlaybackAtStartTime;
- (void)p_setupVideoLayer;
- (void)p_startMoviePlaybackIfNeeded;
- (void)p_teardownUpdatingTexture:(char)arg0;
- (void)p_unschedulePlaybackAtStartTime;
- (void)p_showVideoLayer;
- (void)p_didStartMoviePlayback;
- (void)p_startPlaybackAtStartTime;
- (void)p_setupReflectionAndMaskingOnMovieTexture:(NSObject *)arg0 strokeTexture:(SKTexture *)arg1 reflectionMaskTexture:(NSObject *)arg2 frameMaskTexture:(NSObject *)arg3;
- (void)p_cancelPlaybackAtStartTime;
- (void)p_didEndMoviePlayback;
- (struct CGImage *)p_copyCurrentVideoFrameImage;
- (struct CGImage *)p_copyCurrentVideoFrameImageUsingAVAssetImageGenerator;
- (void)interruptAndReset;
- (char)hasMoviePlaybackStarted;
- (void)registerForMovieStartCallback:(SEL)arg0 target:(NSObject *)arg1;
- (void)applyMovieControl:(int)arg0;
- (void)p_applyActionEffect:(NSObject *)arg0;
- (CALayer *)offscreenVideoLayer;
- (NSObject<NSCopying> *)movieTimelineMovieIdentifier;
- (KNBuildRenderer *)buildInRenderer;
- (void)setBuildInRenderer:(KNBuildRenderer *)arg0;
- (void)pauseAnimations;
- (void)dealloc;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSObject<TSKMediaPlayerController> *)playerController;
- (void)stopAnimations;

@end
