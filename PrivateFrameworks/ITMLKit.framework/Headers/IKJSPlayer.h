/* Runtime dump - IKJSPlayer
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer>
{
    IKJSPlaylist * _playlist;
    int _playerState;
    char _holdingSelfReference;
    NSMutableDictionary * _observedMetadataKeys;
    IKAppPlayerBridge * _bridge;
}

@property (readonly, nonatomic) IKJSMediaItem * currentMediaItem;
@property (retain, nonatomic) IKJSPlaylist * playlist;
@property (readonly, nonatomic) IKAppPlayerBridge * bridge;
@property (readonly, nonatomic) char paused;
@property (readonly, nonatomic) char ended;
@property (readonly, nonatomic) char seeking;
@property (readonly, nonatomic) char playing;

- (void)play;
- (void)setPlaybackRate:(double)arg0;
- (IKJSMediaItem *)currentMediaItem;
- (char)seeking;
- (void)setCurrentTime:(double)arg0;
- (IKJSPlayer *)init;
- (int)state;
- (void)stop;
- (void).cxx_destruct;
- (char)paused;
- (void)pause;
- (char)playing;
- (IKAppPlayerBridge *)bridge;
- (void)stateDidChange:(NSDictionary *)arg0;
- (void)timedMetadataDidChange:(NSDictionary *)arg0 value:(NSObject *)arg1;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 :(id)arg1;
- (char)ended;
- (void)setPlaylist:(IKJSPlaylist *)arg0;
- (IKJSPlaylist *)playlist;
- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 :(id)arg1 :(id)arg2;

@end
