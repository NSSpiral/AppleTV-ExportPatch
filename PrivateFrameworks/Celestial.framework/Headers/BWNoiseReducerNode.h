/* Runtime dump - BWNoiseReducerNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNoiseReducerNode : BWNode
{
    NSDictionary * _cameraTuningOptions;
    NSDictionary * _noiseReductionOptions;
    struct opaqueCMFormatDescription * _outputFormatDescription;
    struct NoiseReductionCtx_s * _context;
    int _contextSynchronization;
    int _gpuPriority;
    char _threaded;
    char _processLuma;
    char _useInPlaceAlgorithm;
}

+ (void)initialize;

- (void)dealloc;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BWNoiseReducerNode *)initWithCameraTuningDictionary:(NSDictionary *)arg0 sensorIDDictionary:(NSDictionary *)arg1;

@end
