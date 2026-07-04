/* Runtime dump - AVAudioSessionMediaPlayerOnly
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioSessionMediaPlayerOnly : NSObject
{
    AVAudioSessionMediaPlayerOnlyInternal * _audioSession;
}

@property <AVAudioSessionDelegateMediaPlayerOnly> * delegate;
@property (readonly) NSString * category;
@property (readonly) NSString * mode;
@property (readonly) double preferredHardwareSampleRate;
@property (readonly) double preferredIOBufferDuration;
@property (readonly) char inputIsAvailable;
@property (readonly) double currentHardwareSampleRate;
@property (readonly) int currentHardwareInputNumberOfChannels;
@property (readonly) int currentHardwareOutputNumberOfChannels;

+ (void)initialize;

- (AVWeakReference *)_weakReference;
- (void)_removeFPListeners;
- (void)_addFPListeners;
- (void)_setFigPlayer:(struct OpaqueFigPlayer *)arg0;
- (char)setActive:(char)arg0 withFlags:(int)arg1 error:(id *)arg2;
- (char)setPreferredHardwareSampleRate:(double)arg0 error:(id *)arg1;
- (double)preferredHardwareSampleRate;
- (char)inputIsAvailable;
- (double)currentHardwareSampleRate;
- (int)currentHardwareInputNumberOfChannels;
- (int)currentHardwareOutputNumberOfChannels;
- (void)setApplicationAudioSession:(char)arg0;
- (char)isApplicationAudioSession;
- (char)setMode:(NSString *)arg0 error:(id *)arg1;
- (void)dealloc;
- (void)setDelegate:(<AVAudioSessionDelegateMediaPlayerOnly> *)arg0;
- (AVAudioSessionMediaPlayerOnly *)init;
- (<AVAudioSessionDelegateMediaPlayerOnly> *)delegate;
- (NSString *)category;
- (NSString *)mode;
- (char)setCategory:(NSString *)arg0 error:(id *)arg1;
- (char)setActive:(char)arg0 error:(id *)arg1;
- (double)preferredIOBufferDuration;
- (char)setPreferredIOBufferDuration:(double)arg0 error:(id *)arg1;

@end
