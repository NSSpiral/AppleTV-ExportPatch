/* Runtime dump - AudioPlayerImpl
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AudioPlayerImpl : NSObject
{
    <AVAudioPlayerDelegate> * _delegate;
    NSData * _data;
    NSURL * _url;
    NSDictionary * _actualSettings;
    BOOL _playRetain;
    NSArray * _channelAssignments;
    struct AVAudioPlayerCpp * _localPlayer;
    NSObject<OS_dispatch_queue> * _gcd;
}

- (void)dealloc;
- (AudioPlayerImpl *)init;

@end
