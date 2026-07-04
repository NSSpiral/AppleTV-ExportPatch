/* Runtime dump - MPSongInternal
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPSongInternal : NSObject
{
    double duration;
    double startTime;
    float audioVolume;
    double fadeInDuration;
    double fadeOutDuration;
    char assetLogging;
}

@property (nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic) float audioVolume;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) char assetLogging;

- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setStartTime:(double)arg0;
- (double)startTime;
- (double)fadeOutDuration;
- (void)setFadeInDuration:(double)arg0;
- (void)setFadeOutDuration:(double)arg0;
- (double)fadeInDuration;
- (void)setAudioVolume:(float)arg0;
- (char)assetLogging;
- (void)setAssetLogging:(char)arg0;
- (float)audioVolume;

@end
