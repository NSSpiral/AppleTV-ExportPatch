/* Runtime dump - BWParallelJoinerNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWParallelJoinerNode : BWFunnelNode
{
    int _inputsCount;
    NSMutableDictionary * _receivedBuffers;
    NSMutableDictionary * _sentErrorCountForID;
}

- (void)dealloc;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)handleNodeError:(NSError *)arg0 forInput:(NSObject *)arg1;
- (BWParallelJoinerNode *)initWithNumberOfInputs:(int)arg0 mediaType:(unsigned long)arg1;

@end
