/* Runtime dump - AVAudioClock
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioClock : NSObject
{
    void * _impl;
}

@property (readonly, nonatomic) AVAudioTime * currentTime;

- (struct AudioTimeStamp)currentAudioTimeStamp;
- (id)awaitIOCycle:(unsigned int *)arg0;
- (void)dealloc;
- (AVAudioClock *)init;
- (AVAudioClock *)initWithNode:(struct AVAudioNodeImplBase *)arg0;
- (AVAudioTime *)currentTime;

@end
