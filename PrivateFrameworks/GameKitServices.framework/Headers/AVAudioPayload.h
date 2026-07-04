/* Runtime dump - AVAudioPayload
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVAudioPayload : NSObject
{
    struct SoundDec_t * encoder;
    int payload;
    unsigned long samplesPerFrame;
    unsigned long blockSize;
    unsigned long sampleRate;
    unsigned long encodedBytesPerFrame;
    unsigned long bundleHeaderBytes;
    unsigned long bitrate;
    NSArray * supportedBitrates;
    char canBundle;
    char canSetBitrate;
    char forcingBitrate;
    char useSBR;
    char shouldReset;
    char shouldLimitMaxPacketSize;
    int format;
}

@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) unsigned long samplesPerFrame;
@property (readonly, nonatomic) unsigned long blockSize;
@property (readonly, nonatomic) unsigned long sampleRate;
@property (readonly, nonatomic) unsigned long encodedBytesPerFrame;
@property (readonly, nonatomic) unsigned long bundleHeaderBytes;
@property (readonly, nonatomic) unsigned long bitrate;
@property (readonly, nonatomic) NSArray * supportedBitrates;
@property (readonly, nonatomic) char canBundle;
@property (nonatomic) char useSBR;
@property (readonly, nonatomic) char useCookie;

+ (char)isPayloadSupported:(int)arg0;

- (void)dealloc;
- (int)payload;
- (unsigned long)samplesPerFrame;
- (int)encodeAudio:(void *)arg0 numInputBytes:(int)arg1 outputBytes:(void *)arg2 numOutputBytes:(int)arg3;
- (char)canBundle;
- (unsigned long)blockSize;
- (char)useSBR;
- (unsigned long)bitrate;
- (AVAudioPayload *)initWithPayload:(int)arg0 blockSize:(unsigned long)arg1;
- (void)setUseSBR:(char)arg0;
- (unsigned int)flags;
- (char)useCookie;
- (char)getMagicCookie:(char *)arg0 withLength:(unsigned int *)arg1;
- (char)createEncoderWithInternalFormat:(struct AudioStreamBasicDescription *)arg0;
- (unsigned long)bundleHeaderBytes;
- (void)resetEncoder;
- (char)setBitrate:(unsigned long)arg0;
- (float)qualityForBitRate:(unsigned long)arg0;
- (unsigned long)encodedBytesPerFrame;
- (char)setupInputProperties;
- (char)setupEncodeProperties;
- (void)setInternalSampleRate:(unsigned long)arg0;
- (NSArray *)supportedBitrates;
- (void)createSupportedBitrates;
- (unsigned long)aacBitrate;
- (void)createSupportedBitratesForAACELD;
- (void)createSupportedBitratesForOpus;
- (void)createSupportedBitratesForAMR8k;
- (void)createSupportedBitratesForAMR16k;
- (unsigned long)sampleRate;

@end
