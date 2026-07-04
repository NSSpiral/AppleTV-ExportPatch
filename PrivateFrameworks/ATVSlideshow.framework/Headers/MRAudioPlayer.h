/* Runtime dump - MRAudioPlayer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRAudioPlayer : NSObject <MRAudioPlayer>
{
    NSArray * _audioItems;
    char _shouldBePlaying;
    char _isMuted;
    AVPlayer * _avPlayer;
    float _volume;
    float _duckLevel;
    int _priority;
    float _currentVolume;
    double _duration;
    double _parentDuration;
    double _localTime;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _duckInDuration;
    double _duckOutDuration;
}

@property (readonly) AVPlayer * avPlayer;
@property (readonly) double duration;
@property (nonatomic) double localTime;
@property (readonly) float currentVolume;
@property (nonatomic) char shouldBePlaying;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) float volume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) float duckLevel;
@property (nonatomic) double duckInDuration;
@property (nonatomic) double duckOutDuration;
@property (nonatomic) double parentDuration;
@property (nonatomic) int priority;
@property (readonly) float currentDuckLevel;
@property (nonatomic) char isMuted;

- (AVPlayer *)avPlayer;
- (void)dealloc;
- (double)duration;
- (void)setPriority:(int)arg0;
- (int)priority;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)arg0;
- (void)setFadeOutDuration:(double)arg0;
- (double)fadeInDuration;
- (double)duckInDuration;
- (void)setDuckInDuration:(double)arg0;
- (double)duckOutDuration;
- (void)setDuckOutDuration:(double)arg0;
- (float)duckLevel;
- (void)setDuckLevel:(float)arg0;
- (void)resyncAudioItem;
- (void)setShouldBePlaying:(char)arg0;
- (void)syncVolumeToAudioPlaylist:(id)arg0;
- (void)setLocalTime:(double)arg0;
- (MRAudioPlayer *)initWithAudioItems:(NSArray *)arg0 andAudioPlaylist:(id)arg1;
- (void)setParentDuration:(double)arg0;
- (float)currentDuckLevel;
- (char)shouldBePlaying;
- (void)processWithDuckLevel:(float)arg0;
- (double)parentDuration;
- (double)localTime;
- (float)currentVolume;
- (char)isMuted;
- (void)setIsMuted:(char)arg0;
- (float)volume;
- (void)setVolume:(float)arg0;

@end
