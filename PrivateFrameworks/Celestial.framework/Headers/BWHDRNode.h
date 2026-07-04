/* Runtime dump - BWHDRNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWHDRNode : BWNode <BWBracketSettingsProvider>
{
    /* block */ id * _createSampleBufferProcessorFunction;
    int _clientPID;
    NSDictionary * _sensorIDDictionary;
    struct OpaqueFigSampleBufferProcessor * _sampleBufferProcessor;
    int _bracketCount;
    NSArray * _exposureValues;
    id _pendingBracketBuffers;
    char _preBracketedFrameReceived;
    FigCaptureStillImageSettings * _currentCaptureSettings;
}

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
- (BWHDRNode *)initWithClientPID:(int)arg0 sensorIDDictionary:(NSDictionary *)arg1;
- (void)handleNodeError:(NSError *)arg0 forInput:(NSObject *)arg1;
- (void)_hdrProcessorOutputReady:(long)arg0 sampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end
