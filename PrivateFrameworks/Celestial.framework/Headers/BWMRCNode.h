/* Runtime dump - BWMRCNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMRCNode : BWNode
{
    /* block */ id * _createSampleBufferProcessorFunction;
    struct OpaqueFigSampleBufferProcessor * _sampleBufferProcessor;
    NSArray * _symbologiesArray;
    NSArray * _mrcIdentifiers;
    int _metadataOutputRate;
    int _lastMRCCount;
    struct CGRect _rectOfInterest;
    NSDictionary * _metadataIdentifierToSymbologyDictionary;
}

+ (void)initialize;

- (struct CGRect)rectOfInterest;
- (void)setRectOfInterest:(struct CGRect)arg0;
- (void)dealloc;
- (BWMRCNode *)init;
- (NSString *)nodeType;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (long)_setupSampleBufferProcessor;
- (void)setMrcIdentifiers:(NSArray *)arg0;
- (NSString *)_newSymbologiesArrayFromIdentifiers:(id)arg0;
- (void)_teardownSampleBufferProcessor;
- (NSArray *)mrcIdentifiers;
- (char)_shouldEmitSBuf:(int)arg0;

@end
