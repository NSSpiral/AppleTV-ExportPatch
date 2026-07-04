/* Runtime dump - BWAudioConverterNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioConverterNode : BWNode
{
    NSDictionary * _settings;
    struct OpaqueFigSampleBufferProcessor * _audioCompressionSBP;
}

@property (readonly, nonatomic) NSDictionary * gaplessPlaybackInfo;

+ (void)initialize;

- (void)dealloc;
- (BWAudioConverterNode *)init;
- (NSDictionary *)settings;
- (void)setSettings:(NSDictionary *)arg0;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)_teardownAudioCompressionSBP;
- (long)_setupAudioCompressionSBPForInputFormat:(NSString *)arg0;
- (void)_handleUpdatedRecordingSettings:(NSDictionary *)arg0;
- (void)acquireHardware;
- (void)relinquishHardware;
- (NSDictionary *)gaplessPlaybackInfo;

@end
