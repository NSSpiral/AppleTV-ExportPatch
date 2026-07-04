/* Runtime dump - BWSISNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSISNode : BWNode <BWBracketSettingsProvider>
{
    /* block */ id * _createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor * _sampleBufferProcessor;
    NSDictionary * _sensorIDDictionary;
    NSDictionary * _noiseModelParamsDictionary;
    NSDictionary * _fusionParamsDictionary;
    char _allowExperimentalOverrides;
    int _outputMode;
    int _lensShadingCorrectionMode;
    double _integrationTimeThreshold;
    int _maxIntegrationTimeLimitMsec;
    float _bracketGainCap;
    NSArray * _exposureValues;
    NSArray * _afWindowParamsArray;
    int _sisBracketCount;
    NSArray * _oisExposureDurationTypes;
    int _oisBracketCount;
    FigCaptureStillImageSettings * _currentCaptureSettings;
    char _preBracketedFrameReceived;
    int _numberFramesReceived;
    int _lastFusionTypeUsed;
}

@property (readonly, nonatomic) double integrationTimeThreshold;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (void)dealloc;
- (NSString *)nodeType;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)_clearCaptureRequestState;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (long)_setupSampleBufferProcessor;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg0;
- (int)bracketCountForBracketingMode:(int)arg0 withCurrentFrameStats:(struct ? *)arg1 stillImageSettings:(FigCaptureStillImageSettings *)arg2;
- (id)bracketSettingsForBracketingMode:(int)arg0 withCurrentFrameStats:(struct ? *)arg1 stillImageSettings:(FigCaptureStillImageSettings *)arg2;
- (void)handleNodeError:(NSError *)arg0 forInput:(NSObject *)arg1;
- (BWSISNode *)initWithSensorIDDictionary:(NSDictionary *)arg0;
- (double)integrationTimeThreshold;
- (NSDictionary *)_initWithSensorIDDictionary:(NSDictionary *)arg0 allowExperimentalOverrides:(char)arg1;
- (long)_unpackSISOptions;
- (id)_sisBracketSettingsWithCurrentFrameStats:(struct ? *)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1;
- (id)_oisBracketSettingsWithCurrentFrameStats:(struct ? *)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1;
- (void)_sisProcessorOutputReady:(long)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
