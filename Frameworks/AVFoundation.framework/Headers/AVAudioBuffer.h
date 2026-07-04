/* Runtime dump - AVAudioBuffer
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying>
{
    void * _impl;
}

@property (readonly, nonatomic) AVAudioFormat * format;
@property (readonly, nonatomic) struct AudioBufferList * audioBufferList;
@property (readonly, nonatomic) struct AudioBufferList * mutableAudioBufferList;

- (struct AudioBufferList *)mutableAudioBufferList;
- (unsigned int)byteCapacity;
- (AVAudioBuffer *)initWithFormat:(AVAudioFormat *)arg0 byteCapacity:(unsigned int)arg1;
- (void)setByteLength:(unsigned int)arg0;
- (struct AudioBufferList *)audioBufferList;
- (void)dealloc;
- (NSString *)description;
- (AVAudioBuffer *)copyWithZone:(struct _NSZone *)arg0;
- (AVAudioBuffer *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned int)byteLength;
- (AVAudioFormat *)format;

@end
