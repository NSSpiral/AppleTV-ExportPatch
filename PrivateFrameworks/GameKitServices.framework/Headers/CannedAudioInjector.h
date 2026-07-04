/* Runtime dump - CannedAudioInjector
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CannedAudioInjector : NSObject
{
    NSString * _cannedMoviePath;
    NSMutableData * _samples;
    int _position;
    char _fromBeginning;
    struct _opaque_pthread_mutex_t _samplesMutex;
    struct _opaque_pthread_cond_t _samplesConditional;
    struct AudioStreamBasicDescription _internalFormat;
}

@property (retain, nonatomic) NSString * cannedMoviePath;
@property (retain, nonatomic) NSMutableData * samples;
@property (nonatomic) int position;
@property (nonatomic) char fromBeginning;

+ (char)isAudioAvailable:(id)arg0;

- (void)dealloc;
- (void)setPosition:(int)arg0;
- (int)position;
- (long)readRawAudioSamples;
- (long)decodeAudio;
- (NSMutableData *)samples;
- (NSString *)cannedMoviePath;
- (void)setSamples:(NSMutableData *)arg0;
- (CannedAudioInjector *)initWithPath:(NSString *)arg0 withDescription:(struct AudioStreamBasicDescription)arg1 fromBeginning:(char)arg2;
- (void)injectToBuffer:(char *)arg0 size:(int)arg1 time:(double)arg2 muted:(char)arg3;
- (void)setCannedMoviePath:(NSString *)arg0;
- (char)fromBeginning;
- (void)setFromBeginning:(char)arg0;

@end
