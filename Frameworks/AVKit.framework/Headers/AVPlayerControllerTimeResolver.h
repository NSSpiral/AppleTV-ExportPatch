/* Runtime dump - AVPlayerControllerTimeResolver
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding>
{
    AVPlayerController * _playerController;
    double _interval;
    double _resolution;
    double _currentTime;
    NSTimer * _timer;
}

@property double currentTimeWithinEndTimes;
@property (readonly) double remainingTime;
@property (readonly) double remainingTimeWithinEndTimes;
@property (readonly) char thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
@property (readonly) char currentTimeAtEndOfSeekableTimeRanges;
@property (retain) AVPlayerController * playerController;
@property double interval;
@property double resolution;
@property double currentTime;

+ (char)automaticallyNotifiesObserversOfCurrentTime;
+ (AVPlayerControllerTimeResolver *)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (AVPlayerControllerTimeResolver *)keyPathsForValuesAffectingRemainingTime;
+ (AVPlayerControllerTimeResolver *)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (NSArray *)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+ (NSArray *)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;

- (double)currentTimeWithinEndTimes;
- (double)remainingTimeWithinEndTimes;
- (char)isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
- (char)isCurrentTimeAtEndOfSeekableTimeRanges;
- (void)setCurrentTimeWithinEndTimes:(double)arg0;
- (void)setCurrentTime:(double)arg0;
- (void)dealloc;
- (AVPlayerControllerTimeResolver *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AVPlayerControllerTimeResolver *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (void)setInterval:(double)arg0;
- (double)interval;
- (AVPlayerController *)playerController;
- (void)setResolution:(double)arg0;
- (double)resolution;
- (double)remainingTime;
- (double)currentTime;
- (void)setPlayerController:(AVPlayerController *)arg0;

@end
