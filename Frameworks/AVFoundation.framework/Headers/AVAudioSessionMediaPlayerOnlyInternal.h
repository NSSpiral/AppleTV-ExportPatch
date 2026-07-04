/* Runtime dump - AVAudioSessionMediaPlayerOnlyInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject
{
    AVWeakReference * weakReference;
    struct OpaqueFigPlayer * figPlayer;
    char isAppAudioSession;
    char isActive;
    NSString * category;
    NSString * mode;
    <AVAudioSessionDelegateMediaPlayerOnly> * delegate;
}

@end
