/* Runtime dump - TUAudioPlayer
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioPlayer : NSObject
{
    <TUAudioPlayerDelegateProtocol> * _delegate;
}

@property (nonatomic) <TUAudioPlayerDelegateProtocol> * delegate;
@property (readonly, nonatomic) char playingSound;

- (void)dealloc;
- (void)setDelegate:(<TUAudioPlayerDelegateProtocol> *)arg0;
- (<TUAudioPlayerDelegateProtocol> *)delegate;
- (void)stop;
- (void)playSelectedSound;
- (void)playSound:(int)arg0 numOfLoops:(int)arg1 pauseDuration:(float)arg2;
- (char)playingSound;

@end
