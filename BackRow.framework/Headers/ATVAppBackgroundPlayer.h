/* Runtime dump - ATVAppBackgroundPlayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMediaPlayer;
@interface ATVAppBackgroundPlayer : NSObject
{
    BRMediaPlayer * _player;
    IKAudioElement * _currentPlayingItem;
}

@property (weak, nonatomic) BRMediaPlayer * player;
@property (weak, nonatomic) IKAudioElement * currentPlayingItem;

- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_playerMediaCued:(id)arg0;
- (IKAudioElement *)currentPlayingItem;
- (void)setCurrentPlayingItem:(IKAudioElement *)arg0;
- (void)_clear;
- (void)playItem:(NSObject *)arg0;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)_doStop;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
