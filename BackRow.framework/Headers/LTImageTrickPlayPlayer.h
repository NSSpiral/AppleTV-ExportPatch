/* Runtime dump - LTImageTrickPlayPlayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/LTTrickPlayPlayer.h>
@interface LTImageTrickPlayPlayer : LTTrickPlayPlayer

- (void)bufferAheadFromTime:(struct ?)arg0;
- (LTImageTrickPlayPlayer *)initWithTrickPlayAsset:(NSSet *)arg0;
- (void)_updatePlayer:(id)arg0;
- (void)bufferAheadFromTime:(struct ?)arg0 withPreloadedImageCount:(int)arg1 atInterval:(int)arg2;
- (void)seekToTime:(struct ?)arg0 withPlaybackDate:(NSDate *)arg1;
- (void)_showImageForTime:(double)arg0;
- (void)setRate:(float)arg0;

@end
