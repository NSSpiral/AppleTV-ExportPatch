/* Runtime dump - AVAudioFormat
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioFormat : NSObject
{
    struct AudioStreamBasicDescription _asbd;
    AVAudioChannelLayout * _layout;
    unsigned int _commonFormat;
    void * _reserved;
}

@property (readonly, nonatomic) char standard;
@property (readonly, nonatomic) unsigned int commonFormat;
@property (readonly, nonatomic) unsigned int channelCount;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) char interleaved;
@property (readonly, nonatomic) struct AudioStreamBasicDescription * streamDescription;
@property (readonly, nonatomic) AVAudioChannelLayout * channelLayout;
@property (readonly, nonatomic) NSDictionary * settings;

+ (id)settingsFromASBD:(struct AudioStreamBasicDescription *)arg0 channelLayout:(struct AudioStreamBasicDescription)arg1;

- (AVAudioFormat *)initWithStreamDescription:(struct AudioStreamBasicDescription *)arg0 channelLayout:(struct AudioStreamBasicDescription)arg1;
- (unsigned int)channelCount;
- (AVAudioChannelLayout *)channelLayout;
- (AVAudioFormat *)initWithStreamDescription:(struct AudioStreamBasicDescription *)arg0;
- (AVAudioFormat *)initStandardFormatWithSampleRate:(double)arg0 channels:(unsigned int)arg1;
- (AVAudioFormat *)initStandardFormatWithSampleRate:(double)arg0 channelLayout:(AVAudioChannelLayout *)arg1;
- (AVAudioFormat *)initWithCommonFormat:(unsigned int)arg0 sampleRate:(double)arg1 channels:(unsigned int)arg2 interleaved:(char)arg3;
- (AVAudioFormat *)initWithCommonFormat:(unsigned int)arg0 sampleRate:(double)arg1 interleaved:(char)arg2 channelLayout:(AVAudioChannelLayout *)arg3;
- (struct AudioStreamBasicDescription *)streamDescription;
- (char)isStandard;
- (unsigned int)commonFormat;
- (char)isInterleaved;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDictionary *)settings;
- (void).cxx_construct;
- (AVAudioFormat *)initWithSettings:(NSDictionary *)arg0;
- (double)sampleRate;

@end
