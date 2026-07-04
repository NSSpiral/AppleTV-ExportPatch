/* Runtime dump - AVNowPlayingInfoController
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVNowPlayingInfoController : NSObject
{
    AVPlayerController * _playerController;
    id _playerControllerCurrentTimeJumpedObserver;
    id _nowPlayingInfoNeedsUpdate;
}

@property (retain, nonatomic) AVPlayerController * playerController;

- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateNowPlayingInfo;
- (void)dealloc;
- (AVNowPlayingInfoController *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (AVPlayerController *)playerController;
- (void)setPlayerController:(AVPlayerController *)arg0;

@end
