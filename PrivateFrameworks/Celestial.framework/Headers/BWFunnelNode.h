/* Runtime dump - BWFunnelNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFunnelNode : BWNode

+ (void)initialize;

- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleNodeError:(NSError *)arg0 forInput:(NSObject *)arg1;
- (BWFunnelNode *)initWithNumberOfInputs:(int)arg0 mediaType:(unsigned long)arg1;

@end
