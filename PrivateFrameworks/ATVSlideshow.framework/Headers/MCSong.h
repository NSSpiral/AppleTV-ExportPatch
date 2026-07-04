/* Runtime dump - MCSong
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCSong : MCObject
{
    char mStartTimeIsDefined;
    char mDurationIsDefined;
    MCAssetAudio * mAsset;
    float mVolume;
    unsigned int mIndex;
    MCAudioPlaylist * mAudioPlaylistIfAudioPlaylistSong;
    MCSlide * mSlideIfSlideSong;
    double mFadeInDuration;
    double mFadeOutDuration;
    double mStartTime;
    double mDuration;
}

@property (retain) MCAssetAudio * asset;
@property (nonatomic) float volume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) unsigned int index;
@property (readonly, nonatomic) char startTimeIsDefined;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) char durationIsDefined;
@property (nonatomic) double duration;
@property MCAudioPlaylist * audioPlaylistIfAudioPlaylistSong;
@property MCSlide * slideIfSlideSong;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (MCSong *)init;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setStartTime:(double)arg0;
- (unsigned int)index;
- (MCAssetAudio *)asset;
- (double)startTime;
- (void)setAsset:(MCAssetAudio *)arg0;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)arg0;
- (void)setFadeOutDuration:(double)arg0;
- (double)fadeInDuration;
- (void)setIndex:(unsigned int)arg0;
- (void)demolish;
- (void)undefineStartTime;
- (void)undefineDuration;
- (char)startTimeIsDefined;
- (char)durationIsDefined;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCSong *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)setAudioPlaylistIfAudioPlaylistSong:(MCAudioPlaylist *)arg0;
- (void)setSlideIfSlideSong:(MCSlide *)arg0;
- (MCAudioPlaylist *)audioPlaylistIfAudioPlaylistSong;
- (MCSlide *)slideIfSlideSong;
- (NSDictionary *)imprint;
- (float)volume;
- (void)setVolume:(float)arg0;

@end
