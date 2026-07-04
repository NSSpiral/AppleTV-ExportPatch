/* Runtime dump - MPNowPlayingInfoCenter
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingInfoCenter : NSObject
{
    NSDictionary * _nowPlayingInfo;
    NSDictionary * _queuedNowPlayingInfo;
    NSDate * _pushDate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (copy) NSDictionary * nowPlayingInfo;

+ (MPNowPlayingInfoCenter *)defaultCenter;

- (void)_pushNowPlayingInfoAndRetry:(char)arg0;
- (NSDictionary *)nowPlayingInfo;
- (MPNowPlayingInfoCenter *)init;
- (MPNowPlayingInfoCenter *)_init;
- (void).cxx_destruct;
- (void)setNowPlayingInfo:(NSDictionary *)arg0;

@end
