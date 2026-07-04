/* Runtime dump - BWSampleBufferSinkNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSampleBufferSinkNode : BWSinkNode
{
    id _sampleBufferAvailableHandler;
}

@property (copy, nonatomic) id sampleBufferAvailableHandler;

+ (void)initialize;

- (void)dealloc;
- (BWSampleBufferSinkNode *)init;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)handleNodeError:(NSError *)arg0 forInput:(NSObject *)arg1;
- (void)setSampleBufferAvailableHandler:(id /* block */)arg0;
- (BWSampleBufferSinkNode *)initWithInputMediaType:(unsigned long)arg0;
- (id /* block */)sampleBufferAvailableHandler;

@end
