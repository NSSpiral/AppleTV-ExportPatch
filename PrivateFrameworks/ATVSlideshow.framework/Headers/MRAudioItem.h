/* Runtime dump - MRAudioItem
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRAudioItem : NSObject
{
    AVPlayerItem * _avPlayerItem;
    float _volume;
    float _duckLevel;
    double _startTime;
    double _duration;
    double _localTimeOffset;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _duckInDuration;
    double _duckOutDuration;
}

@property (readonly) AVPlayerItem * avPlayerItem;
@property (readonly) double startTime;
@property (readonly) double duration;
@property double localTimeOffset;
@property float volume;
@property double fadeInDuration;
@property double fadeOutDuration;
@property float duckLevel;
@property double duckInDuration;
@property double duckOutDuration;

- (void)dealloc;
- (double)duration;
- (double)startTime;
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
- (MRAudioItem *)initWithURL:(NSURL *)arg0 startTime:(double)arg1 andDuration:(double)arg2;
- (void)setLocalTimeOffset:(double)arg0;
- (double)localTimeOffset;
- (void)syncVolumeToSong:(id)arg0;
- (AVPlayerItem *)avPlayerItem;
- (void)gotoTime:(double)arg0;
- (float)volumeAtTime:(double)arg0;
- (float)volume;
- (void)setVolume:(float)arg0;

@end
