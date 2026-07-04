/* Runtime dump - AVPlayerController
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerController : UIResponder
{
    AVPlayer * _player;
    int _status;
    NSError * _error;
}

@property (nonatomic) char playingOnSecondScreen;
@property (nonatomic) char CALayerDestinationIsTVOut;
@property (readonly, nonatomic) AVPlayer * player;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSError * error;

+ (void)initialize;

- (void)setPlayingOnSecondScreen:(char)arg0;
- (void)setRateWithThrottling:(double)arg0;
- (void)autoplay:(id)arg0;
- (void)setLooping:(char)arg0;
- (void)increaseVolume:(id)arg0;
- (void)decreaseVolume:(id)arg0;
- (void)changeVolumeToMinimum:(id)arg0;
- (void)changeVolumeToMaximum:(id)arg0;
- (void)toggleMuted:(id)arg0;
- (char)hasContentChapters;
- (char)hasTrimmableContent;
- (char)hasShareableContent;
- (char)isSeeking;
- (void)seekByTimeInterval:(double)arg0;
- (void)seekByTimeInterval:(double)arg0 toleranceBefore:(double)arg1 toleranceAfter:(double)arg2;
- (void)scanForward:(id)arg0;
- (void)scanBackward:(id)arg0;
- (char)canSeekFrameForward;
- (void)seekFrameForward:(id)arg0;
- (char)canSeekFrameBackward;
- (void)seekFrameBackward:(id)arg0;
- (NSArray *)contentChapters;
- (void)seekToChapter:(id)arg0;
- (char)canSeekChapterForward;
- (char)canSeekChapterBackward;
- (char)isPlayingOnSecondScreen;
- (void)setCALayerDestinationIsTVOut:(char)arg0;
- (char)CALayerDestinationIsTVOut;
- (AVPlayerController *)initWithPlayer:(AVPlayer *)arg0;
- (void)seekToTime:(double)arg0 toleranceBefore:(double)arg1 toleranceAfter:(double)arg2;
- (char)hasContent;
- (void).cxx_destruct;
- (int)status;
- (NSError *)error;
- (char)isLooping;
- (double)rate;
- (void)setRate:(double)arg0;
- (NSDictionary *)metadata;
- (double)volume;
- (void)setVolume:(double)arg0;
- (void)setAllowsExternalPlayback:(char)arg0;
- (NSArray *)seekableTimeRanges;
- (char)isExternalPlaybackActive;
- (char)allowsExternalPlayback;
- (AVPlayer *)player;
- (void)setContentDuration:(double)arg0;
- (void)setMaxTime:(double)arg0;
- (void)setCanPause:(char)arg0;
- (void)setMinTime:(double)arg0;
- (void)setCurrentAudioMediaSelectionOption:(WebAVMediaSelectionOption *)arg0;
- (void)setCurrentLegibleMediaSelectionOption:(WebAVMediaSelectionOption *)arg0;
- (double)contentDuration;
- (AVValueTiming *)timing;
- (void)seekToTime:(double)arg0;
- (char)canPlay;
- (void)seekToBeginning:(id)arg0;
- (void)seekToEnd:(id)arg0;
- (char)hasAudioMediaSelectionOptions;
- (char)hasLegibleMediaSelectionOptions;
- (NSArray *)audioMediaSelectionOptions;
- (NSArray *)legibleMediaSelectionOptions;
- (void)play:(NSData *)arg0;
- (void)pause:(SATimerPause *)arg0;
- (void)togglePlayback:(id)arg0;
- (char)isPlaying;
- (void)setPlaying:(char)arg0;
- (void)beginScrubbing:(id)arg0;
- (void)endScrubbing:(id)arg0;
- (char)hasLiveStreamingContent;
- (void)skipBackwardThirtySeconds:(id)arg0;
- (void)gotoEndOfSeekableRanges:(NSArray *)arg0;
- (char)canScanForward;
- (void)beginScanningForward:(id)arg0;
- (void)endScanningForward:(id)arg0;
- (void)beginScanningBackward:(id)arg0;
- (void)endScanningBackward:(id)arg0;
- (char)canSeekToBeginning;
- (void)seekChapterBackward:(id)arg0;
- (char)canSeekToEnd;
- (void)seekChapterForward:(id)arg0;
- (char)hasMediaSelectionOptions;
- (WebAVMediaSelectionOption *)currentAudioMediaSelectionOption;
- (WebAVMediaSelectionOption *)currentLegibleMediaSelectionOption;
- (char)isPlayingOnExternalScreen;
- (char)canScanBackward;
- (char)canPause;
- (char)canTogglePlayback;
- (char)canSeek;
- (struct CGSize)contentDimensions;
- (char)hasEnabledAudio;
- (char)hasEnabledVideo;
- (double)minTime;
- (double)maxTime;
- (double)contentDurationWithinEndTimes;
- (NSArray *)loadedTimeRanges;
- (int)externalPlaybackType;
- (NSString *)externalPlaybackAirPlayDeviceLocalizedName;

@end
