/* Runtime dump - AVRemoteCommandController
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVRemoteCommandController : NSObject
{
    AVPlayerController * _playerController;
}

@property (retain, nonatomic) AVPlayerController * playerController;

- (int)_handleRemoteCommandEvent:(NSObject *)arg0;
- (void)_updateRegisteredRemoteCommandEnabledStates;
- (void)dealloc;
- (AVRemoteCommandController *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_destruct;
- (AVPlayerController *)playerController;
- (void)setPlayerController:(AVPlayerController *)arg0;

@end
