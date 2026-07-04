/* Runtime dump - MTLDebugCommandBuffer
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer

- (MTLDebugCommandBuffer *)initWithCommandBuffer:(NSObject *)arg0 commandQueue:(NSObject *)arg1;
- (NSObject *)blitCommandEncoder;
- (NSObject *)computeCommandEncoder;
- (NSObject *)parallelRenderCommandEncoderWithDescriptor:(NSObject *)arg0;
- (NSObject *)sampledRenderCommandEncoderWithDescriptor:(NSObject *)arg0 programInfoBuffer:(struct ? *)arg1 capacity:(unsigned int)arg2;
- (NSObject *)sampledComputeCommandEncoderWithProgramInfoBuffer:(struct ? *)arg0 capacity:(unsigned int)arg1;
- (NSObject *)renderCommandEncoderWithDescriptor:(NSObject *)arg0;

@end
