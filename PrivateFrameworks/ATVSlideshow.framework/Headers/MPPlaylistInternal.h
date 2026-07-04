/* Runtime dump - MPPlaylistInternal
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPPlaylistInternal : NSObject
{
    double duration;
    double fadeInDuration;
    double fadeOutDuration;
    double duckInDuration;
    double duckOutDuration;
    float duckLevel;
}

@property (nonatomic) double duration;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double duckInDuration;
@property (nonatomic) double duckOutDuration;
@property (nonatomic) float duckLevel;

- (double)duration;
- (void)setDuration:(double)arg0;
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

@end
