/* Runtime dump - BWSynchronizerNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSynchronizerNode : BWNode
{
    struct OpaqueCMClock * _sourceClock;
    struct OpaqueCMClock * _masterClock;
    id _ptsSyncHistory;
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
}

+ (void)initialize;

- (struct OpaqueCMClock *)masterClock;
- (void)setMasterClock:(struct OpaqueCMClock *)arg0;
- (void)dealloc;
- (NSString *)nodeType;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BWSynchronizerNode *)initWithMediaType:(unsigned long)arg0;
- (void)setSourceClock:(struct OpaqueCMClock *)arg0;
- (void)handleDroppedSample:(NSObject *)arg0 forInput:(NSObject *)arg1;
- (void)_updatePTSSyncHistoryWithSourceTime:(struct ?)arg0 syncedTime:(struct ?)arg1;
- (void)_synchronizeDetectedFaces:(id)arg0 metadata:(NSData *)arg1 timescale:(int)arg2;
- (struct ?)_getSyncedTimeForSourceTime:(struct ?)arg0;
- (struct OpaqueCMClock *)sourceClock;

@end
