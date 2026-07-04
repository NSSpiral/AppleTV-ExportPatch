/* Runtime dump - AVAudioPCMBuffer
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (readonly, nonatomic) unsigned int frameCapacity;
@property (nonatomic) unsigned int frameLength;
@property (readonly, nonatomic) unsigned int stride;
@property (readonly, nonatomic) float * * floatChannelData;
@property (readonly, nonatomic) short * * int16ChannelData;
@property (readonly, nonatomic) int * * int32ChannelData;

- (unsigned int)frameCapacity;
- (AVAudioPCMBuffer *)initWithPCMFormat:(NSString *)arg0 frameCapacity:(unsigned int)arg1;
- (void)_initChannelPtrs;
- (void)setFrameLength:(unsigned int)arg0;
- (float * *)floatChannelData;
- (int * *)int32ChannelData;
- (short * *)int16ChannelData;
- (unsigned int)stride;
- (AVAudioPCMBuffer *)copyWithZone:(struct _NSZone *)arg0;
- (AVAudioPCMBuffer *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned int)frameLength;

@end
