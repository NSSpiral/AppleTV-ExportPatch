/* Runtime dump - BWFanOutNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFanOutNode : BWNode
{
    id * _outputsCArray;
    int _outputsCount;
}

- (void)dealloc;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleNodeError:(NSError *)arg0 forInput:(NSObject *)arg1;
- (BWFanOutNode *)initWithFanOutCount:(int)arg0 mediaType:(unsigned long)arg1;
- (void)makeCurrentConfigurationLive;
- (char)hasNonLiveConfigurationChanges;
- (void)handleDroppedSample:(NSObject *)arg0 forInput:(NSObject *)arg1;

@end
