/* Runtime dump - MPMovieThumbnailRequest
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieThumbnailRequest : NSObject
{
    NSArray * _times;
    int _timeOption;
}

@property (retain, nonatomic) NSArray * times;
@property (nonatomic) int timeOption;

- (NSArray *)times;
- (void)setTimes:(NSArray *)arg0;
- (int)timeOption;
- (void)setTimeOption:(int)arg0;
- (void).cxx_destruct;

@end
