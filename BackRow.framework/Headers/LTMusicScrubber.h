/* Runtime dump - LTMusicScrubber
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMediaPlayer, LTAVPlayer;
@interface LTMusicScrubber : NSObject
{
    unsigned int _skipCount;
    long _skipAdjustTimeInMS;
    double _nextSkipAdjustTime;
    double _skipAdjustTimeInterval;
    NSTimer * _musicSkipTimer;
    LTAVPlayer * _player;
}

- (LTMusicScrubber *)initWithMediaPlayer:(BRMediaPlayer *)arg0;
- (void)startScrub:(int)arg0;
- (void)_performMusicSkipToTime:(id)arg0;
- (double)_nextTimeToAdvanceToFromTime:(double)arg0;
- (void)cancel;
- (void).cxx_destruct;

@end
