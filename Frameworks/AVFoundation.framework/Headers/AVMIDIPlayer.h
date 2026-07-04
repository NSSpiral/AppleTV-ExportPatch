/* Runtime dump - AVMIDIPlayer
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVMIDIPlayer : NSObject
{
    void * _impl;
}

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) char playing;
@property (nonatomic) float rate;
@property (nonatomic) double currentPosition;

- (struct MIDIPlayerImpl *)impl;
- (AVMIDIPlayer *)initBase;
- (void)destroyBase;
- (AVMIDIPlayer *)initWithContentsOfURL:(NSURL *)arg0 soundBankURL:(NSURL *)arg1 error:(id *)arg2;
- (AVMIDIPlayer *)initWithData:(NSData *)arg0 soundBankURL:(NSURL *)arg1 error:(id *)arg2;
- (unsigned long long)hostTimeForBeats:(double)arg0;
- (double)beatsForHostTime:(unsigned long long)arg0;
- (void)setCurrentPosition:(double)arg0;
- (void)prepareToPlay;
- (void)dealloc;
- (double)duration;
- (void)stop;
- (double)currentPosition;
- (float)rate;
- (void)setRate:(float)arg0;
- (void)finalize;
- (void)play:(NSData *)arg0;
- (char)isPlaying;

@end
