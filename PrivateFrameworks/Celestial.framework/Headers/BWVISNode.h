/* Runtime dump - BWVISNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVISNode : BWNode
{
    struct OpaqueFigSampleBufferProcessor * _sampleBufferProcessor;
    unsigned long _outputWidth;
    unsigned long _outputHeight;
    NSDictionary * _optionsDict;
    char _offline;
    struct ? _offlineOutputDimensions;
}

+ (void)initialize;

- (void)setOutputWidth:(unsigned long)arg0;
- (void)setOutputHeight:(unsigned long)arg0;
- (unsigned long)outputWidth;
- (unsigned long)outputHeight;
- (void)dealloc;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (long)_setupSampleBufferProcessor;
- (BWVISNode *)initWithSensorIDDict:(id)arg0 moduleInfo:(NSDictionary *)arg1 stabilizationMethod:(int)arg2 requiredFormat:(FigCaptureSourceFormat *)arg3 activeMaxFrameRate:(float)arg4 motionAttachmentsSource:(int)arg5 offline:(char)arg6;
- (void)_updateOutputRequirements;

@end
